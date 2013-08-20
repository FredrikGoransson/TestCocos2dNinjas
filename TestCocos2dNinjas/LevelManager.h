//
//  LevelManager.h
//  TestCocos2dNinjas
//
//  Created by Fredrik Göransson on 8/20/13.
//  Copyright (c) 2013 Fredrik Göransson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Level.h"

@interface LevelManager : NSObject

+ (LevelManager *)sharedInstance;
- (Level *)curLevel;
- (void)nextLevel;
- (void)reset;

@end
