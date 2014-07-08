//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import "EKProtocolParticipant.h"

@class NSDictionary, NSManagedObjectID, NSString, NSURL;

@interface EKFrozenAttendee : EKFrozenObject <EKProtocolParticipant>
{
    BOOL isCurrentUser;
    BOOL replyRequested;
    BOOL scheduleForceSend;
    int type;
    NSString *comment;
    NSString *email;
    NSString *name;
    NSString *scheduleStatusString;
    NSString *role;
    NSString *status;
    NSURL *URL;
}

+ (Class)meltedClass;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL;
@property(readonly, nonatomic) int type; // @synthesize type;
@property(readonly, nonatomic) NSString *status; // @synthesize status;
@property(readonly, nonatomic) NSString *role; // @synthesize role;
@property(readonly, nonatomic) BOOL scheduleForceSend; // @synthesize scheduleForceSend;
@property(readonly, nonatomic) NSString *scheduleStatusString; // @synthesize scheduleStatusString;
@property(readonly, nonatomic) BOOL replyRequested; // @synthesize replyRequested;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser;
@property(readonly, nonatomic) NSString *email; // @synthesize email;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end
