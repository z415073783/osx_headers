//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKPatchFilesInstallOperation.h>

@class NSMutableDictionary;

@interface PKPatchAndUpdateInstallOperation : PKPatchFilesInstallOperation
{
    unsigned long long _totalPatchAndUpdateSize;
    unsigned long long _patchAndUpdateSizeCompleted;
    void *_bomCopier;
    void *_bomSys;
    NSMutableDictionary *_bomCopierOptions;
}

- (BOOL)_copyItemAtPath:(id)arg1 withAttributes:(id)arg2 toPath:(id)arg3 usingAFSC:(BOOL)arg4 withNewAFSCFormat:(BOOL)arg5 error:(id *)arg6;
- (void)main;
- (BOOL)_patchAndUpdateForPackageSpecifier:(id)arg1 error:(id *)arg2;
- (BOOL)_shouldUseUpdateVariantForPackageSpecifier:(id)arg1;
- (double)estimatedTimeRemaining;
- (void)finalize;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3;

@end

