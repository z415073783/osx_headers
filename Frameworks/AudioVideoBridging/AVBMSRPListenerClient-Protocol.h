//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVBInterface;

@protocol AVBMSRPListenerClient
- (void)didDeregisterListenerStreamID:(unsigned long long)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRegisterListenerStreamID:(unsigned long long)arg1 event:(unsigned char)arg2 onInterface:(AVBInterface *)arg3;

@optional
- (void)didDeregisterListenerStreamID:(unsigned long long)arg1;
- (void)didRegisterListenerStreamID:(unsigned long long)arg1 event:(unsigned char)arg2;
@end

