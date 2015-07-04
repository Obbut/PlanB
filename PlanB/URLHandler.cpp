//
//  URLHandler.cpp
//  PlanB
//
//  Created by Robbert Brandsma on 04-07-15.
//  Copyright (c) 2015 Knullen. All rights reserved.
//

#include "Prefix.h"
#include "URLHandler.h"
#include "Utils.h"
#include <vector>
#include <boost/algorithm/string/predicate.hpp>

void URLHandler::handle(std::string url) {
    std::vector<std::string> components = stringSplit(url, '/');
    
    for (auto& kv : urlMappings) {
        if (boost::starts_with(url, kv.first)) {
            kv.second();
        }
    }
}