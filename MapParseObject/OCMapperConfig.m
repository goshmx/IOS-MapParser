//
//  OCMapperConfig.m
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import "OCMapperConfig.h"
#import "OCMapper.h"
#import "Declarations.h"

@implementation OCMapperConfig
+ (void)configure {
    InCodeMappingProvider *inCodeMappingProvider = [[InCodeMappingProvider alloc] init];
    CommonLoggingProvider *commonLoggingProvider = [[CommonLoggingProvider alloc] initWithLogLevel:LogLevelError];
    
    [[ObjectMapper sharedInstance] setMappingProvider:inCodeMappingProvider];
    [[ObjectMapper sharedInstance] setLoggingProvider:commonLoggingProvider];
    
    /******************* Alerts **********************/
    /*[inCodeMappingProvider mapFromDictionaryKey:@"zones" toPropertyKey:@"zones"
                                 withObjectType:[ZonesObject class] forClass:[ObjectResponse class]];*/

    /******************* mapping **********************/
    [inCodeMappingProvider mapFromDictionaryKey:@"weather" toPropertyKey:@"weather"
     withObjectType:[WeatherObject class] forClass:[WeatherResponse class]];

    [inCodeMappingProvider mapFromDictionaryKey:@"description" toPropertyKey:@"weather_description"
                                 withObjectType:[NSString class] forClass:[WeatherObject class]];

    [inCodeMappingProvider mapFromDictionaryKey:@"main" toPropertyKey:@"main_object"
                                 withObjectType:[MainObject class] forClass:[WeatherResponse class]];

}
@end
