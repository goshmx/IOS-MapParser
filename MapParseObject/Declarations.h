//
//  Declarations.h
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBJson.h"
#import "ObjectMapper.h"
#import "ObjectResponse.h"
#import "WeatherResponse.h"
#import "WeatherObject.h"
#import "CoordObject.h"
#import "MainObject.h"

//Debug
#define nDebugEnable        1
#define print(x)            if(nDebugEnable){(x);}

//Operations
#define nTimeStamp          [NSString stringWithFormat:@"%lu",(long)[[NSDate date] timeIntervalSince1970] * 1]

extern NSDictionary *mjsonRegister;
extern NSDictionary *mjsonZones;
extern NSDictionary *mjsonWeather;
@interface Declarations : NSObject

@end
