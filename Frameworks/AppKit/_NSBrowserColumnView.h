//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSBrowser, NSImageView;

@interface _NSBrowserColumnView : NSScrollView
{
    NSImageView *_imageViewForAnimationOptimization;
    NSBrowser *_tmpStashedBrowserView;
    double _markedWidth;
    struct __BrcvFlags {
        unsigned int isEmptyColumn:1;
        unsigned int hasMarkedWidth:1;
        unsigned int tileDisabled:1;
        unsigned int drawsColumnDividerLine:1;
        unsigned int reserved:28;
    } _brcvFlags;
    double _vScrollerUnmodifiedHeight;
}

+ (id)columnResizeButtonImage;
- (BOOL)_markedWidthDiffersFromCurrentWidth;
- (void)_clearMarkedWidth;
- (void)_markWidth;
- (void)_setMarkedWidth:(double)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)_hitTestToBlockWindowResizing:(struct CGPoint)arg1 forResizeDirection:(long long)arg2;
- (void)resetCursorRects;
- (id)menuForEvent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)tile;
- (id)_invalidateGStatesForTree;
- (void)_updateHorizontalScrollerAvoidance;
- (BOOL)_accessoryViewMightInterfereWithOverlayScrollers:(id)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)setScrollerStyle:(long long)arg1;
- (void)viewDidMoveToSuperview;
- (BOOL)shouldAllowUserColumnResizing;
- (void)setIsEmptyColumn:(BOOL)arg1;
- (struct CGRect)columnResizeButtonRect;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)removeFromSuperview;
- (void)_doRemoveFromSuperviewWithOutNeedingDisplay:(BOOL)arg1;
- (void)_endColumnAnimationOptimization;
- (void)_beginColumnAnimationOptimization;
- (id)_enclosingBrowserView;
- (void)_setDrawsColumnDividerLine:(BOOL)arg1;
- (BOOL)_drawsColumnDividerLine;
- (struct CGRect)_columnDividerLineRect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityChildrenAttribute;

@end

