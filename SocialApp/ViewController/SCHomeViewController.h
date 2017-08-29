//
//  SCHomeViewController.h
//  SocialApp
//
//  Created by Jiahe Chang on 8/20/17.
//  Copyright © 2017 Jiahe Chang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;

@end
