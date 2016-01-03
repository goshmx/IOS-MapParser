//
//  WeatherResponse.h
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CoordObject.h"
#import "MainObject.h"
#import "CloudsObject.h"
#import "SysObject.h"
#import "WindObject.h"

@interface WeatherResponse : NSObject
@property (nonatomic,strong) NSString       *base;
@property (nonatomic,strong) CloudsObject   *clouds;
@property (nonatomic,strong) NSString       *cod;
@property (nonatomic,strong) CoordObject    *coord;
@property (nonatomic,strong) NSString       *dt;
@property (nonatomic,strong) NSString       *ID;
@property (nonatomic,strong) MainObject     *main_object;
@property (nonatomic,strong) NSString       *name;
@property (nonatomic,strong) SysObject      *sys;
@property (nonatomic,strong) NSMutableArray *weather;
@property (nonatomic,strong) WindObject       *wind;

@end
