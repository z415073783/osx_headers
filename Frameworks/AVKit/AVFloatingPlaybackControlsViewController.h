//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVKit/AVPlayerControlsViewController.h>

@class AVPlayPauseShuttleControllerView, NSTimer, NSView;

@interface AVFloatingPlaybackControlsViewController : AVPlayerControlsViewController
{
    double _shuttleSliderValue;
    NSTimer *_shuttleSliderTimer;
    NSView *_initialFirstResponder;
    AVPlayPauseShuttleControllerView *_playPauseShuttleControllerView;
    CDUnknownBlockType _nextKeyViewSetupBlock;
}

+ (id)keyPathsForValuesAffectingIntrinsicControlsContentViewSize;
- (void).cxx_destruct;
- (id)initialFirstResponder;
- (BOOL)movableControlsContentView;
- (CDStruct_83cd8af5)controlsContentViewMargin;
- (struct CGSize)intrinsicControlsContentViewSize;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (id)controlsStyleIdentifier;
- (void)setupNextKeyView;
- (void)loadView;
- (void)fireShuttleSliderTimer:(id)arg1;
- (void)shuttleSliderChanged:(id)arg1;

@end

