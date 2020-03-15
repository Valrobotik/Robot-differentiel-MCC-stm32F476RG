
# Robot-differentiel-MCC-stm32F476RG

Code d'un robot à controle diffrentiel basé sur un stm32F476RG et shield Arduino Moteur (moteurs à courant continu) et encodeur à quatradure.

Ce code assure :
- Le tracking de la position du robot via l'odométrie.
- L'asservissement en vitesses des roues gauches et droites (basée sur PID).
- (optionnel) Une gestion basique de déplacements sur le terrain avec des coordonées absolues.
- Une interface de communication basée sur du Gcode pour controller simplement le robot (voir API de la carte). 

Le rovot se commande via une communication série avec les commandes documentées dans "API de la carte contrôle moteurs". 
