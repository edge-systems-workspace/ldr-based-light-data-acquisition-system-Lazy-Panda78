#include <Arduino.h>
/**
 * @file main.cpp
 * @brief LDR-based Light Intensity Monitoring
 * @author Lazy-Panda78
 * @date 2026-02-19
 *
 * @details
 * This sketch reads analog brightness data from an LDR (Light Dependent Resistor)
 * connected to an analog input (A0). It prints the raw ADC reading and a
 * human-readable brightness status to the Serial Monitor every second.
 *
 * The program is intended as a simple data acquisition and monitoring demo
 * for educational and prototyping purposes.
 */
// Pin connected to the LDR voltage divider output
int LDR_PIN = A0; /**< @brief Analog pin used to read LDR voltage */

// Last-read raw ADC value from the LDR circuit
int ldrValue = 0; /**< @brief Stores the most recent analogRead() result */
/**
 * @brief Arduino setup routine
 *
 * Initializes Serial communication at 9600 baud and prints a startup banner
 * to the Serial Monitor. This function runs once when the board powers up
 * or resets.
 *
 * @note No parameters or return value. Side effects: opens Serial.
 */
void setup() {

    Serial.begin(9600);

    Serial.println("=================================");
    Serial.println("  LDR Light Intensity Monitor");
    Serial.println("  System Initializing...");
    Serial.println("=================================");
}
