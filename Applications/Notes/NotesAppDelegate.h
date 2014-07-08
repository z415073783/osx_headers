//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"
#import "NSWindowRestoration.h"

@class MainWindowController, NSMutableDictionary, NSString, NSUndoManager, SharingController;

@interface NotesAppDelegate : NSObject <NSApplicationDelegate, NSWindowRestoration>
{
    NSMutableDictionary *_openNoteWindowControllers;
    SharingController *_sharingController;
    MainWindowController *_mainWindowController;
    NSUndoManager *_undoManager;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) MainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
@property(nonatomic) __weak SharingController *sharingController; // @synthesize sharingController=_sharingController;
- (void).cxx_destruct;
- (void)_defaultAccountChanged:(id)arg1;
- (void)setupDefaultAccountMenu;
- (void)_objectsDidChange:(id)arg1;
- (void)setDefaultFont:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)parentWindowForAccountStatusSheet;
- (void)showWindowForNote:(id)arg1;
- (id)singleNoteWindowControllerForNote:(id)arg1 create:(BOOL)arg2;
- (void)showMainWindow:(id)arg1;
- (id)_mainWindowController;
- (void)showAddAccountSheet:(id)arg1;
- (void)showAccountsPreferences:(id)arg1;
- (void)_windowWillClose:(id)arg1;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (BOOL)_openExternalRecord:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (void)handleOpenNoteEvent:(id)arg1 replyEvent:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
