//
//  AppDelegate.h
//  CVS-Tycoon
//
//  Created by Zhang Zhe on 10/4/11.
//  Copyright AvalonGameArt 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
