//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TButtonCell.h"

@class NSImage;

@interface TSidebarPrefsItemCell : TButtonCell
{
    NSImage *_icon;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)iconFrameForBounds:(struct CGRect)arg1;
- (_Bool)layoutDirectionIsRTL;
- (void)setIcon:(id)arg1;
- (void)dealloc;

@end
