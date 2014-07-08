//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/BrowserDataImporter.h>

#import "BrowserBookmarkImporterDelegate.h"

@class BookmarksUndoController, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BrowserBookmarkImporter : BrowserDataImporter <BrowserBookmarkImporterDelegate>
{
    long long _importOrigin;
    NSDictionary *_previouslyImportedBookmarksByImportOriginUUID;
    NSMutableArray *_reimportedBookmarks;
    BOOL _hasBegunBookmarkTransaction;
    BookmarksUndoController *_bookmarksUndoController;
}

@property(retain, nonatomic) BookmarksUndoController *bookmarksUndoController; // @synthesize bookmarksUndoController=_bookmarksUndoController;
@property(nonatomic) BOOL hasBegunBookmarkTransaction; // @synthesize hasBegunBookmarkTransaction=_hasBegunBookmarkTransaction;
- (void).cxx_destruct;
- (void)_updateReimportedBookmarks;
- (void)_adoptChangesFromReimportedBookmark:(id)arg1 existingBookmark:(id)arg2;
- (void)_mergeImportedBookmark:(id)arg1 withExistingBookmark:(id)arg2;
- (void)_mergeImportedBookmarkFolder:(id)arg1 withExistingFolder:(id)arg2;
- (id)_existingBookmarkForReimportedBookmark:(id)arg1;
- (id)_previouslyImportedBookmarksByImportOriginUUID;
- (void)_processImportedBookmarkDictionary:(id)arg1 andInsertIntoBookmarkIfPossible:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_keyForImportInfo:(id)arg1;
- (void)_didFinishSuccessfully:(BOOL)arg1;
- (id)_importInfoForBookmarkWithImportOriginUUID:(id)arg1;
- (long long)_importOrigin;
- (void)importerDidFailToImportBookmarks;
- (void)importerDidFinishImportingBookmarks;
- (void)importerDidImportBookmarks:(id)arg1 fromCollection:(int)arg2;
- (void)importBookmarksUsingImporterProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
