//
//  ViewController.m
//  MapParseObject
//
//  Created by TRON on 03/01/16.
//  Copyright © 2016 TRON. All rights reserved.
//

#import "Start.h"

@interface Start ()

@end

@implementation Start

- (void)viewDidLoad {
    [super viewDidLoad];
    [self getRemoteData];
    [self getWeather];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)getRemoteData{
    NSString *stPushToken = @"1234";
    mjsonRegister = [WebServices testPost:stPushToken];
    ObjectResponse *objectResponse = [Parser parseRegisterObject];
    NSString *stResponseStatus = objectResponse.responseStatus;
    
    
    //print(NSLog(@"dict = %@", dict));
    print(NSLog(@"stResponseStatus = %@", stResponseStatus));
}

-(void) getWeather{
    mjsonWeather = [WebServices getWeather];
    print(NSLog(@"mjsonWeather = %@",mjsonWeather))
    WeatherResponse *weatherResponse = [Parser parseWeatherObject];
    print(NSLog(@"weather.base = %@",weatherResponse.base))
    
    int size = (int)[weatherResponse.weather count];
    print(NSLog(@"size = %d",size))
    
    NSString *description = ((WeatherObject *)weatherResponse.weather[0]).weather_description;
    print(NSLog(@"description = %@",description))
    
}
@end
