//
//  ObjectResponse.h
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjectResponse : NSObject
@property (nonatomic,strong) NSString *responseStatus;
@property (nonatomic,strong) NSString *message;
@property (nonatomic,strong) NSString *data;
@end
