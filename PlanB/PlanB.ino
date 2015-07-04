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

using namespace std;

void setup() {
    Serial.begin(9600);
}


void loop() {
    Serial.readString();
    
    vector<string> stuff = stringSplit("henk/test/jemoeder", '/');
    
    for (string henk : stuff) {
        Serial.print("Stuff is ");
        Serial.println(henk.c_str());
    }
    
    delay(1000);
}
