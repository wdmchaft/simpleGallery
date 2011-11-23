//
//  AppDelegate_iPhone.h
//  SpicyhorseGallary
//
//  Created by realalien on 11/18/11.
//  Copyright 2011 Spicyhorse Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SplashViewController.h"

@interface AppDelegate_iPhone : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	SplashViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navController;

@property (nonatomic, retain) IBOutlet SplashViewController *viewController;

@end

