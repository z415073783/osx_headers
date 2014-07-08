//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    NSMutableDictionary *_subscriptionsByServerID;
}

@property(retain, nonatomic) NSMutableDictionary *subscriptionsByServerID; // @synthesize subscriptionsByServerID=_subscriptionsByServerID;
@property(retain, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property(retain, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2;
- (void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
