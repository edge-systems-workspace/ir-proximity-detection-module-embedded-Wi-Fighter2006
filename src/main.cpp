#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Piyush Choudhary
 * @date 2026-02-20
 */

#define IR_SENSOR_PIN 2

int irState = 0;

void setup() {

    Serial.begin(9600);

    // STEP 3: Configure IR sensor pin as INPUT
    pinMode(IR_SENSOR_PIN, INPUT);

    // STEP 3: Print initialization message
    Serial.println("=== IR Obstacle Detection System Initialized ===");
}

void loop() {
}