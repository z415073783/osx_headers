//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface IPMarimbaFilterView : NSView
{
    NSImage *_cachedImage;
    SEL _selector;
    id _target;
    long long _selectedFilter;
    BOOL _showBW;
    BOOL _showSepia;
    BOOL _showAntique;
}

- (void)setShowSepia:(BOOL)arg1;
- (void)setShowAntique:(BOOL)arg1;
- (void)setShowBW:(BOOL)arg1;
- (void)setSelectedFilter:(long long)arg1;
- (long long)selectedFilter;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)_createSquareImageRectForBounds:(struct CGRect)arg1 withSize:(struct CGSize)arg2;
- (void)_drawString:(id)arg1 inRect:(struct CGRect)arg2 alpha:(double)arg3;
- (id)antiqueFilterWithCIImage:(id)arg1 level:(long long)arg2;
- (void)_buildCachedImageWithImage:(id)arg1;
- (void)dealloc;
- (id)_thumbImageForPhoto:(struct IPPhotoInfo *)arg1 square:(BOOL)arg2;
- (void)setFilteredPhoto:(struct IPPhotoInfo *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

