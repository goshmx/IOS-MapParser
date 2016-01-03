//
//  MainObject.h
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MainObject : NSObject
@property (nonatomic,strong) NSString *humidity;
@property (nonatomic,strong) NSString *pressure;
@property (nonatomic,strong) NSString *temp;
@property (nonatomic,strong) NSString *temp_max;
@property (nonatomic,strong) NSString *temp_min;
@end
