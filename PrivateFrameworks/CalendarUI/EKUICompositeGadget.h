//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIGadget.h>

@class EKEventViewController, NSString, NSView;

@interface EKUICompositeGadget : EKUIGadget
{
    BOOL _isExpanded;
    EKEventViewController *_eventViewController;
    NSView *_view;
    NSString *_uuid;
    id <EKUILayoutItem> _parentItem;
}

@property __weak id <EKUILayoutItem> parentItem; // @synthesize parentItem=_parentItem;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) NSView *view; // @synthesize view=_view;
@property __weak EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
- (void).cxx_destruct;
- (void)enumerateSubitemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)updateKeyViewLoop;
- (BOOL)needsExpansion;
- (BOOL)isEditable;
- (BOOL)wantsAnimationSuppression;
- (BOOL)isSeparator;
- (BOOL)isContainer;
@property(setter=setExpanded:) BOOL isExpanded;
- (id)event;
- (BOOL)updateWithDiff:(id)arg1;
- (void)updateScrollState;
- (void)setEvent:(id)arg1;
- (BOOL)shouldDisplayForEvent:(id)arg1;
- (void)updateConstraints;
- (id)subgadgets;
- (id)initWithEventViewController:(id)arg1;

@end
