//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IPAssetList : NSObject
{
    struct IPSelectionList *_selectionList;
    CDStruct_283dfa7c _cachedStatistics;
    unsigned long long _cachedStatisticsOptions;
    BOOL _cacheIsValid;
}

- (id).cxx_construct;
- (void)_accumulateStatistics:(struct IPSelectable *)arg1 delta:(long long)arg2 options:(unsigned long long)arg3;
- (struct IPSelectionList *)_privateSelectionList;
- (id)_modelForAsset:(struct IPSelectable *)arg1;
- (void)_addContentsToContainer:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_include:(struct IPSelectable *)arg1 withOptions:(unsigned long long)arg2;
- (id)_imageDBForRKModel:(id)arg1;
- (struct IPSelectable *)_newAssetForRKModel:(id)arg1;
- (void)_commonInit;
- (void)eachPhotoWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)reversedEachPhoto:(CDUnknownBlockType)arg1;
- (void)eachPhoto:(CDUnknownBlockType)arg1;
- (void)each:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfAsset:(struct IPSelectable *)arg1;
- (struct IPSelectable *)selectableAtIndex:(unsigned long long)arg1;
- (BOOL)contains:(struct IPSelectable *)arg1;
- (id)ridList;
- (struct IPPhotoList *)copyPhotoList;
- (struct IPSelectionList *)copySelectionList;
- (id)initWithPhotoList:(struct IPPhotoList *)arg1;
- (id)initWithSelectionList:(struct IPSelectionList *)arg1;
- (unsigned long long)indexOfAssetWithModel:(id)arg1;
- (id)modelAtIndex:(unsigned long long)arg1;
- (id)assetSetWithOptions:(unsigned long long)arg1;
- (id)assetArrayWithOptions:(unsigned long long)arg1;
- (id)initWithRKAssets:(id)arg1;
- (CDStruct_283dfa7c)statisticsWithOptions:(unsigned long long)arg1;
- (id)mutableCopy;
- (id)init;
- (BOOL)hasAllPhotos:(struct IPPhotoList *)arg1;
- (id)collectAllMastersVersions;

@end
