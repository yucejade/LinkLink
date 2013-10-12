//
//  LoadingScene.h
//  LinkLink
//
//  Created by yuce on 13-10-11.
//  Copyright 2013年 yuce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

typedef enum
{
	TargetSceneINVALID = 0,
	TargetSceneMultiLayerScene,
	TargetSceneMAX,
} TargetScenes;

@interface LoadingScene : CCScene {
    TargetScenes targetScene_;
}

+(id) sceneWithTargetScene:(TargetScenes)targetScene;
-(id) initWithTargetScene:(TargetScenes)targetScene;

@end
