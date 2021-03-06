//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "ViewNavigating.h"

@class HiCloudController, HiCloudWindowController, NSAttributedString, NSScrollView, NSString, NSView, NavigateItem, SetupStateManager;

@interface HiCloudViewController : NSViewController <ViewNavigating>
{
    NSString *pageTitle;
    NSString *headerText;
    NSAttributedString *headerAttributedText;
    NSString *shieldText;
    NSString *identifier;
    NSString *logicalSection;
    NavigateItem *forwardNavigateItem;
    NavigateItem *backwardNavigateItem;
    NavigateItem *alternateNavigateItem;
    NavigateItem *secondAlternateNavigateItem;
    NavigateItem *thirdAlternateNavigateItem;
    HiCloudWindowController *windowController;
    NSScrollView *scrollView;
    NSView *applyingSettingsView;
    NSView *perpetualStatusView;
    BOOL shouldReturnFromSidetrip;
    SetupStateManager *setupStateManager;
    id <HiCloudManager> manager;
    NSString *nextViewIdentifier;
    NSString *previousViewIdentifier;
    NSString *alternateViewIdentifier;
    NSString *secondAlternateViewIdentifier;
    NSString *thirdAlternateViewIdentifier;
    HiCloudController *hiCloudController;
}

@property(copy) NSString *shieldText; // @synthesize shieldText;
@property(copy) NSAttributedString *headerAttributedText; // @synthesize headerAttributedText;
@property(copy) NSString *headerText; // @synthesize headerText;
@property(retain) NSString *logicalSection; // @synthesize logicalSection;
@property(retain) HiCloudWindowController *windowController; // @synthesize windowController;
@property(retain) NavigateItem *thirdAlternateNavigateItem; // @synthesize thirdAlternateNavigateItem;
@property(retain) NavigateItem *secondAlternateNavigateItem; // @synthesize secondAlternateNavigateItem;
@property(retain) NavigateItem *alternateNavigateItem; // @synthesize alternateNavigateItem;
@property(retain) NavigateItem *backwardNavigateItem; // @synthesize backwardNavigateItem;
@property(retain) NavigateItem *forwardNavigateItem; // @synthesize forwardNavigateItem;
@property NSString *identifier; // @synthesize identifier;
@property(copy) NSString *pageTitle; // @synthesize pageTitle;
@property(retain) HiCloudController *hiCloudController; // @synthesize hiCloudController;
@property(readonly, retain) NSString *thirdAlternateViewIdentifier; // @synthesize thirdAlternateViewIdentifier;
@property(readonly, retain) NSString *secondAlternateViewIdentifier; // @synthesize secondAlternateViewIdentifier;
@property(readonly, retain) NSString *alternateViewIdentifier; // @synthesize alternateViewIdentifier;
@property(readonly, retain) NSString *previousViewIdentifier; // @synthesize previousViewIdentifier;
@property(readonly, retain) NSString *nextViewIdentifier; // @synthesize nextViewIdentifier;
@property BOOL shouldReturnFromSidetrip; // @synthesize shouldReturnFromSidetrip;
@property(readonly, retain) id <HiCloudManager> manager; // @synthesize manager;
@property(retain) SetupStateManager *setupStateManager; // @synthesize setupStateManager;
- (id)windowLevelApplicationUIString;
- (BOOL)wantsWindowLevelApplicationUI;
- (void)stopPerpetualStatusUI;
- (void)startPerpetualStatusUI;
- (void)stopSettingsApplicationUI;
- (void)startSettingsApplicationUI;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (void)thirdAlternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (void)secondAlternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (void)alternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

