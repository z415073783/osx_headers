//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CAThumbView;

@interface CAThumbAnchorView : NSView
{
    CAThumbView *_actualView;
    NSView *_actualParent;
    NSView *_relativeParent;
    BOOL _hoverMode;
    BOOL _installed;
}

@property BOOL installed; // @synthesize installed=_installed;
@property BOOL hoverMode; // @synthesize hoverMode=_hoverMode;
@property(retain) CAThumbView *actualView; // @synthesize actualView=_actualView;
- (struct CGRect)_translateRect:(struct CGRect)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)actualViewFrame;
- (void)updateActualViewIncludingViewOrder;
- (void)updateActualView;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)thumbView;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_frameChanged:(id)arg1;
- (void)wasUninstalled;
- (void)wasInstalled;
- (void)setActualParent:(id)arg1 relativeParent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 actualParent:(id)arg2 relativeParent:(id)arg3;

@end
