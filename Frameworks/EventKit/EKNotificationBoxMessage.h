//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import "EKProtocolNotificationBoxMessage.h"

@class NSDictionary, NSManagedObjectID, NSNumber, NSString;

@interface EKNotificationBoxMessage : EKObject <EKProtocolNotificationBoxMessage>
{
    NSManagedObjectID *managedObjectID;
    NSNumber *messageTypeNumber;
    NSString *path;
}

+ (long long)_notificationBoxMessageTypeForCalMessageType:(int)arg1;
+ (Class)frozenClass;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (id)knownImmutableKeys;
+ (id)knownIdentityKeys;
@property(readonly, nonatomic) NSString *path; // @synthesize path;
@property(readonly, nonatomic) NSNumber *messageTypeNumber; // @synthesize messageTypeNumber;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long messageType;
- (id)initWithMessageType:(long long)arg1;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

