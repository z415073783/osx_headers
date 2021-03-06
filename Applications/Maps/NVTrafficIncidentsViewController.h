//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSLayoutConstraint, NSView, VKTrafficIncident;

__attribute__((visibility("hidden")))
@interface NVTrafficIncidentsViewController : NSViewController
{
    NSView *_detailsContainer;
    NSLayoutConstraint *_startDateBottomConstraint;
    NSLayoutConstraint *_endDateTopConstraint;
    NSView *_dateSubview;
    NSView *_infoSubview;
}

@property __weak NSView *infoSubview; // @synthesize infoSubview=_infoSubview;
@property __weak NSView *dateSubview; // @synthesize dateSubview=_dateSubview;
@property __weak NSLayoutConstraint *endDateTopConstraint; // @synthesize endDateTopConstraint=_endDateTopConstraint;
@property __weak NSLayoutConstraint *startDateBottomConstraint; // @synthesize startDateBottomConstraint=_startDateBottomConstraint;
@property __weak NSView *detailsContainer; // @synthesize detailsContainer=_detailsContainer;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)arg1;
@property(readonly) VKTrafficIncident *incident;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

