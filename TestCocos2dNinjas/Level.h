//
//  Level.h
//  TestCocos2dNinjas
//
//  Created by Fredrik Göransson on 8/20/13.
//  Copyright (c) 2013 Fredrik Göransson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Level : NSObject

@property (nonatomic, assign) int levelNum;
@property (nonatomic, assign) float secsPerSpawn;
@property (nonatomic, assign) ccColor4B backgroundColor;

- (id)initWithLevelNum:(int)levelNum secsPerSpawn:(float)secsPerSpawn backgroundColor:(ccColor4B)backgroundColor;

@end

