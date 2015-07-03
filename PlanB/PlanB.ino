//
// PlanB
//
// The secret keyword to the door was not Banana :(
// Developed with [embedXcode](http://embedXcode.weebly.com)
//
// Author 		Robbert Brandsma
// 				Knullen
//
// Date			04-07-15 00:22
// Version		<#version#>
//
// Copyright	© Robbert Brandsma, 2015
// Licence		<#license#>
//
// See         ReadMe.txt for references
//


// Core library for code-sense - IDE-based
#include "Arduino.h"

void setup() {

    pinMode(13, OUTPUT);
}

//
// Brief	Loop
// Details	Blink the LED
//
// Add loop code
void loop() {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
    Serial.println("Hoi");
}
