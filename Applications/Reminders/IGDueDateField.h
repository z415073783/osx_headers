//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InspectorGadget.h"

#import "DatePickerWithMiniCalDelegate.h"

@class DatePickerWithMiniCal, NSButton, NSString;

@interface IGDueDateField : InspectorGadget <DatePickerWithMiniCalDelegate>
{
    BOOL _isLoadingFromReminder;
    DatePickerWithMiniCal *_datePicker;
    NSButton *_checkbox;
}

@property BOOL isLoadingFromReminder; // @synthesize isLoadingFromReminder=_isLoadingFromReminder;
@property(retain) NSButton *checkbox; // @synthesize checkbox=_checkbox;
@property(retain) DatePickerWithMiniCal *datePicker; // @synthesize datePicker=_datePicker;
- (void).cxx_destruct;
- (struct CGPoint)labelOffset;
- (void)datePickerResignedFirstResponder;
- (void)datePickerChanged:(id)arg1;
- (void)checkboxToggled;
- (void)sizeToFit;
- (BOOL)isVisible;
- (void)updateFromReminder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
