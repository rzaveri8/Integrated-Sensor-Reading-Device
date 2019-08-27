#  quest 2
(following to be replaced by report later)


## code structure
Main and modular programs reside in main folder.

### cmd_decl.h
Header file that declares modular program functions available for main.c. Include header file in both modular program and main program.

### ultrasonic-1.c
Sample modular program. Use "static" for private functions only. In this sample, *void init-us1()* and *uint32_t getDistance()* are the two public functions.

## for other modular programs
- add c program
- add public function declarations in cmd_decl.h
- test out in main.c

## pinouts
- ultrasonic sensor 1: A5 (GPIO 4)
- ultrasonic sensor 2: A0 (GPIO 25), A1 (GPIO 26)
- ir rangefinder: A3 (GPIO 39)
- wheel speed sensor: (GPIO 12)
