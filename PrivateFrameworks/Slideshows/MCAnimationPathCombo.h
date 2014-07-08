//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCAnimationPath.h>

#import "MCAnimationPathSupport.h"

@class NSMutableSet, NSSet, NSString;

@interface MCAnimationPathCombo : MCAnimationPath <MCAnimationPathSupport>
{
    NSMutableSet *mAnimationPaths;
    NSString *mCombineOperation;
}

@property(copy) NSString *combineOperation; // @synthesize combineOperation=mCombineOperation;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;
- (void)removeAllAnimationPaths;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)addAnimationPath:(id)arg1;
- (id)animationPathForKey:(id)arg1;
@property(readonly) unsigned long long countOfAnimationPaths;
@property(readonly) NSSet *animationPaths;
- (void)addAnimationPathsToXMLElement:(id)arg1;
- (id)imprintsForAnimationPaths;
- (void)demolishAnimationPaths;
- (void)initAnimationPathsWithImprints:(id)arg1;

@end
