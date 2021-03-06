//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSDatePickerCellDelegate.h"

@class CALGoToDayPicker, CALMainController, NSString;

@interface CALGoToDayDialogController : NSWindowController <NSDatePickerCellDelegate>
{
    CALGoToDayPicker *_stdDateControl;
    CALMainController *_mainController;
    CALGoToDayDialogController *_retainSelf;
}

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)apply:(id)arg1;
- (void)dateControlValidated:(id)arg1;
- (void)run;
- (void)dealloc;
- (id)init;
- (id)initWithMainController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

