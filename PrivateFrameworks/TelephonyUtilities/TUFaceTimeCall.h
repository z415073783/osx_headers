//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUtilities/TUCall.h>

@class IMAVChat;

@interface TUFaceTimeCall : TUCall
{
    IMAVChat *_chat;
}

@property(retain, nonatomic) IMAVChat *chat; // @synthesize chat=_chat;
- (id)conferenceInviteDictionary;
- (id)remoteFrequency;
- (id)conferenceIdentifier;
- (BOOL)managesAudioRelay;
- (id)localFrequency;
- (float)localVolume;
- (BOOL)isTTY;
- (BOOL)setDownlinkMuted:(BOOL)arg1;
- (BOOL)isDownlinkMuted;
- (BOOL)setUplinkMuted:(BOOL)arg1;
- (BOOL)isUplinkMuted;
- (BOOL)playsConnectedSound;
- (BOOL)needsManualInCallSounds;
- (BOOL)managesAudioInterruptions;
- (int)faceTimeIDStatus;
- (int)disconnectedReason;
- (id)totalDataUsed;
- (double)callDuration;
- (BOOL)isEqual:(id)arg1;
- (id)callHistoryIdentifier;
- (id)callUUID;
- (id)callIdentifier;
- (BOOL)isAlerting;
- (id)callerNameFromNetwork;
- (id)destinationID;
- (id)remoteParticipant;
- (void)leaveConference;
- (void)joinConference;
- (BOOL)isConferenced;
- (BOOL)shouldPlayDTMFTone;
- (double)startTime;
- (BOOL)isBlocked;
- (BOOL)isOutgoing;
- (BOOL)isStatusFinal;
- (void)inviteWithCallIdentifier:(id)arg1;
- (void)disconnect;
- (void)answerWithSourceIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithChat:(id)arg1;

@end

