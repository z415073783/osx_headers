//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUILabeledGadget.h>

@class EKUIPopUpButton;

@interface EKUIAvailabilityGadget : EKUILabeledGadget
{
    BOOL _showWorkingElsewhere;
    EKUIPopUpButton *_availabilityPicker;
}

+ (id)interestedChangeKeys;
@property BOOL showWorkingElsewhere; // @synthesize showWorkingElsewhere=_showWorkingElsewhere;
@property(retain) EKUIPopUpButton *availabilityPicker; // @synthesize availabilityPicker=_availabilityPicker;
- (void).cxx_destruct;
- (void)availabilityChanged:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (void)buildAvailabilityListForCalendar;
- (BOOL)shouldDisplayForEvent:(id)arg1;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)setEvent:(id)arg1;
- (BOOL)isEditable;
- (id)control;
- (double)pixelsBetweenLabelAndControl;
- (double)baselineOffset;
- (id)labelString;
- (void)addNewMenuItemToButtonForAvailability:(int)arg1 withTitle:(id)arg2;
- (id)initWithEventViewController:(id)arg1;

@end
