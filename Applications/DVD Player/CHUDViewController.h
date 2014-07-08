//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MediaUIScrubberDelegate.h"
#import "NSMenuDelegate.h"

@class CDVDMedia, CDVDPlaybackController, CHUDScanButton, CHUDTimelineScrubber, CHUDView, MediaUIButton, MediaUIPullDownButton, MediaUITimeFormatter, MediaUIToggleButton, NSBox, NSMenu, NSTextField, NSView;

@interface CHUDViewController : NSViewController <NSMenuDelegate, MediaUIScrubberDelegate>
{
    void *eventCallBackID;
    CDVDPlaybackController *playbackController;
    CDVDMedia *dvdMedia;
    NSTextField *elapsedTimeTextField;
    NSTextField *remainingTimeTextField;
    NSBox *navBox;
    MediaUITimeFormatter *hudTimeFormatter;
    MediaUIPullDownButton *hudDVDFeaturesPopupButton;
    BOOL timeRemainingShowing;
    MediaUIToggleButton *playButton;
    CHUDScanButton *ffButton;
    CHUDScanButton *rewindButton;
    MediaUIButton *prevChapterButton;
    MediaUIButton *nextChapterButton;
    MediaUIButton *stopButton;
    MediaUIButton *menuButton;
    MediaUIButton *titleButton;
    MediaUIPullDownButton *ccButton;
    CHUDView *hudView;
    double currentTime;
    CHUDTimelineScrubber *timeline;
    BOOL isTrackingHUDTimeline;
    BOOL fSetState;
    BOOL wasPlayingBeforeTracking;
    BOOL bViewAcccepted;
    BOOL playing;
    NSMenu *baseFeaturesMenu;
    BOOL shouldSyncToNewTitle;
    NSView *volumeGroupView;
}

- (void)setBaseFeaturesMenu:(id)arg1;
- (id)baseFeaturesMenu;
- (void)setDvdMedia:(id)arg1;
- (id)dvdMedia;
- (void)setPlaybackController:(id)arg1;
- (id)playbackController;
- (void)setTimeline:(id)arg1;
- (id)timeline;
- (void)setHudView:(id)arg1;
- (id)hudView;
- (void)setHudTimeFormatter:(id)arg1;
- (id)hudTimeFormatter;
- (void)cancelMenu;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)readFromUserDefaults;
- (void)writeToUserDefaults;
- (void)handleDVDEvent:(id)arg1;
- (void)makeMenuCopy:(id)arg1;
- (void)volumeChanged:(unsigned short)arg1;
- (void)syncTimeTextFields;
- (void)syncToNewTitleTime;
- (void)swapRemainingElapsedTimeTextFields:(id)arg1;
- (void)syncPlayButtonState;
- (void)setRange;
- (void)syncVolumeControls;
- (void)syncButtons;
- (void)syncToTitle;
- (void)syncToNewTitle;
- (void)timelineAction:(id)arg1;
- (void)syncVideoToTimeline:(double)arg1;
- (void)stopTracking:(id)arg1;
- (void)startTracking:(id)arg1;
- (void)scrubberDidStopTracking:(id)arg1;
- (void)scrubberWillStartTracking:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)loadDVDFeaturesMenu:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end
