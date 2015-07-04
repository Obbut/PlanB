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

void thingCallback() {
    Serial.println("CALLBACK OH ME GOD GROUP SWITCH ON EN STUFF OHMEGODGODGOD");
}
void otherThingCallBack() {
    Serial.println("YEAAAAAH OTHER THING CALLBACK AND THIS SHIT WORKS MAN, IT WORKS HOLY FUCKING FUCKING FUCK");
}

void setup() {
    Serial.begin(9600);
    handler.addURLMapping("/switch/group/on", thingCallback);
    handler.addURLMapping("/otherthing", otherThingCallBack);
}


void loop() {
    
    handler.handle("/switch/group/on");
    handler.handle("/switch/jemoeder/on");
    handler.handle("/otherthing/henk");
    handler.handle("/group/on");
    handler.handle("/on");
    Serial.println("And finally:");
    handler.handle("/otherthing");
    
    delay(1000);
}
