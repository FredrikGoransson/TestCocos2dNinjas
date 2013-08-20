//
//  HelloWorldLayer.h
//  TestCocos2dNinjas
//
//  Created by Fredrik Göransson on 8/20/13.
//  Copyright Fredrik Göransson 2013. All rights reserved.
//


#import <GameKit/GameKit.h>
#import "SimpleAudioEngine.h"
#import "GameOverLayer.h"
#import "Monster.h"
#import "LevelManager.h"

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayerColor
{
    NSMutableArray * _monsters;
    NSMutableArray * _projectiles;
    int _monstersDestroyed;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
