//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKRequest : NSObject
{
    id _requestInternal;
}

- (void)_unregisterForNotifications;
- (void)_sendFinishToDelegate;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_registerForNotifications;
- (id)_newIdentifier;
- (void)handleXPCCallback:(BOOL)arg1 object:(id)arg2;
- (void)_sendErrorForUserInfo:(id)arg1;
- (void)_sendFinishedForUserInfo:(id)arg1;
- (void)issueRequestForIdentifier:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 returningError:(id *)arg2;
@property id <SKRequestDelegate> delegate;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

