//
//  AppDelegate.h
//  LinkLink
//
//  Created by yuce on 13-10-10.
//  Copyright yuce 2013年. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"

@interface AppController : NSObject <UIApplicationDelegate>
{
	UIWindow *window_;

	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) CCDirectorIOS *director;

@end
