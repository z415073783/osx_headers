//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBDarkWakeHelperDelegate.h"
#import "PBSystemIdleMonitorTimeoutListener.h"

@class NSString, NSTimer, NSWindow, PBDarkWakeHelper;

@interface PBPowerSaverManager : NSObject <PBDarkWakeHelperDelegate, PBSystemIdleMonitorTimeoutListener>
{
    int _powerNotificationToken;
    id <PBPowerSaverManagerDelegate> _delegate;
    PBDarkWakeHelper *_darkWakeHelper;
    NSWindow *_window;
    NSTimer *_pauseWhenInactiveTimer;
}

+ (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
@property int powerNotificationToken; // @synthesize powerNotificationToken=_powerNotificationToken;
@property(retain, nonatomic) NSTimer *pauseWhenInactiveTimer; // @synthesize pauseWhenInactiveTimer=_pauseWhenInactiveTimer;
@property(nonatomic) NSWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) PBDarkWakeHelper *darkWakeHelper; // @synthesize darkWakeHelper=_darkWakeHelper;
@property(nonatomic) __weak id <PBPowerSaverManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)windowChangedOcclusionState:(id)arg1;
- (void)_clearInactiveTimer;
- (void)_inactiveTimerFired:(id)arg1;
- (void)_startInactiveTimerIfNecessary;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)systemPluggedIn;
- (void)systemUnplugged;
- (void)systemBecameActive;
- (void)systemBecameInactive;
- (void)clamshellOpened;
- (void)externalDisplayAttached;
- (void)lockScreenWillBeDisplayed;
- (void)screenShieldWasLowered;
- (void)screenShieldWasRaised;
- (id)localizedPowerSaverTextForMode:(int)arg1;
- (int)powerSaverMode;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
