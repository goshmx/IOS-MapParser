//
//  SysObject.h
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SysObject : NSObject
@property (nonatomic,strong) NSString     *country;
@property (nonatomic,strong) NSString     *ID;
@property (nonatomic,strong) NSString     *message;
@property (nonatomic,strong) NSString     *sunrise;
@property (nonatomic,strong) NSString     *sunset;
@property (nonatomic,strong) NSString     *type;

@end
