//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOBluetoothDevicePair.h"

#import "D2DPairing.h"

@class D2DPeer;

@interface IOBluetoothDevicePair (IOBluetoothProtocol) <D2DPairing>
+ (id)pairingWithDevice:(id)arg1;
- (void)deviceSimplePairingComplete:(id)arg1 status:(unsigned char)arg2;
- (void)devicePairingFinished:(id)arg1 error:(int)arg2;
- (void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned int)arg2;
- (void)devicePairingKeypressNotification:(id)arg1 type:(unsigned long long)arg2;
- (void)devicePairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned long long)arg2;
- (void)devicePairingPINCodeRequest:(id)arg1;
- (void)devicePairingConnecting:(id)arg1;
- (void)devicePairingStarted:(id)arg1;
- (void)cancelPairing;
- (void)replyUserAuthorized:(BOOL)arg1;
- (void)replyPINData:(id)arg1;
- (BOOL)startPairing:(id *)arg1;
- (void)setPairingDevice:(id)arg1;
@property(readonly) D2DPeer *pairingDevice;
@property id pairingDelegate;
- (id)_startPairing;
@end

