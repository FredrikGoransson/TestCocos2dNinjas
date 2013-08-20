//
//  Monster.h
//  TestCocos2dNinjas
//
//  Created by Fredrik Göransson on 8/20/13.
//  Copyright 2013 Fredrik Göransson. All rights reserved.
//

#import "cocos2d.h"

@interface Monster : CCSprite

@property (nonatomic, assign) int hp;
@property (nonatomic, assign) int minMoveDuration;
@property (nonatomic, assign) int maxMoveDuration;

- (id)initWithFile:(NSString *)file hp:(int)hp minMoveDuration:(int)minMoveDuration maxMoveDuration:(int)maxMoveDuration;

@end

@interface WeakAndFastMonster : Monster
@end

@interface StrongAndSlowMonster : Monster
@end
