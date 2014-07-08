//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCReachabilityDelegate.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface BRCAccountMigrator : NSObject <BRCReachabilityDelegate>
{
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

+ (void)removeMigrator:(id)arg1;
+ (BOOL)addMigrator:(id)arg1 forAccountID:(id)arg2;
- (void).cxx_destruct;
- (void)_performMigration;
- (void)_close;
- (void)resumeAndAutoClose;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
