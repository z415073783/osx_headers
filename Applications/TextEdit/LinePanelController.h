//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSTextField;

@interface LinePanelController : NSWindowController
{
    NSTextField *lineField;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)selectClicked:(id)arg1;
- (void)lineFieldChanged:(id)arg1;
- (BOOL)selectLinesUsingDescription:(id)arg1 error:(id *)arg2;
- (BOOL)getRange:(struct _NSRange *)arg1 inTextView:(id)arg2 fromLineSpec:(long long)arg3 toLineSpec:(long long)arg4 relative:(long long)arg5;
- (BOOL)parseLineDescription:(id)arg1 fromLineSpec:(long long *)arg2 toLineSpec:(long long *)arg3 relative:(long long *)arg4;
- (void)windowDidLoad;
- (id)init;

@end
