//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSUserNotificationCenterDelegate.h"

@class MFMailbox, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface UserNotificationCenterController : NSObject <NSUserNotificationCenterDelegate>
{
    MFMailbox *_userNotificationMailbox;
    long long _userNotificationScope;
    NSMutableDictionary *_messagesInNeedingSnippetsInMailboxes;
    NSMutableSet *_messagesSentBySelf;
    NSMutableSet *_forcedNotificationMessageIDs;
    NSMutableArray *_mostRecentMessageDates;
    BOOL _isRichList;
    BOOL _shouldLogUserNotificationEvents;
    NSOperationQueue *_operationQueue;
    unsigned long long _numberOfSnippetLines;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL shouldLogUserNotificationEvents; // @synthesize shouldLogUserNotificationEvents=_shouldLogUserNotificationEvents;
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
@property(nonatomic) BOOL isRichList; // @synthesize isRichList=_isRichList;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (BOOL)_shouldSendUserNotificationForMessage:(id)arg1 inMailbox:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldActivateForNotification:(id)arg2;
- (void)setUserNotificationScope:(long long)arg1 mailbox:(id)arg2;
- (long long)userNotificationScope;
- (void)_deleteUserNotificationWithKey:(id)arg1 object:(id)arg2;
- (void)_mailAccountsChanged:(id)arg1;
- (void)_viewerLayoutPreferenceChanged:(id)arg1;
- (void)_messagesWereReadOrDeleted:(id)arg1;
- (void)_sendUserNotificationForSenderName:(id)arg1 subject:(id)arg2 snippet:(id)arg3 messageID:(id)arg4 accountID:(id)arg5 mailboxPersistentID:(id)arg6 messageDate:(id)arg7 isVip:(BOOL)arg8 hasAttachments:(BOOL)arg9;
- (void)_postUserNotificationForMessagesInMailboxes:(id)arg1 withSnippets:(id)arg2;
- (void)_messageSnippetsUpdated:(id)arg1;
- (id)_snippetsForMessagesInMailboxes:(id)arg1;
- (void)_ruleWasMatched:(id)arg1;
- (BOOL)_shouldGetSnippetForMessage:(id)arg1;
- (void)_messagesWereAdded:(id)arg1;
- (void)_snippetLinePreferenceChanged:(id)arg1;
- (void)_setUserNotificationMailbox:(id)arg1;
- (id)userNotificationMailbox;
- (void)_mailboxWillBeInvalidated:(id)arg1;
- (void)_clearNotificationsForDeletedAccounts;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
