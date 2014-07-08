//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKPlatformScrollSwipeVelocityFilter, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface BKPlatformScrollSwipingController : NSObject
{
    BKPlatformScrollSwipeVelocityFilter *_velocityFilter;
    BOOL _stop;
    id _dragGestureMonitor;
    id _consumeMomentumMonitor;
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _animationKey;
    double _previousAnimationTarget;
    unsigned long long _previousAnimationStopTime;
    double _minOffsetOverscroll;
    double _maxOffsetOverscroll;
    double _minOffsetContent;
    double _maxOffsetContent;
    BOOL _inProgress;
    BOOL _isDrag;
    BOOL _hasAnimated;
    unsigned long long _animationInProgressCount;
    double _alignmentOffset;
    struct CGSize _boundsSize;
    double _currentOffset;
    double _currentUndampedOffset;
    double _animationStartOffset;
    double _animationTargetOffset;
    unsigned long long _animationStartTime;
    NSMutableArray *_animationCompletionBlocks;
    BOOL _updateProgressOnMainThread;
    int _swipeDirection;
    double _baseOffset;
    id <BKPlatformScrollSwipingControllerDelegate> _delegate;
}

@property(nonatomic) id <BKPlatformScrollSwipingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double baseOffset; // @synthesize baseOffset=_baseOffset;
@property(nonatomic) int swipeDirection; // @synthesize swipeDirection=_swipeDirection;
@property(nonatomic) BOOL updateProgressOnMainThread; // @synthesize updateProgressOnMainThread=_updateProgressOnMainThread;
- (void).cxx_destruct;
- (void)cancelCurrentAnimation;
- (void)animateToOffset:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating;
@property(readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property(readonly, nonatomic, getter=isDragging) BOOL dragging;
@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling;
- (unsigned long long)p_animationKey;
- (void)p_animateToTarget:(double)arg1 askDelegate:(BOOL)arg2;
- (BOOL)handleScrollWheel:(id)arg1;
- (double)p_scaledDelta:(double)arg1;
- (void)p_handleEventPhase:(id)arg1;
- (void)p_handleStartDrag:(BOOL)arg1;
- (void)p_handleMomentumPhase:(id)arg1 withVelocity:(double)arg2;
- (void)p_removeConsumeMomemtumMonitor;
- (void)p_removeDragGestureMonitor;
- (void)teardown;
- (id)initWithDirection:(int)arg1 delegate:(id)arg2;

@end
