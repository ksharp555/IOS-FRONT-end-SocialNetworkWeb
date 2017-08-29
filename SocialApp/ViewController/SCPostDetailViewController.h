//
//  SCPostDetailViewController.h
//  SocialApp
//
//  Created by Jiahe Chang on 8/24/17.
//  Copyright © 2017 Jiahe Chang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
