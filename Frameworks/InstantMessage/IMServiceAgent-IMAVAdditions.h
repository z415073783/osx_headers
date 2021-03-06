//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMServiceAgent.h"

@interface IMServiceAgent (IMAVAdditions)
- (void)daemonControllerDidDisconnect;
- (oneway void)setAVManagerRequested:(BOOL)arg1 URLToShare:(id)arg2;
- (oneway void)videoStill:(id)arg1 providedForPerson:(id)arg2 result:(unsigned int)arg3 responseID:(id)arg4;
- (oneway void)currentAVChatInfoProvided:(id)arg1 result:(unsigned int)arg2 responseID:(id)arg3;
- (unsigned long long)requestAudioReflectorStop;
- (unsigned long long)requestAudioReflectorStart;
- (unsigned long long)_requestAudioReflector:(BOOL)arg1;
- (id)currentAVChatInfo;
- (oneway void)_videoStill:(id)arg1 providedForPerson:(id)arg2 responseID:(id)arg3 result:(unsigned int)arg4 exception:(id)arg5;
- (oneway void)_currentAVChatInfoProvided:(id)arg1 responseID:(id)arg2 result:(unsigned int)arg3 exception:(id)arg4;
@end

