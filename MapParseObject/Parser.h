//
//  Parser.h
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Declarations.h"

@interface Parser : NSObject
+ (ObjectResponse *)parseRegisterObject;
+ (WeatherResponse *)parseWeatherObject;
@end
