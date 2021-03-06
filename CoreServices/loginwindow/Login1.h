//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FirstLoginOptimizer, LoginAuthRefMgr, NSDictionary, NSImage, NSString, NSURL;

@interface Login1 : NSObject
{
    id loginDefaults;
    long long lastFailedLogin;
    long long deadTime;
    NSString *_upgradeInstallType;
    BOOL _appleUpgradeFileFound;
    BOOL _appleUpgradeWithMiniBuddyLaunch;
    BOOL _appleUpgradeDarkInstall;
    BOOL _minibuddyRan;
    NSDictionary *_appleUpgradeDictionary;
    unsigned int mOldSessionID;
    LoginAuthRefMgr *_loginAuthRefMgr;
    BOOL _fileVaultMounted;
    BOOL _managedAccount;
    BOOL _firstLoginAfterPanic;
    BOOL _firstLoginAfterHardRestart;
    NSImage *_userPicture;
    unsigned long long _fileVaultHomeDirSize;
    unsigned long long _fileVaultImageSize;
    NSString *_fileVaultDevicePath;
    NSURL *_fileVaultImageURL;
    struct __DASession *_fileVaultDASession;
    struct __CFRunLoop *_fileVaultDAThreadRunLoop;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_blockFVTimeMachineBackupVolumeUnmountFile;
    struct __SCDynamicStore *_sc_callback_store;
    int _homeDirType;
    FirstLoginOptimizer *_firstLoginOptimizer;
}

@property(readonly) FirstLoginOptimizer *firstLoginOptimizer; // @synthesize firstLoginOptimizer=_firstLoginOptimizer;
- (void)loadFVCompactionOptionPrefSettings;
- (BOOL)homeDirWillGoAwayAtLogout;
- (void)setHomeDirType:(int)arg1;
- (int)homeDirType;
- (id)fileVaultImageURL;
- (void)setFileVaultImageURL:(id)arg1;
- (const char *)longName;
- (const char *)shortName;
- (BOOL)isFirstLoginAfterHardRestart;
- (BOOL)isFirstLoginAfterPanic;
- (BOOL)isAdminAccount:(BOOL)arg1;
- (BOOL)isGuestAccount;
- (BOOL)fileVaultMounted;
- (unsigned int)groupID;
- (unsigned int)userID;
- (id)shortNameString;
- (BOOL)isDarkInstall;
- (void)setIsDarkInstall:(BOOL)arg1;
- (BOOL)appleUpgradeFileFound;
- (BOOL)upgradeInstallWithMiniBuddyLaunch;
- (id)upgradeInstallType;
- (id)appleUpgradeDictionary;
- (BOOL)setupUpgradeInstallIfNeeded;
- (void)deleteUpgradeInstallIfNeeded;
- (void)cancelRequests;
- (void)dealloc;
- (void)setAuthRefMgr:(id)arg1;
- (void)doLogin;
- (id)setCorrectValuesInSessionListForList:(id)arg1 deleteThisSession:(BOOL)arg2 session:(unsigned int)arg3;
- (BOOL)isUserSuspended:(unsigned int)arg1 sessionList:(struct __CFArray *)arg2;
- (void)launchInstallerHelper;
- (void)launchWorkspace;
- (void)resetAppleIDLoginIfNeeded;
- (void)continueLaunchWorkspace;
- (BOOL)startMiniBuddy;
- (BOOL)delayLoginForMiniBuddyOptionSet;
- (void)pauseForManagedClientUpdateIfNeeded;
- (BOOL)lockScreenIfNeeded;
- (BOOL)lockScreenForDarkInstallIfNeeded;
- (void)initWorkspacesIfNeeded;
- (unsigned int)userDefaultEncoding;
- (char *)pathToUserTextEncodingFile;
- (void)setupEnvironment;
- (void)resetDevicePermissions;
- (void)perUserLaunchdInit;
- (void)setDevicePermissionsToUserID:(unsigned int)arg1 groupID:(unsigned int)arg2;
- (void)unregisterCoreCursors;
- (void)doLoginHook;
- (BOOL)useMCXLoginLogoutHooks;
- (void)invokeHookCommand:(id)arg1 withAdditionalArgs:(id)arg2;
- (id)init;
- (void)setSessionSafeBootMode;
- (const char *)homeDirPath;
- (const char *)shell;
- (void)unregisterFVDiskArbUnmountApproval;
- (void)registerFVDiskArbUnmountApproval;
- (id)fileVaultDevicePath;
- (void)launchUserAccountUpdaterIfNecessary;

@end

