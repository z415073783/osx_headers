//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOBluetoothUserNotification, NSButton, NSMutableArray, NSWindow;

@interface OBEXAgentAppDelegate : NSObject
{
    NSWindow *mDebugWindow;
    NSButton *mRejectRequestButton;
    NSButton *mDontRespondButton;
    NSButton *mDieWhenDoneButton;
    NSButton *mDropConnectionButton;
    IOBluetoothUserNotification *mIncomingFTPNotification;
    IOBluetoothUserNotification *mIncomingOOPNotification;
    unsigned char mFTPChannelID;
    unsigned char mOOPChannelID;
    NSMutableArray *mFTPHandlers;
    NSMutableArray *mOOPHandlers;
    struct OpaqueOBEXSessionRef *mOBEXSessionRef;
}

- (void).cxx_destruct;
- (void)newRFCOMMChannelOpened:(id)arg1 channel:(id)arg2;
- (BOOL)registerForIncomingConnections;
- (void)pushHandler:(id)arg1 fileTransferComplete:(int)arg2;
- (void)dieWhenDone:(id)arg1;
- (void)timeoutNextRequest:(id)arg1;
- (void)rejectNextRequest:(id)arg1;
- (void)dropConnection:(id)arg1;
- (void)deregisterFileTransfer:(id)arg1;
- (void)registerFileTransfer:(id)arg1;
- (void)deregisterObjectPush:(id)arg1;
- (void)registerObjectPush:(id)arg1;
- (void)quitIfLastClient;
- (void)closeTransferWindow:(id)arg1;
- (void)quit:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

@end

