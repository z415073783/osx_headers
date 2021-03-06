//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreUI/FRPreferencesModule.h>

#import "NSMenuDelegate.h"

@class FRManagedUser, NSPopUpButton, NSString, SFAuthorizationView;

@interface FRParentalControlPreferencesModule : FRPreferencesModule <NSMenuDelegate>
{
    SFAuthorizationView *authorizationView;
    NSPopUpButton *limitPopUpButton;
    FRManagedUser *_user;
}

+ (BOOL)authorized;
+ (BOOL)checkParentalControlRestriction:(long long)arg1 showPrompt:(BOOL)arg2;
+ (long long)currentParentalControlLimitValue;
+ (id)limitValues;
+ (id)limitStringsAXDescription;
+ (id)limitStrings;
+ (BOOL)validLimitValue:(long long)arg1;
+ (long long)defaultLimitValue;
+ (long long)ageFromLimitValue:(long long)arg1;
@property(readonly) FRManagedUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)limitStrings;
- (void)authorizationViewDidDeauthorize:(id)arg1;
- (void)authorizationViewDidAuthorize:(id)arg1;
- (BOOL)unlocked;
- (void)awakeFromNib;
- (id)init;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

