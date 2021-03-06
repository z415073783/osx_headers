//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSTextField;

@interface EditDirEntryWC : NSWindowController
{
    NSTextField *mDirEntryName;
    NSTextField *mDirEntryAddress;
    NSTextField *mDirEntryPort;
    NSButton *mOKButton;
    BOOL mAddressValid;
}

- (void)controlTextDidChange:(id)arg1;
- (void)control:(id)arg1 didFailToValidatePartialString:(id)arg2 errorDescription:(id)arg3;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (void)sheetOKd:(id)arg1;
- (void)sheetCancelled:(id)arg1;
- (void)fieldEdited:(id)arg1;
- (void)setFields:(id)arg1 address:(id)arg2 port:(int)arg3;
- (void)validateAddress;
- (void)enableOK;
- (void)windowDidLoad;

@end

