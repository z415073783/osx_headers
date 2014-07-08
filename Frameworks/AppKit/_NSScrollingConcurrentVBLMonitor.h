//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _NSScrollingConcurrentConstantData, _NSScrollingConcurrentMainThreadSynchronizer, _NSScrollingConcurrentSharedData, _NSScrollingConcurrentVBLPreprocessFilter;

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentVBLMonitor : NSObject
{
    char *_isCancelledPtr;
    CDStruct_af82842b _flags;
    struct CGRect _cursorTargetFrame;
    id <_NSScrollStateEventListener> _scrollStateDelegate;
    _NSScrollingConcurrentSharedData *_sharedData;
    _NSScrollingConcurrentConstantData *_constantData;
    _NSScrollingConcurrentVBLPreprocessFilter *_preprocessFilter;
    _NSScrollingConcurrentMainThreadSynchronizer *_mainThreadSynchronizer;
}

@property(retain) _NSScrollingConcurrentMainThreadSynchronizer *mainThreadSynchronizer; // @synthesize mainThreadSynchronizer=_mainThreadSynchronizer;
@property(retain) _NSScrollingConcurrentVBLPreprocessFilter *preprocessFilter; // @synthesize preprocessFilter=_preprocessFilter;
@property(retain) _NSScrollingConcurrentConstantData *constantData; // @synthesize constantData=_constantData;
@property(retain) _NSScrollingConcurrentSharedData *sharedData; // @synthesize sharedData=_sharedData;
@property(nonatomic) id <_NSScrollStateEventListener> scrollStateDelegate; // @synthesize scrollStateDelegate=_scrollStateDelegate;
@property struct CGRect cursorTargetFrame; // @synthesize cursorTargetFrame=_cursorTargetFrame;
- (void)remove;
- (void)suspend;
- (void)resume;
- (void)_synchronizeForVBLSerialNumber:(unsigned long long)arg1 timestamp:(double)arg2 updateDuration:(double)arg3;
- (void)_updateScrollAnimation;
- (void)_checkCursorTargeting;
- (void)dealloc;
- (id)initWithConstantData:(id)arg1;

@end
