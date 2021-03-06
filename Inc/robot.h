#ifndef DDROBOT_H
#define DDROBOT_H

#include "odometry.h"
#include "motionControl.h"
#include "differentialDrive.h"
#include "pid.h"
#include "motor.h"

typedef struct {
    motor_Context *motorD, *motorG;
    odometry_Context *odometry;
    pid_Context *pidD, *pidG;
	differential_Context *differential;
	motionControl_Context *motionController;

    float distBetweenMotorWheels;

	float vitD, vitG; // vitesse consigne du point de contact de la roue et du sol
	float commandD, commandG;
	float mesureD, mesureG; // vitesse mesuree du point de contact de la roue et du sol
	float linearVelocity, angularVelocity;

    int controlMode;
    // 0: consigne position pour le deplacement d�grad� avec motion controller et ses diff�rents modes
    // 1: consigne vitesses et vitesses angulaires
    // 2: consigne vitesse roue gauche, vitesse roue droite

}diffDriveRobot_Context;

void robot_init(diffDriveRobot_Context *robot, float x0, float y0, float theta0);
void robot_update(diffDriveRobot_Context *robot, float dt);

#endif
