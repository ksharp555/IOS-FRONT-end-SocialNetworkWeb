//
//  SCUser.h
//  SocialApp
//
//  Created by Jiahe Chang on 8/24/17.
//  Copyright © 2017 Jiahe Chang. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface SCUser : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;

+ (BOOL)isUserLogin;
+ (void)userLogInSuccess;
+ (NSString *)defaultUserName;
+ (void)saveDefaultUserName:(NSString *)username;

@end
