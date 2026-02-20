#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads digital input from an Infrared (IR) obstacle detection sensor
 * connected to IR_SENSOR_PIN and determines the presence of an object
 * using simple digital logic.
 */

// STEP 1: Define IR sensor digital pin

#define IR_SENSOR_PIN 2

int irState = 0;

void setup() {

    // STEP 2: Initialize Serial communication
    Serial.begin(9600);
}

void loop() {
}

void loop() {
}