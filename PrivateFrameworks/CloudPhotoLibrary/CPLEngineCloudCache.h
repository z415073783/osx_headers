//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>
{
}

- (id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2;
- (void)getCommittedRecord:(id *)arg1 stagedRecord:(id *)arg2 forIdentifier:(id)arg3;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly) BOOL hasDoneAFirstSynchronization;
- (BOOL)resetSyncAnchorWithError:(id *)arg1;
- (BOOL)setSyncAnchor:(id)arg1 error:(id *)arg2;
- (id)syncAnchor;
- (BOOL)discardStagedChangesWithError:(id *)arg1;
- (BOOL)commitStagedChangesWithError:(id *)arg1;
- (BOOL)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)resetWithError:(id *)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (BOOL)deleteRecordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(BOOL)arg3 withError:(id *)arg4;
- (BOOL)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id *)arg3;
- (BOOL)applyBatch:(id)arg1 isFinal:(BOOL)arg2 withError:(id *)arg3;
- (BOOL)updateRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

