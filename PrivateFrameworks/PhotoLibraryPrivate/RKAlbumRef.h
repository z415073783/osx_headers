//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RDAlbum, RDQueryResult;

@interface RKAlbumRef : NSObject
{
    NSString *m_uuid;
    RDAlbum *m_databaseAlbum;
    RDQueryResult *m_queryResult;
}

+ (id)albumRefForObject:(id)arg1 options:(id)arg2;
+ (id)albumRefForObject:(id)arg1;
+ (id)filteredChildrenForAlbumType:(long long)arg1 children:(id)arg2;
- (void).cxx_destruct;
- (id)albumRef;
- (BOOL)isAlbum;
- (id)supportedFileTypes;
- (id)colorLabelIndexesInUse;
- (id)keywordArchiveStrings;
- (id)keywordsInUse;
- (id)importGroups;
- (id)imageDates;
- (id)customInfoKeys;
- (id)filter;
- (BOOL)setSortAscending:(BOOL)arg1;
- (BOOL)sortAscending;
- (BOOL)setSortKey:(id)arg1 ascending:(BOOL)arg2;
- (BOOL)setSortKey:(id)arg1;
- (id)sortKey;
- (BOOL)allowsSortKey:(id)arg1;
- (id)sortKeys;
- (void)refreshSortAndFilterSettings;
- (id)setToCustomSorted;
- (id)setToCustomSortedWithChange:(id *)arg1;
- (BOOL)isCustomSorted;
- (void)setCustomSortAvailable;
- (BOOL)customSortAvailable;
- (BOOL)sortChildren;
- (id)queryResult;
- (id)sortedVersionUuids;
- (id)sortedVersions;
- (id)databaseAlbum;
- (id)albumUuid;
- (id)uuid;
- (id)displayName;
- (BOOL)isUserSmartAlbum;
- (BOOL)isSmartAlbum;
- (BOOL)isManualAlbum;
- (long long)albumType;
- (id)database;
- (void)dealloc;
- (void)close;
- (void)_clearDatabaseAlbum;
- (id)initWithAlbum:(id)arg1;
- (id)init;
- (id)children;
- (void)removeResultObserver:(id)arg1;
- (void)addResultObserver:(id)arg1;

@end

