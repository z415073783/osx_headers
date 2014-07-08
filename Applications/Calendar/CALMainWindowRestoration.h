//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowRestoration.h"

@class NSString;

@interface CALMainWindowRestoration : NSObject <NSWindowRestoration>
{
}

+ (void)encodeRestorableState:(id)arg1 forMainController:(id)arg2;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_restoreCommonForMainController:(id)arg1 withState:(id)arg2;
+ (void)_restoreToCurrentDateWithViewController:(id)arg1;
+ (void)_restorePreviouslySelectedDateFromState:(id)arg1 viewController:(id)arg2;
+ (void)_setStartDate:(id)arg1 andActiveDate:(id)arg2 onViewController:(id)arg3;
+ (BOOL)_shouldRestorePreviouslySelectedDateFromState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
