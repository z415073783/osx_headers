//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppController : NSObject
{
}

+ (void)initialize;
- (void)quit;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)HandleICAgentDiedNotification:(id)arg1;
- (void)HandleICAgentDiedNotificationImp:(id)arg1;
- (void)HandleDeviceDisconnectedNotification:(id)arg1;
- (void)HandleDeviceDisconnectedNotificationImp:(id)arg1;
- (void)timerEvent:(id)arg1;
- (void)findLauncher;
- (void)unlinkSocket;
- (void)savePrefs;
- (void)dealloc;
- (id)init;

@end

