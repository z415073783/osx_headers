//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class TListViewController;

@interface TListRowView : NSTableRowView
{
    struct TFENode _node;
    TListViewController *_listViewController;
    _Bool _isDropTarget;
}

@property(nonatomic) _Bool isDropTarget; // @synthesize isDropTarget=_isDropTarget;
@property(nonatomic) TListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(nonatomic) struct TFENode node; // @synthesize node=_node;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)openNode;
- (void)updateCellSelectedStateAppearance;
- (void)updateLayer;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

