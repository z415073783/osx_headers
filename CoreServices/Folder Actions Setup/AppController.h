//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class FolderAction, KeyResponder, NSButton, NSPanel, NSSplitView, NSString, NSTableView, NSWindow;

@interface AppController : NSObject <NSWindowDelegate>
{
    NSWindow *_window;
    NSButton *_folderActionsEnableButton;
    NSSplitView *_splitView;
    id _folderActionDataSource;
    NSTableView *_folderActionTableView;
    NSButton *_folderActionPlusButton;
    NSButton *_folderActionMinusButton;
    NSButton *_folderActionShowButton;
    id _scriptDataSource;
    NSTableView *_scriptTableView;
    NSButton *_scriptPlusButton;
    NSButton *_scriptMinusButton;
    NSButton *_scriptShowButton;
    id _scriptPlusDataSource;
    NSPanel *_scriptPlusPanel;
    NSTableView *_scriptPlusTableView;
    NSButton *_scriptPlusOKButton;
    NSButton *_scriptPlusCancelButton;
    int _folderActionRowPrior;
    int _scriptRowPrior;
    KeyResponder *_windowKeyResponder;
    KeyResponder *_folderActionKeyResponder;
    KeyResponder *_scriptKeyResponder;
    FolderAction *_cleanUpFolderAction;
}

- (id)application:(id)arg1 openFiles:(id)arg2;
- (struct __CFURL *)urlRefFromDescriptor:(id)arg1;
- (void)cleanUp:(long long)arg1;
- (void)serviceConfigure:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)windowDidUpdate:(id)arg1;
- (id)window;
- (id)scriptTableView;
- (id)folderActionTableView;
- (void)scriptShow:(id)arg1;
- (void)scriptMinusDidDismiss:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)scriptMinusDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)scriptMinus:(id)arg1;
- (void)scriptPlusDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)scriptPlusCancel:(id)arg1;
- (void)scriptPlusOK:(id)arg1;
- (void)scriptPlus:(id)arg1;
- (void)scriptTable:(id)arg1;
- (void)folderActionShow:(id)arg1;
- (void)folderActionMinusDidDismiss:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)folderActionMinusDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)folderActionMinus:(id)arg1;
- (void)folderActionPlusDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)folderActionPlus:(id)arg1;
- (void)folderActionTable:(id)arg1;
- (void)folderActionsEnable:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)handleUpdateNotification:(id)arg1;
- (void)showAboutBox:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)handleSelectionDidChangeNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

