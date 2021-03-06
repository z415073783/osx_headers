//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AlbumViewItemProtocol.h"

@class AlbumMgr, DBDocument, IPMessageReceiver, NSString;

@interface AVSection : NSObject <AlbumViewItemProtocol>
{
    NSString *_name;
    unsigned long long _group;
    NSString *_subgroup;
    AlbumMgr *_albumMgr;
    DBDocument *_doc;
    float _rowHeight;
    unsigned long long _lastChildCount;
    BOOL _needAutoExpand;
    BOOL _canCollapse;
    int _sectionNumber;
    struct IPAlbumList *_cachedAlbumList;
    IPMessageReceiver *_AlbumMgrMessageReceiver;
}

@property int sectionNumber; // @synthesize sectionNumber=_sectionNumber;
@property BOOL canCollapse; // @synthesize canCollapse=_canCollapse;
@property float rowHeight; // @synthesize rowHeight=_rowHeight;
@property BOOL needAutoExpand; // @synthesize needAutoExpand=_needAutoExpand;
@property(retain) DBDocument *doc; // @synthesize doc=_doc;
@property(retain) AlbumMgr *albumMgr; // @synthesize albumMgr=_albumMgr;
@property(retain) NSString *subgroup; // @synthesize subgroup=_subgroup;
@property unsigned long long group; // @synthesize group=_group;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)albumViewItemName;
- (int)albumViewItemType;
- (id)preferenceKey;
- (BOOL)allowsModification;
- (unsigned long long)acceptsExternalDrop;
- (void)updateMembers:(id)arg1 doc:(id)arg2 baseHeight:(float)arg3 extraSectionGap:(BOOL)arg4;
- (void)updateMemberChildren;
- (void)invalidateAlbumDisplay:(id)arg1;
- (void)didFinishLaunching:(id)arg1;
- (id)childAtIndex:(long long)arg1;
- (unsigned long long)childCount;
- (void)albumMgrChanged;
- (void)dealloc;
- (id)initWithName:(id)arg1 group:(unsigned long long)arg2 subgroup:(id)arg3;
- (id)init;
- (void)_commonInit;
- (id)description;

@end

