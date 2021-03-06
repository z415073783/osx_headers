//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHPhotoAppDelegateProtocol.h"
#import "LibraryMigrationServiceDelegate.h"
#import "MapServicesProtocol.h"
#import "RKTerminationDelegateProtocol.h"

@class ImageDB, LegacyLibraryUpgradeController, LocationController, NSDate, NSFileManager, NSMenuItem, NSMutableArray, NSString, NSURL, NSWindow, PreferenceController, PreferenceKeys, SPODDetector;

@interface AppController : NSObject <KHPhotoAppDelegateProtocol, MapServicesProtocol, LibraryMigrationServiceDelegate, RKTerminationDelegateProtocol>
{
    PreferenceController *mPreferenceController;
    BOOL mHaveOpenedDocument;
    BOOL mHaveFinishedLaunching;
    BOOL mIsFinishingLaunching;
    BOOL mDelayWindowVisibility;
    NSMenuItem *mCWRotateItem;
    NSMenuItem *mCCWRotateItem;
    NSMenuItem *mEmptyTrashItem;
    NSMenuItem *mMoveToTrashItem;
    NSMenuItem *mSubscribeToAlbumItem;
    NSMenuItem *mBrowseBackupsItem;
    NSMenuItem *mBrowseBackupsSeparatorItem;
    NSMenuItem *mPublishToPhotoStreamItem;
    NSMenuItem *mGenerateHiResThumbsItem;
    NSMenuItem *mWelcomeItem;
    NSWindow *mNotDefault;
    NSWindow *mDefaultPanel;
    PreferenceKeys *mPK;
    ImageDB *mDB;
    ImageDB *mTempDB;
    int mStartupLockFile;
    BOOL mLastStartupWasSuccessful;
    NSMutableArray *mDelayedLaunchFiles;
    NSString *mDelayedLaunchURL;
    struct CGSize mScreenSize;
    NSString *mCCWKeyEquivalent;
    unsigned long long mCCWKeyEquivalentModifierMask;
    NSString *mCWKeyEquivalent;
    unsigned long long mCWKeyEquivalentModifierMask;
    BOOL mShouldRunFirewallAlert;
    BOOL mDidBecomeActive;
    BOOL mIsPeabodyBrowsing;
    BOOL mIsMacAppStoreInstalled;
    LocationController *mLocationController;
    int _ignoreOneLastWindowClosed;
    SPODDetector *mSpodDetector;
    struct FFPMRSimpleTimer mChameleonPerformanceTimer;
    BOOL _useAlternateFontSizes;
    LegacyLibraryUpgradeController *mLegacyLibraryUpgraderController;
    BOOL mIsUpgrading;
    BOOL mLaunchedByPhotos;
    BOOL mOnlyMigrateLatestLibraries;
    BOOL mUseHardLinks;
    BOOL mFileSystemSupportsHardLinks;
    NSFileManager *mFileManager;
    NSURL *mSourceURL;
    NSURL *mWorkingURL;
    NSURL *mDestinationURL;
    unsigned long long mStatDirectoryCount;
    unsigned long long mStatFileCopyCount;
    unsigned long long mStatFileHardLinkCount;
    unsigned long long mStatFileSymLinkCount;
    unsigned long long mStatTotalBytes;
    unsigned long long mCloneProgressValue;
    unsigned long long mCloneProgressMaxValue;
    double mCloneProgressLastValue;
    BOOL mWorkingCopyAvailable;
    BOOL mCloning;
    NSDate *mStartDate;
    double mLastTimingReport;
    int _clientPID;
    id <LibraryMigrationClient> _migrationClient;
}

