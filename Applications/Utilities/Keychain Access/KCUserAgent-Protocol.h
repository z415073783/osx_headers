//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSNotification;

@protocol KCUserAgent
+ (BOOL)currentlyOnMainThread;
- (BOOL)isMainThreadBusy;
- (void)doneBeingBusy;
- (void)showThreadIsBusy;
- (void)makeObject:(id)arg1 performSelectorInMainThread:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (void)makeObject:(id)arg1 performSelectorInMainThread:(SEL)arg2 withObject:(id)arg3;
- (void)postNotificationInMainThread:(NSNotification *)arg1;
@end

