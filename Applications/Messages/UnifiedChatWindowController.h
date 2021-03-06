//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatWindowController.h"

#import "IMSystemMonitorListener.h"
#import "NSMenuDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSSplitViewDelegate.h"
#import "NSUserNotificationCenterDelegate.h"

@class ChatWindowSplitViewController, NSAlert, NSMapTable, NSString, PlacardView, SONewChatDisplayController, UnifiedChatListViewController;

@interface UnifiedChatWindowController : ChatWindowController <NSSplitViewDelegate, NSUserNotificationCenterDelegate, NSMenuDelegate, IMSystemMonitorListener, NSPopoverDelegate>
{
    BOOL _searchCancelledViaButton;
    UnifiedChatListViewController *_unifiedChatListViewController;
    NSString *_deferredSelectedGUID;
    ChatWindowSplitViewController *_splitViewController;
    PlacardView *_noMessageSelectedPlacard;
    SONewChatDisplayController *_zeroChatDisplayController;
    id _queuedChatDisplayControllerObserver;
    NSMapTable *_displayCompletionBlockMap;
    NSAlert *_deliveryFailureAlert;
    id _undoObserver;
    id _selectItemObserver;
}

+ (void)restoreUnifiedChatWindowContents;
+ (void)restoreUnifiedChatWindowGeometry;
+ (void)restoreUnifiedChatWindowFrame;
+ (void)saveUnifiedChatWindow;
+ (id)_allUnifiedChatWindowControllers;
+ (id)sharedController;
+ (void)encodeSharedWindowRestorableContentStateWithCoder:(id)arg1;
@property(retain, nonatomic) id selectItemObserver; // @synthesize selectItemObserver=_selectItemObserver;
@property(retain, nonatomic) id undoObserver; // @synthesize undoObserver=_undoObserver;
@property(retain, nonatomic) NSAlert *deliveryFailureAlert; // @synthesize deliveryFailureAlert=_deliveryFailureAlert;
@property(retain, nonatomic) NSMapTable *displayCompletionBlockMap; // @synthesize displayCompletionBlockMap=_displayCompletionBlockMap;
@property(retain, nonatomic) id queuedChatDisplayControllerObserver; // @synthesize queuedChatDisplayControllerObserver=_queuedChatDisplayControllerObserver;
@property(retain, nonatomic) SONewChatDisplayController *zeroChatDisplayController; // @synthesize zeroChatDisplayController=_zeroChatDisplayController;
@property(retain, nonatomic) PlacardView *noMessageSelectedPlacard; // @synthesize noMessageSelectedPlacard=_noMessageSelectedPlacard;
@property(retain, nonatomic) ChatWindowSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(copy, nonatomic) NSString *deferredSelectedGUID; // @synthesize deferredSelectedGUID=_deferredSelectedGUID;
@property(retain, nonatomic) UnifiedChatListViewController *unifiedChatListViewController; // @synthesize unifiedChatListViewController=_unifiedChatListViewController;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (void)screenUnlocked;
- (void)screenSaverDidStop;
- (void)_systemBecameActive:(id)arg1;
- (void)_clearUnreadIfNeeded;
- (BOOL)validateMenuItem:(id)arg1;
- (void)saveDateAndSummaries;
- (void)clickFadeView:(id)arg1;
- (void)contextCloseOtherTabs:(id)arg1;
- (void)sendFile:(id)arg1;
- (void)searchInSpotlight:(id)arg1;
- (void)requestValidation:(id)arg1;
- (void)showSelectedBuddyProfile:(id)arg1;
- (void)showSelectedBuddyInfo:(id)arg1;
- (void)showInBuddyList:(id)arg1;
- (void)addToAddressBook:(id)arg1;
- (void)showInAddressBook:(id)arg1;
- (void)block:(id)arg1;
- (void)inviteToARDAsServer:(id)arg1;
- (void)inviteToARDAsClient:(id)arg1;
- (void)inviteToAudioChat:(id)arg1;
- (void)inviteToVideoChat:(id)arg1;
- (void)addABuddy:(id)arg1;
- (void)closeChatDisplayController:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)find:(id)arg1;
- (void)closeSelectedConversation:(id)arg1;
- (void)deleteSelectedConversationNoPrompt:(id)arg1;
- (void)deleteSelectedConversation:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)choosePerson:(id)arg1;
- (void)openStandaloneChatWindow:(id)arg1;
- (void)gotoPreviousChat:(id)arg1;
- (void)gotoNextChat:(id)arg1;
- (void)_messageDeliveryFailure:(id)arg1;
- (void)_chatDisplayControllerRecipientsDidChange:(id)arg1;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)selectDeferredChat;
- (void)highlightChatItem:(id)arg1 inChat:(id)arg2;
- (void)displayChatWithChatGUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)displayChatWithChatGUID:(id)arg1;
- (void)displayChatDisplayControllerAtIndex:(unsigned long long)arg1;
- (void)displayChatDisplayController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)existingChatDisplayControllerForChat:(id)arg1;
- (BOOL)containsConversation:(id)arg1;
- (void)replaceChatDisplayController:(id)arg1 withChatDisplayController:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_closeAndSaveChatDisplayControllers:(id)arg1;
- (void)tryToCloseChatDisplayControllers:(id)arg1;
- (void)_closeConversation:(id)arg1;
- (void)restoreChatWithInfo:(id)arg1;
- (void)_removeUndoObserver;
- (id)windowTitle;
- (void)chatDisplayControllerDidChange;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (void)_unifiedChatListContentsControllerSelectionDidChange:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showUnsentMessages;
- (id)informativeTextForUnsentMessageCount:(unsigned long long)arg1;
- (id)alertTextForWindowClosingSheet;
- (unsigned long long)unsentMessageCount;
- (unsigned long long)unreadMessageCount;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_makeInputLineFirstResponder;
- (void)windowDidLoad;
- (void)_loadWindow;
- (void)dealloc;
- (id)init;
- (void)_setupZeroChatViewMode;
- (void)_setChatDisplayCompletionBlock:(CDUnknownBlockType)arg1 forChatDisplayController:(id)arg2;
- (void)addLoadAndDisplayChatDisplayControllerForChatWithHandles:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAndDisplayChatDisplayControllerForNewChatWithHandles:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)openStandaloneWindowForChatController:(id)arg1;
- (void)_finishTALRestore;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)invalidateRestorableState;
- (void)restoreContentStateWithCoder:(id)arg1;
- (void)encodeRestorableContentStateWithCoder:(id)arg1;
- (void)setChatListWidth:(double)arg1;
- (double)chatListWidth;
- (void)setChatListHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_updateUIForChatListHiddenState;
@property(nonatomic) BOOL chatListHidden; // @dynamic chatListHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

