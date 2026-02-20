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
    pinMode(IR_SENSOR_PIN, INPUT);

    Serial.println("=== IR Obstacle Detection System Initialized ===");
}

void loop() {

    // STEP 4: Read digital value from IR sensor
    irState = digitalRead(IR_SENSOR_PIN);

    Serial.print("Sensor State: ");
    Serial.println(irState);

    delay(200);
}