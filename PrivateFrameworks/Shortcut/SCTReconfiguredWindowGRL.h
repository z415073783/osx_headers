//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Shortcut/SCTWindowGRL.h>

@class NSTimer;

@interface SCTReconfiguredWindowGRL : SCTWindowGRL
{
    NSTimer *mTimer;
}

- (void)handlePollingForMyWindow:(id)arg1;
- (void)resolveResourceAndInvoke:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)notificationKey;

@end

