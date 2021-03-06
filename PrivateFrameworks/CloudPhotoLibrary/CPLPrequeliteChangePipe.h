//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import "CPLEngineChangePipeImplementation.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteChangePipe : CPLPrequeliteStorage <CPLEngineChangePipeImplementation>
{
    CPLPrequeliteVariable *_pullGenerationVar;
    CPLPrequeliteVariable *_pushGenerationVar;
    CPLPrequeliteVariable *_isLockedVar;
    NSString *_countSqlCommand;
    NSString *_logDomain;
    unsigned long long _lastPullMarkerForCompact;
}

- (void).cxx_destruct;
- (id)status;
- (void)writeTransactionDidFail;
@property(nonatomic, getter=isLocked) BOOL locked;
- (id)allChangeBatches;
- (BOOL)compactChangeBatchesWithError:(id *)arg1;
- (BOOL)deleteAllChangeBatchesWithError:(id *)arg1;
- (BOOL)popNextBatchWithError:(id *)arg1;
- (id)nextBatch;
- (BOOL)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (BOOL)appendChangeBatch:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfQueuedBatches;
- (BOOL)_setPushMarker:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)_pushMarker;
- (BOOL)_setPullMarker:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)_pullMarker;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

