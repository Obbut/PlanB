//
//  Utils.cpp
//  PlanB
//
//  Created by Robbert Brandsma on 04-07-15.
//  Copyright (c) 2015 Knullen. All rights reserved.
//

#include "Utils.h"
#include <sstream>


using namespace std;

vector<string> stringSplit(string input, char delimiter) {
    vector<string> seglist;
    stringstream ss(input);
    string segment;
    
    while(getline(ss, segment, delimiter)) {
        seglist.push_back(segment);
    }
    
    return seglist;
}