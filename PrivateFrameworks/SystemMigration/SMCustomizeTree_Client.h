//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SMCustomizeTreeNode_Client, SMSystem_Client;

@interface SMCustomizeTree_Client : NSObject
{
    BOOL _disableFileVaultUsersMigration;
    BOOL _simpleModeTree;
    BOOL _overallConflict;
    SMCustomizeTreeNode_Client *_root;
    SMCustomizeTreeNode_Client *_settings;
    SMCustomizeTreeNode_Client *_network;
    SMCustomizeTreeNode_Client *_machine;
    SMCustomizeTreeNode_Client *_applications;
    SMCustomizeTreeNode_Client *_library;
    SMCustomizeTreeNode_Client *_fsRoot;
    SMCustomizeTreeNode_Client *_documentsAndData;
    NSNumber *_totalSize;
    NSNumber *_freeSpace;
    SMSystem_Client *_sourceSystem;
    SMSystem_Client *_targetSystem;
    id <SMSizingDelegate> _sizingBridge;
    NSString *_migratableStateDescription;
    SMCustomizeTreeNode_Client *_volumes;
}

+ (id)keyPathsForValuesAffectingRebootRequired;
+ (id)keyPathsForValuesAffectingMigratableState;
@property(retain) SMCustomizeTreeNode_Client *volumes; // @synthesize volumes=_volumes;
@property BOOL overallConflict; // @synthesize overallConflict=_overallConflict;
@property BOOL simpleModeTree; // @synthesize simpleModeTree=_simpleModeTree;
@property(retain) NSString *migratableStateDescription; // @synthesize migratableStateDescription=_migratableStateDescription;
@property(retain) id <SMSizingDelegate> sizingBridge; // @synthesize sizingBridge=_sizingBridge;
@property(retain) SMSystem_Client *targetSystem; // @synthesize targetSystem=_targetSystem;
@property(retain) SMSystem_Client *sourceSystem; // @synthesize sourceSystem=_sourceSystem;
@property BOOL disableFileVaultUsersMigration; // @synthesize disableFileVaultUsersMigration=_disableFileVaultUsersMigration;
@property(copy) NSNumber *freeSpace; // @synthesize freeSpace=_freeSpace;
@property(readonly, copy) NSNumber *totalSize; // @synthesize totalSize=_totalSize;
@property(retain) SMCustomizeTreeNode_Client *documentsAndData; // @synthesize documentsAndData=_documentsAndData;
@property(retain) SMCustomizeTreeNode_Client *fsRoot; // @synthesize fsRoot=_fsRoot;
@property(retain) SMCustomizeTreeNode_Client *library; // @synthesize library=_library;
@property(retain) SMCustomizeTreeNode_Client *applications; // @synthesize applications=_applications;
@property(retain) SMCustomizeTreeNode_Client *machine; // @synthesize machine=_machine;
@property(retain) SMCustomizeTreeNode_Client *network; // @synthesize network=_network;
@property(retain) SMCustomizeTreeNode_Client *settings; // @synthesize settings=_settings;
@property(retain) SMCustomizeTreeNode_Client *root; // @synthesize root=_root;
- (void).cxx_destruct;
@property(readonly) BOOL rebootRequired;
@property(readonly) BOOL migratableState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)migrationRequestWithFDEPassword:(id)arg1;
- (void)addUserToTransfer:(id)arg1 toRequest:(id)arg2 excludedPaths:(id)arg3 overwriteTargetName:(id)arg4;
- (void)generateTree:(BOOL)arg1;
- (void)sizingCompletedForPath:(id)arg1;
- (void)populateSizes;
- (id)crossBridgeForSizing:(id)arg1;
- (void)sizingCompletedForUserWithUUID:(id)arg1;
- (void)addUsers:(id)arg1;
- (void)updateAllUserConflicts;
- (BOOL)_editUser:(id)arg1:(id)arg2;
- (id)_addUser:(id)arg1;
@property(readonly) __weak SMCustomizeTreeNode_Client *appropriateUserNode;
- (void)_spawnOffspringForNode:(id)arg1 andUser:(id)arg2;
- (id)_treeNodeWithUser:(id)arg1;
- (id)description;
- (void)tearDown;
- (void)dealloc;
- (id)init;

@end
