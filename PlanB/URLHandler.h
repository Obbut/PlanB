//
//  URLHandler.h
//  PlanB
//
//  Created by Robbert Brandsma on 04-07-15.
//  Copyright (c) 2015 Knullen. All rights reserved.
//

#ifndef __PlanB__URLHandler__
#define __PlanB__URLHandler__

#include <string>
#include <map>

typedef void (*URLHandlerCallback)();

class URLHandler {
    std::map<std::string, URLHandlerCallback> urlMappings;
public:
    /// Returns true when the url was handled or false if no handler was found.
    bool handle(std::string url);
    
    /// Returns true when the mapping has been successfully added, false otherwise.
    bool addURLMapping(std::string url, URLHandlerCallback callback);
};

#endif /* defined(__PlanB__URLHandler__) */