+ (id)vmiCache;
+ (id)sharedOperationQueue;
+ (id)controller;
+ (void)initialize;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=mDestinationURL;
@property(retain, nonatomic) NSURL *workingURL; // @synthesize workingURL=mWorkingURL;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=mSourceURL;
@property(nonatomic) BOOL useAlternateFontSizes; // @synthesize useAlternateFontSizes=_useAlternateFontSizes;
- (id).cxx_construct;
- (void)triggerDelayedLaunchURL:(id)arg1;
- (void)_registerForSleepNotifications;
- (void)setLoadingString:(id)arg1;
- (void)albumViewHasRowCount;
- (void)runAlertSheetOnWindow:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4;
- (void)runAlertSheetWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3;
- (void)goToURLWithAppName:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)_sendOpenAppleEvent;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)confirmSwitchToRoot:(id)arg1;
- (void)alertSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)relaunch:(id)arg1;
- (void)relaunch;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)_launchIPhoto;
- (void)terminateApplication;
- (void)prepareToTerminateApplication;
- (void)_saveBeforeTerminate:(id)arg1;
- (id)_currentSelectionAsRidList;
- (BOOL)finishedLaunching;
- (BOOL)isFinishingLaunching;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidHide:(id)arg1;
- (BOOL)alreadyRunning;
- (id)archiveDocument;
- (void)_loadPreferences:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)newLibraryChosen:(id)arg1;
- (void)_showWhatsNewIfNeeded;
- (void)_spodMaker:(id)arg1;
- (void)_enableSPODDetector;
- (void)sendMigrationComplete:(id)arg1 error:(id)arg2 message:(id)arg3;
- (void)sendProgress:(double)arg1 status:(id)arg2 message:(id)arg3;
- (void)sendXPCProgress:(double)arg1 status:(id)arg2;
- (void)sendXPCMigrationComplete:(id)arg1 error:(id)arg2;
- (void)clientError:(id)arg1;
- (void)openURLInPhotoLibraryMigrationUtility:(id)arg1 options:(id)arg2 client:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)upgradeLibraryFailedForPath:(id)arg1 error:(id)arg2;
- (BOOL)sendLibraryURL:(id)arg1 withMessage:(id)arg2 toProcessWithPID:(int)arg3;
- (void)sendProgressMsg:(id)arg1;
- (void)handleAppleEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)beginUpgradeFromPhotos;
- (id)window;
- (BOOL)upgradeLibrary;
- (BOOL)launchedByPhotos;
- (BOOL)_cloneLibraryFromPath:(id)arg1 toPath:(id)arg2;
- (void)_preflightLibraryAtPath:(id)arg1;
- (void)_preflightPath:(id)arg1;
- (void)_cloneWithSource:(id)arg1 relativeSource:(id)arg2 destination:(id)arg3;
- (void)_cloneLinkWithSource:(id)arg1 destination:(id)arg2;
- (id)_getInstructionForRelativeSource:(id)arg1;
- (BOOL)_createDirectoryAtPath:(id)arg1;
- (id)_createClonePathWithPath:(id)arg1;
- (unsigned long long)_availableDiskSpace:(id)arg1;
- (unsigned long long)_spaceRequiredToConvertLibrary:(id)arg1;
- (unsigned long long)_spaceRequiredForDatabaseFolder:(id)arg1;
- (BOOL)_volumeSupportsHardLinks:(id)arg1;
- (void)_logElapsedTimeWithLabel:(id)arg1;
- (void)_handleProgress;
- (void)startTasks15sAfterLaunch;
- (void)startTasks8sAfterLaunch;
- (void)startTasks3sAfterLaunch;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (BOOL)launchAsServer;
- (id)launcherInfo;
- (BOOL)didLaunchRecently;
- (double)timeIntervalSinceLaunch;
- (BOOL)lastLaunchWasSuccessful;
- (BOOL)_checkAlreadyRunning:(id)arg1;
- (BOOL)hasMacAppStoreReceipt;
- (id)tempDB;
- (id)db;
- (unsigned long long)setTempDB:(id)arg1;
- (unsigned long long)setDB:(id)arg1;
- (unsigned long long)_setDB:(id)arg1 dbPtr:(id *)arg2;
- (id)dbWithKey:(unsigned long long)arg1;
- (id)preferenceController;
- (unsigned long long)freeSpaceAtPath:(id)arg1;
- (id)_deepestExtantPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isPeabodyBrowsing;
- (void)setIsPeabodyBrowsing:(BOOL)arg1;
- (void)logMessageTracerWithDomain:(id)arg1 values:(id)arg2;
- (id)pdfCreatorString;
- (id)temporaryDirectory;
- (id)conversionRoot;
- (id)userProjectDatabasePath;
- (id)themesUpgradeDatabasePath;
- (id)themesDatabasePath;
- (void)setAlternateMapRenditionArchivePath:(id)arg1;
- (id)userDefaultLocation;
- (id)flightPlanInfoFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (id)mapPOIQuery;
- (BOOL)renditionImageExistsForMapRenditionInfo:(id)arg1;
- (BOOL)renditionImageExistsForMapRenditionWithUID:(id)arg1;
- (BOOL)renditionInfoExistsForMapRenditionWithUID:(id)arg1;
- (id)rebuildMapRenditionWithInfo:(id)arg1;
- (BOOL)destroyMapRenditionWithUID:(id)arg1;
- (id)retrieveMapRenditionInfoWithUID:(id)arg1;
- (id)retrieveMapRenditionWithUID:(id)arg1;
- (void)saveMapRenditionInfo:(id)arg1;
- (void)saveMapRendition:(id)arg1;
- (id)mapRendererWithSourceType:(int)arg1;
- (void)mapClearAllMapRenditionImages;
- (void)mapClearTileCache;
- (void)_ensureMapVectorDbPathSet;
- (void)_ensureArchivePathSet;
- (void)_ensureMapTileCachePathSet;

@end

