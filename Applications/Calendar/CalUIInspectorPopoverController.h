//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalPopoverController.h"

#import "CalUIInspectorController.h"
#import "EKEventViewWindowController.h"

@class EKEvent, EKEventViewController, NSString, NSView;

@interface CalUIInspectorPopoverController : CalPopoverController <EKEventViewWindowController, CalUIInspectorController>
{
    BOOL _isDetached;
    BOOL _closingViaCommit;
    BOOL _isDeterminingPopoverShouldClose;
    NSView *_contentView;
    EKEventViewController *_eventViewController;
    EKEvent *_pendingEvent;
}

@property(retain) EKEvent *pendingEvent; // @synthesize pendingEvent=_pendingEvent;
@property BOOL isDeterminingPopoverShouldClose; // @synthesize isDeterminingPopoverShouldClose=_isDeterminingPopoverShouldClose;
@property BOOL closingViaCommit; // @synthesize closingViaCommit=_closingViaCommit;
@property(retain) EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
@property(retain) NSView *contentView; // @synthesize contentView=_contentView;
@property BOOL isDetached; // @synthesize isDetached=_isDetached;
- (void).cxx_destruct;
- (BOOL)shouldSkipUpdatesIfEventIsNil;
- (BOOL)wantsTimeDetectionForSuggestions;
- (void)showEvent:(id)arg1;
- (void)startDateChangedTo:(id)arg1;
- (BOOL)shouldCloseOnCommit;
- (BOOL)displayApplyButton;
- (BOOL)displayShowButton;
- (BOOL)hideRevertButtonForNonSchedulingChanges;
- (void)didCommitEvent;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1 withReason:(long long)arg2;
- (void)popoverDidDetach:(id)arg1;
- (BOOL)popoverShouldDetach:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)dismiss;
- (BOOL)isOpen;
- (id)window;
- (id)event;
- (void)detach;
- (void)showPopover;
- (void)showPopoverForEvent:(id)arg1 relativeToView:(id)arg2;
- (id)view;
- (void)eventSelectedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithMainController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
