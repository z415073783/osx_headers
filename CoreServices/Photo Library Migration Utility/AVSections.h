//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AlbumMgr, DBDocument, NSMutableArray;

@interface AVSections : NSObject
{
    NSMutableArray *_sections;
    NSMutableArray *_visibleSections;
    float _defaultRowHeight;
    AlbumMgr *_albumMgr;
    DBDocument *_doc;
    float _rowHeight;
}

- (void)setRowHeight:(float)arg1;
- (float)rowHeight;
- (void)setDoc:(id)arg1;
- (void)setAlbumMgr:(id)arg1;
- (void)setDefaultRowHeight:(float)arg1;
- (float)defaultRowHeight;
- (void)removeSectionAtIndex:(int)arg1;
- (void)removeSection:(id)arg1;
- (void)addSection:(id)arg1 atIndex:(int)arg2;
- (void)addSection:(id)arg1;
- (id)allSections;
- (void)updateSections;
- (void)addAlbumsViewSections;
- (void)addDefaultSections;
- (void)_addSectionWithLocalizableKey:(id)arg1 sectionNumber:(int)arg2 group:(unsigned long long)arg3 subgroup:(id)arg4 collapsible:(BOOL)arg5 customSectionClass:(Class)arg6;
- (void)_addSectionWithName:(id)arg1 sectionNumber:(int)arg2 group:(unsigned long long)arg3 subgroup:(id)arg4 collapsible:(BOOL)arg5 customSectionClass:(Class)arg6;
- (id)sectionForGroup:(unsigned long long)arg1 andSubgroup:(id)arg2;
- (id)childAtIndex:(long long)arg1;
- (unsigned long long)childCount;
- (void)updateAutoHide:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)description;

@end
