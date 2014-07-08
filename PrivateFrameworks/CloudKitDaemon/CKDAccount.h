//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDAccountInfoProvider.h"

@class ACAccountStore, ACAccountType, CKDBackingAccount, CKDClientContext, NSString;

@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    BOOL _isAnonymousAccount;
    BOOL _haveWarnedAboutServerPreferredPushEnvironment;
    ACAccountStore *_accountStore;
    ACAccountType *_acAccountType;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
}

@property(nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property(nonatomic) BOOL isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property(retain, nonatomic) ACAccountType *acAccountType; // @synthesize acAccountType=_acAccountType;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property(nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
- (void).cxx_destruct;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (id)enabledKeyboards;
- (id)regionCode;
- (id)languageCode;
- (BOOL)shouldFailAllTasks;
- (void)renewAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)deviceName;
- (id)hardwareID;
- (id)iCloudAuthToken;
- (id)cloudKitAuthToken;
- (id)containerScopedUserID;
- (id)dsid;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)serverPreferredPushEnvironment;
- (id)trafficContainerIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)bundleID;
- (id)containerID;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) BOOL isFakeAccount;
- (void)renewMescalSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetMescalSession;
- (id)mescalSession;
- (void)fetchDeviceIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchContainerScopedUserIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchPublicURLForServerType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)config;
@property(readonly, nonatomic) NSString *accountIdentifier;
- (id)initFakeAccountWithEmail:(id)arg1 password:(id)arg2 context:(id)arg3;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)_initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
