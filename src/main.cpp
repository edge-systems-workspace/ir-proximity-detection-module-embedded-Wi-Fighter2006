#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads digital input from an IR obstacle detection sensor
 * and prints obstacle status to the Serial Monitor.
 */

#define IR_SENSOR_PIN 2

int irState = 0;

void setup() {

    Serial.begin(9600);
    pinMode(IR_SENSOR_PIN, INPUT);

    Serial.println("=== IR Obstacle Detection System Initialized ===");
}

void loop() {

    // Read digital value from IR sensor
    irState = digitalRead(IR_SENSOR_PIN);

    // If obstacle detected (Most IR modules output LOW when obstacle present)
    if (irState == LOW) {
        Serial.println("Obstacle Detected");
    } 
    else {
        Serial.println("No Obstacle");
    }

    // Small delay for readability
    delay(300);
}