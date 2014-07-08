//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSWindow, _NCNotificationCenterConnection;

@interface NCNotificationPlaceholderAlert : NSObject
{
    _NCNotificationCenterConnection *_connection;
    NSWindow *_window;
    unsigned long long _disableUpdatesToken;
    _Bool _showingAlert;
}

- (void).cxx_destruct;
- (void)_windowLevelChanged:(id)arg1;
- (void)_sendRemoveAlert:(BOOL)arg1;
- (void)_renableUpdates:(id)arg1;
- (void)_disableUpdatesAndShowWindow:(id)arg1;
- (void)_sendShowAlert:(_Bool)arg1 animation:(int)arg2;
- (void)_got_server_keep_alive:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)close;
- (void)resize:(double)arg1;
- (void)dealloc;
- (id)initWithAnimation:(int)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithReadyBlock:(CDUnknownBlockType)arg1;

@end
