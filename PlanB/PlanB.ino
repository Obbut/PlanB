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
#include <vector>
#include "Utils.h"
#include "URLHandler.h"

using namespace std;

URLHandler handler;

void henk() {
    Serial.println("Henk hier");
}

void setup() {
    Serial.begin(9600);
    Serial.setTimeout(10000);
    
    handler.addURLMapping("/test/henk", henk);
}


void loop() {
    
    String str = Serial.readStringUntil('\n');
    handler.handle(str.c_str());
}
