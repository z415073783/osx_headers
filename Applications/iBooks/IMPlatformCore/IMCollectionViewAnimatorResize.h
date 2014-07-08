//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMPlatformCore/IMCollectionViewAnimator.h>

@class NSArray, NSMapTable, NSMutableSet, NSObject<OS_dispatch_group>;

@interface IMCollectionViewAnimatorResize : IMCollectionViewAnimator
{
    BOOL _shouldAnimateAllCells;
    BOOL _forceNonAnimated;
    BOOL _didPerformAscend;
    BOOL _didPerformDescend;
    NSObject<OS_dispatch_group> *_group;
    NSMapTable *_changeToCellMap;
    NSArray *_ascendingChanges;
    NSArray *_descendingChanges;
    NSArray *_flatChanges;
    NSArray *_currentChanges;
    NSMutableSet *_lockedCells;
    unsigned long long _runCount;
}

@property(nonatomic) BOOL didPerformDescend; // @synthesize didPerformDescend=_didPerformDescend;
@property(nonatomic) BOOL didPerformAscend; // @synthesize didPerformAscend=_didPerformAscend;
@property(nonatomic) unsigned long long runCount; // @synthesize runCount=_runCount;
@property(nonatomic) BOOL forceNonAnimated; // @synthesize forceNonAnimated=_forceNonAnimated;
@property(nonatomic) BOOL shouldAnimateAllCells; // @synthesize shouldAnimateAllCells=_shouldAnimateAllCells;
@property(retain, nonatomic) NSMutableSet *lockedCells; // @synthesize lockedCells=_lockedCells;
@property(retain, nonatomic) NSArray *currentChanges; // @synthesize currentChanges=_currentChanges;
@property(retain, nonatomic) NSArray *flatChanges; // @synthesize flatChanges=_flatChanges;
@property(retain, nonatomic) NSArray *descendingChanges; // @synthesize descendingChanges=_descendingChanges;
@property(retain, nonatomic) NSArray *ascendingChanges; // @synthesize ascendingChanges=_ascendingChanges;
@property(retain, nonatomic) NSMapTable *changeToCellMap; // @synthesize changeToCellMap=_changeToCellMap;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (BOOL)_isDescendingChange:(id)arg1;
- (BOOL)_isAscendingChange:(id)arg1;
- (struct CGRect)_transitionRectForChange:(id)arg1;
- (void)_performSupplementaryViewChanges:(id)arg1 decorationViewChanges:(id)arg2 dragAndDropChanges:(id)arg3;
- (void)_performAscendAnimations;
- (void)_performDescendAnimations;
- (void)_performImplicitAnimations;
- (void)_updateStateWithChanges:(id)arg1;
- (void)finish;
- (void)runWithUpdate:(id)arg1 cellChanges:(id)arg2 supplementaryViewChanges:(id)arg3 decorationViewChanges:(id)arg4 dragAndDropChanges:(id)arg5;
- (id)initWithCollectionView:(id)arg1;

@end
