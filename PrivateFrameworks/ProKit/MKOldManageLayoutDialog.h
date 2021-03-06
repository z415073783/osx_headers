//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDelegate.h"
#import "NSWindowDelegate.h"

@class NSArrayController, NSButton, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface MKOldManageLayoutDialog : NSWindowController <NSWindowDelegate, NSTableViewDelegate>
{
    NSTableView *_layoutTable;
    NSButton *_applyButton;
    NSArrayController *_arrayController;
    NSButton *_addLayoutButton;
    NSButton *_removeLayoutButton;
    void *_proReserved4;
    void *_proReserved5;
    void *_proReserved6;
}

- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)endEditing;
- (void)editLayoutNameAtRow:(long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)applyLayout:(id)arg1;
- (void)removeLayout:(id)arg1;
- (void)addLayout:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)layoutManager;
- (void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

