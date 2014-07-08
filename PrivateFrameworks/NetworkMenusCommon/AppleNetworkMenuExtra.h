//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenuExtra.h"

#import "NSMenuDelegate.h"

@class AppleNetworkMenuExtraView, NSArray, NSBundle, NSFileHandle, NSMenu, NSMenuItem, NSMutableArray, NSString;

@interface AppleNetworkMenuExtra : NSMenuExtra <NSMenuDelegate>
{
    NSBundle *mBundle;
    NSMutableArray *mImages;
    NSArray *mAlternateImages;
    NSMenu *mMenu;
    NSMenuItem *mShowStatusMenuItem;
    NSMenuItem *mShowTimeMenuItem;
    NSMenuItem *mNoConfigsMenuItem;
    struct __SCPreferences *mPrefs;
    struct __CFRunLoopSource *mRunLoopSource;
    NSFileHandle *mFileHandle;
    AppleNetworkMenuExtraView *mMenuBarView;
    NSMutableArray *mControllers;
    BOOL mProcessingPrefChanges;
}

+ (id)SCLock;
- (id)allServices;
- (BOOL)supportsInterfaceSubtype:(id)arg1;
- (BOOL)supportsInterfaceType:(id)arg1;
- (id)networkPrefSectionName;
- (id)imageNameArray;
- (id)localizedNoConfigsString;
- (id)localizedMenuNameString;
- (id)keyForShowStatusMenuTitleString;
- (id)keyForShowSpecificTimeMenuTitleString;
- (id)keyForShowTimeMenuTitleString;
- (BOOL)interfaceTypeHasSubtypes:(id)arg1;
- (void)updateMenuWidth;
- (void)setProcessingPreferenceChanges:(BOOL)arg1;
- (BOOL)processingPreferenceChanges;
- (BOOL)boolValueForKey:(id)arg1 noValueReturns:(BOOL)arg2;
- (void *)copyValueForKey:(id)arg1;
- (void)storeValue:(void *)arg1 forKey:(id)arg2;
- (id)localizedString:(id)arg1;
- (void)resetPreferences;
- (struct __SCPreferences *)preferences;
- (BOOL)isServiceConfigured:(struct __SCNetworkService *)arg1;
- (id)timeMenuForServiceControllers:(id)arg1;
- (void)createMenu;
- (void)releaseMenuItems;
- (void)loadControllers;
- (struct __SCNetworkService *)serviceInList:(id)arg1 withID:(id)arg2;
- (void)runSelfTest:(unsigned long long)arg1 duration:(double)arg2;
- (void)noopAction:(id)arg1;
- (void)a_launchNetworkPrefs:(id)arg1;
- (void)a_launchThirdPartyVPNApplication:(id)arg1;
- (void)a_showStatusInMenuBar:(id)arg1;
- (void)a_showSpecificTimeInMenuBar:(id)arg1;
- (void)a_showTimeInMenuBar:(id)arg1;
- (void)handleDynamicStoreChangedNotification:(id)arg1;
- (void)refreshForPreferencesChange:(id)arg1;
- (void)refresh:(id)arg1;
- (void)registerForPrefsFileChangeNotifications;
- (void)initializeDynamicStoreMonitoring;
- (void)delayedSetup;
- (void)loadMenuBarView;
- (id)getImage:(id)arg1;
- (void)loadImages;
- (id)AXValue;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)dealloc;
- (BOOL)convertedForNewUI;
- (id)menu;
- (void)willUnload;
- (id)initWithBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
