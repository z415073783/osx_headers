//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKProtocolMutableObject.h"
#import "EKProtocolParticipant.h"

@class NSString;

@protocol EKProtocolMutableParticipant <EKProtocolParticipant, EKProtocolMutableObject>
- (void)setScheduleForceSend:(BOOL)arg1;
- (void)setStatus:(NSString *)arg1;
- (void)setReplyRequested:(BOOL)arg1;
@end

