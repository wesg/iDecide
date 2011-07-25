//
//  iDecideAppDelegate.h
//  iDecide
//
//  Created by Wesley Gorman on 25/07/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iDecideViewController;

@interface iDecideAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet iDecideViewController *viewController;

@end
