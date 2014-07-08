//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTableView;

@interface APLPresetsController : NSObject
{
    id printController;
    id deleteButton;
    id duplicateButton;
    NSTableView *presetsTableView;
    id renameButton;
}

- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)renamePreset:(id)arg1;
- (BOOL)hasPresetWithName:(id)arg1;
- (id)copiedNameFromPreset:(id)arg1;
- (void)duplicatePreset:(id)arg1;
- (void)done:(id)arg1;
- (void)deletePreset:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;

@end
