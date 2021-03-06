//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCollectionItemMessagingAvailabilityHelper : NSObject
{
    BOOL _availableForMessaging;
    NSString *_endpoint;
}

@property(copy) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(getter=isAvailableForMessaging) BOOL availableForMessaging; // @synthesize availableForMessaging=_availableForMessaging;
- (void)updateMessagingAvailabilityWithNotification:(id)arg1;
- (void)startAvailabilityCheckForEndpoint:(id)arg1 property:(id)arg2;
- (void)dealloc;
- (id)init;

@end

