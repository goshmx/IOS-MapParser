//
//  WeatherObject.h
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeatherObject : NSObject
@property (nonatomic,strong) NSString *ID;
@property (nonatomic,strong) NSString *main;
@property (nonatomic,strong) NSString *weather_description;
@property (nonatomic,strong) NSString *icon;
@end
