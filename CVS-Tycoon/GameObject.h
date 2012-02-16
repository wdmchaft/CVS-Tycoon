//
//  GameObject.h
//  CVS-Tycoon
//
//  Created by Zhang Zhe on 9/27/11.
//  Copyright 2011 AvalonGameArt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CommonProtocols.h"

@class FiniteStateMachine;

@interface GameObject : CCNode
{
}

@property (nonatomic) CGPoint position;
@property (strong, nonatomic) FiniteStateMachine* mainFSM;
@property (strong, nonatomic) NSMutableDictionary* animationDict;

-(void)updateStateWithDeltaTime:(ccTime)deltaTime
           andListOfGameObjects:(CCArray*)listOfGameObjects;

-(CGRect)adjustedBoundingBox;

-(void)loadPlistForAnimation:(NSString*)plistName;
@end
