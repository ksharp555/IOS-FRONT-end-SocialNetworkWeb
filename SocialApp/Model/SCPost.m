//
//  SCPost.m
//  SocialApp
//
//  Created by Jiahe Chang on 8/17/17.
//  Copyright © 2017 Jiahe Chang. All rights reserved.
//

#import "SCPost.h"
#import "Mapkit/MapKit.h"

@implementation SCPost

- (instancetype) initWithDictionary: (NSDictionary *)dictionary
{
    if (self = [super init]) {
        self.userName = dictionary[@"user"];
        self.message = dictionary[@"message"];
        CLLocationDegrees latitute = [dictionary[@"location"][@"lat"] doubleValue];
        CLLocationDegrees longtitude = [dictionary[@"location"][@"lon"] doubleValue];
        self.location = [[CLLocation alloc] initWithLatitude:latitute longitude:longtitude];
        return self;

    }
    return self;
}

@end
