//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDAlbumModel.h>

#import "RDModelAttachments.h"

@class LiRidList, NSMutableArray, NSString, RDCustomSortOrder;

@interface RDAlbum : RDAlbumModel <RDModelAttachments>
{
    NSMutableArray *_imageDateRange;
    RDCustomSortOrder *_customSortOrder;
    LiRidList *_versionIdsInSearchArea;
    NSString *_themeName;
}

+ (void)prefetchImageDateRanges:(id)arg1;
+ (unsigned long long)countOfAlbumsFromDatabase:(id)arg1 ofType:(long long)arg2;
+ (id)albumsFromDatabase:(id)arg1 ofType:(long long)arg2;
+ (id)albumsOfSubclass:(long long)arg1 inFolder:(id)arg2;
+ (id)albumsFromDatabase:(id)arg1 ofSubclass:(long long)arg2;
+ (id)albumsOfSubclasses:(id)arg1 fromDatabase:(id)arg2;
+ (id)excludedFileTypesForAlbumType:(long long)arg1;
+ (id)supportedFileTypesForAlbumType:(long long)arg1;
+ (void)updateKeywordArchiveStringFrom:(id)arg1 to:(id)arg2 inDatabase:(id)arg3;
+ (id)smartAlbumsInFolder:(id)arg1;
+ (id)smartAlbumsForFolder:(id)arg1;
+ (id)manualAlbumsForFolder:(id)arg1;
+ (id)manualAlbumIdsForFolder:(id)arg1;
+ (id)albumsForFolder:(id)arg1;
+ (id)ensureAlbumExistsForFolderRelativePath:(id)arg1 inFolder:(id)arg2 createdContainers:(id)arg3;
+ (void)deleteAlbums:(id)arg1;
+ (void)deleteAlbum:(id)arg1;
+ (id)duplicateAlbums:(id)arg1 newAlbums:(id *)arg2;
+ (id)duplicateAlbum:(id)arg1 newAlbum:(id *)arg2;
+ (id)cpyAlbum:(id)arg1 intoFolder:(id)arg2 newAlbum:(id *)arg3 addVersions:(BOOL)arg4;
+ (void)resetAllPhotosAlbumFilterFromDatabase:(id)arg1;
+ (id)duplicatePhotosAlbumFromDatabase:(id)arg1;
+ (id)removeFromTrash:(id)arg1;
+ (id)putInTrash:(id)arg1;
+ (id)manualAlbumIdsContainingAnyOfVersionIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)allAlbumsFromDatabase:(id)arg1;
+ (id)albumsForFolderUuid:(id)arg1 fromDatabase:(id)arg2;
+ (id)albumsWithType:(long long)arg1 inFolder:(id)arg2;
+ (id)albumWithName:(id)arg1 inFolder:(id)arg2;
+ (id)newPersistedAlbumWithName:(id)arg1 folder:(id)arg2 albumType:(long long)arg3 albumSubclass:(long long)arg4;
+ (id)mutableDictionaryWithPropertyListData:(id)arg1;
+ (id)mutableDictionaryWithData:(id)arg1;
+ (id)dataWithDictionary:(id)arg1;
+ (void)prefetchCustomSortOrders:(id)arg1;
+ (id)specialQueryFromDatabase:(id)arg1 uuid:(id)arg2 specialType:(unsigned char)arg3 mediaType:(unsigned char)arg4;
+ (id)videoTimelapseAlbumFromDatabase:(id)arg1;
+ (id)videoSloMoAlbumFromDatabase:(id)arg1;
+ (id)panoramaAlbumFromDatabase:(id)arg1;
+ (id)videoAlbumFromDatabase:(id)arg1;
+ (id)favoritesAlbumFromDatabase:(id)arg1;
+ (id)recoveredPhotosAlbumFromDatabase:(id)arg1;
+ (id)lastImportAlbumFromDatabase:(id)arg1;
+ (id)allPhotosAlbumFromDatabase:(id)arg1;
@property(retain, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
- (void).cxx_destruct;
- (id)versionIdsForPlaceIdForContainer;
- (id)allPlacesForContainer;
- (id)imageDateRange;
- (BOOL)hasImageDateRange;
- (void)clearImageDateRange;
- (void)setImageDateRange:(id)arg1;
- (id)changePosterVersionUuid:(id)arg1;
- (BOOL)isDescendantOfFolder:(id)arg1;
- (id)setFolder:(id)arg1;
- (id)folder;
- (void)async_removeAllVersions;
- (void)removeAllVersions;
- (id)async_removeVersions:(id)arg1;
- (id)removeVersions:(id)arg1;
- (id)async_addVersions:(id)arg1;
- (id)addVersions:(id)arg1;
- (id)addVersion:(id)arg1;
- (id)versions;
- (id)versionUuids;
- (id)versionIdList;
- (id)versionIds;
- (id)maxImageDate;
- (id)minImageDate;
- (id)supportedFileTypes;
- (BOOL)isSlideshow;
- (BOOL)isLastImportAlbum;
- (BOOL)isPublished;
- (BOOL)isBuiltinSmartAlbum;
- (BOOL)isImplicitSmartAlbum;
- (void)setSelectedVersionIdList:(id)arg1;
- (id)selectedVersionIdList;
- (BOOL)shouldShowTrash;
- (id)albumNotInTrash;
- (void)setIsInTrash:(BOOL)arg1;
- (BOOL)isMissing;
- (BOOL)isUserSmartAlbum;
- (BOOL)isSmartAlbum;
- (BOOL)isManualAlbum;
- (id)fileSystemSafeName;
- (id)displayName;
- (id)changeName:(id)arg1;
- (BOOL)hasNonLibraryPhotos;
- (void)setName:(id)arg1;
- (void)setNeedsVersionCountUpdate;
- (long long)versionCount;
- (BOOL)suppliesVersionCount;
- (id)attachmentsOfType:(id)arg1;
- (void)updateKeywordArchiveStringFrom:(id)arg1 to:(id)arg2;
- (id)keywordArchiveStringsInUse;
- (id)keywordIdsInUse;
- (id)importGroups;
- (id)imageDatesInUse;
- (id)customKeysInUse;
- (id)colorLabelIndexesInUse;
- (id)versionIdsInTrash;
- (void)setModelDefaults;
- (short)modelType;
- (id)initWithName:(id)arg1 folder:(id)arg2 albumType:(long long)arg3 albumSubclass:(long long)arg4;
- (id)initWithAddress:(id)arg1 uuid:(id)arg2 name:(id)arg3 folder:(id)arg4 albumType:(long long)arg5 albumSubclass:(long long)arg6;
- (id)initWithAddress:(id)arg1 uuid:(id)arg2 name:(id)arg3 folder:(id)arg4 albumType:(long long)arg5 albumSubclass:(long long)arg6 persist:(BOOL)arg7;
- (id)initWithUuid:(id)arg1 name:(id)arg2 folder:(id)arg3 albumType:(long long)arg4 albumSubclass:(long long)arg5;
- (id)initDetachedWithMomentUuid:(id)arg1 forTable:(id)arg2;
- (id)viewStorageDictionary;
- (void)setQueryFolder:(id)arg1;
- (id)queryFolder;
- (void)setQueryFolderUuid:(id)arg1;
- (void)setUserQuery:(id)arg1;
- (id)userQuery;
- (id)userQueryFromData:(id)arg1;
- (void)setFilter:(id)arg1;
- (id)filter;
- (id)filterFromData:(id)arg1;
- (BOOL)isCustomSorted;
- (void)flushCustomSortOrderCache;
- (id)customSortOrder;
- (void)_setCustomSortOrder:(id)arg1;
- (BOOL)_needsCustomSortLoaded;
- (void)setSortAscending:(BOOL)arg1;
- (void)setSortKeyPath:(id)arg1;
- (id)versionIdsInAlbumSearchArea;
- (void)uncacheSearchArea;
- (void)cacheSearchArea;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

