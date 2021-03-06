//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSScrollView, NSString, NSTextField, NSTimer;

__attribute__((visibility("hidden")))
@interface GLUTClipboardController : NSWindowController <NSWindowDelegate>
{
    NSScrollView *_scrollView;
    NSTextField *_infoText;
    NSTimer *_updateTimer;
    int _lastChangeCount;
    BOOL _firstTime;
}

- (void)updateClipboardWindow;
- (void)_getUnknownView:(id *)arg1 description:(id *)arg2 fromPasteboard:(id)arg3 type:(id)arg4;
- (void)_getImageView:(id *)arg1 description:(id *)arg2 fromPasteboard:(id)arg3 type:(id)arg4;
- (void)_getTextView:(id *)arg1 description:(id *)arg2 fromPasteboard:(id)arg3 type:(id)arg4;
- (BOOL)isClipboardWindowVisible;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowWillMiniaturize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)_checkPasteboard;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleWindow:(id)arg1;
- (void)windowDidLoad;
- (void)_clearAutoupdateTimer;
- (void)_installAutoupdateTimer;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

