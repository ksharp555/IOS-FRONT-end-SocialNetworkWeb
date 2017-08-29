//
//  SCPost.h
//  SocialApp
//
//  Created by Jiahe Chang on 8/17/17.
//  Copyright © 2017 Jiahe Chang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CLLocation;

@interface SCPost : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) CLLocation *location;

- (instancetype) initWithDictionary: (NSDictionary *)dictionary;
@end
