//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol BKLibraryMigrationService <NSObject>
@property(readonly) NSURL *booksDirectory;
@property(readonly) BOOL iTunesHasMigratableBooks;
@property(readonly) BOOL iTunesAlreadyMigrated;
@property(readonly) BOOL iTunesSupportsMigration;
- (void)performBookMigration:(id <BKLibraryMigrationDelegate>)arg1;
- (void)chooseDirectoryToMigrateBooksWithTotalAllocatedSize:(unsigned long long)arg1 completion:(void (^)(BOOL))arg2;
- (BOOL)booksToMigrate:(id *)arg1 allocatedSize:(unsigned long long *)arg2 error:(id *)arg3;
@end

