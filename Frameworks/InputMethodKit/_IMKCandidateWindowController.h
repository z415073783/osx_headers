//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSString, _IMKCandidateController;

@interface _IMKCandidateWindowController : NSWindowController <NSWindowDelegate>
{
    _IMKCandidateController *_controller;
    struct CGSize _requestedExpandSize;
    BOOL _resizing;
    BOOL _vScrollerTempHidden;
    BOOL _hScrollerTempHidden;
}

@property(readonly) _IMKCandidateController *controller; // @synthesize controller=_controller;
- (void)_delayedAdjustWindowSize;
- (id)_createWindow;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)adjustWindowSizeByContentDiff:(struct CGSize)arg1;
- (void)setWindowFrame:(struct CGRect)arg1 animation:(BOOL)arg2;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

