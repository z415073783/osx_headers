//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"
#import "CPLEngineComponent.h"

@class CPLEngineChangePipe, CPLEngineClientCache, CPLEngineCloudCache, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineResourceDownloadQueue, CPLEngineResourceStorage, CPLEngineResourceUploadQueue, CPLEngineTransientRepository, CPLPlatformObject, NSArray, NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    NSHashTable *_storages;
    NSObject<OS_dispatch_queue> *_batchedTransactionsQueue;
    NSMutableArray *_batchedTransactions;
    BOOL _batchedTransactionDequeueIsScheduled;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    CPLEngineChangePipe *_pushQueue;
    CPLEngineChangePipe *_pullQueue;
    CPLEngineIDMapping *_idMapping;
    CPLEngineClientCache *_clientCache;
    CPLEngineCloudCache *_cloudCache;
    CPLEngineTransientRepository *_transientPullRepository;
    CPLEngineResourceStorage *_resourceStorage;
    CPLEngineResourceDownloadQueue *_downloadQueue;
    CPLEngineResourceUploadQueue *_uploadQueue;
    unsigned long long _state;
}

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CPLEngineResourceUploadQueue *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(readonly, nonatomic) CPLEngineResourceDownloadQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(readonly, nonatomic) CPLEngineResourceStorage *resourceStorage; // @synthesize resourceStorage=_resourceStorage;
@property(readonly, nonatomic) CPLEngineTransientRepository *transientPullRepository; // @synthesize transientPullRepository=_transientPullRepository;
@property(readonly, nonatomic) CPLEngineCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(readonly, nonatomic) CPLEngineClientCache *clientCache; // @synthesize clientCache=_clientCache;
@property(readonly, nonatomic) CPLEngineIDMapping *idMapping; // @synthesize idMapping=_idMapping;
@property(readonly, nonatomic) CPLEngineChangePipe *pullQueue; // @synthesize pullQueue=_pullQueue;
@property(readonly, nonatomic) CPLEngineChangePipe *pushQueue; // @synthesize pushQueue=_pushQueue;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)assertCanRead;
- (void)assertCanWrite;
- (BOOL)_canWrite;
- (BOOL)_canRead;
- (void)_removeTransactionOnCurrentThread:(id)arg1;
- (void)_setTransactionOnCurrentThread:(id)arg1;
- (id)_currentTransaction;
@property(readonly, copy) NSString *description;
- (BOOL)isClientInSyncWithClientCache;
- (BOOL)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;
- (id)clientCacheIdentifier;
- (BOOL)storeUserIdentifier:(id)arg1 error:(id *)arg2;
- (id)userIdentifier;
- (id)createNewLibraryVersion;
- (id)libraryVersion;
- (BOOL)storeLibraryVersion:(id)arg1 withError:(id *)arg2;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBatchedWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)_scheduleBatchedTransactionsLocked;
- (id)performWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)_addNameToTransaction:(id)arg1 fromBlock:(id)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)resetCompleteSyncStateWithError:(id *)arg1;
- (BOOL)resetLocalSyncStateWithError:(id *)arg1;
- (BOOL)_resetLocalSyncStateWithError:(id *)arg1;
- (void)registerStorage:(id)arg1;
@property(readonly, nonatomic) NSArray *storages;
- (void)dealloc;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

