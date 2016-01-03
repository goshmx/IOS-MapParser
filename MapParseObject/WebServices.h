//
//  WebServices.h
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WebServices : NSObject
+ (NSDictionary *)testPost:(NSString *)pushToken;
+ (NSDictionary *)getWeather;
@end
