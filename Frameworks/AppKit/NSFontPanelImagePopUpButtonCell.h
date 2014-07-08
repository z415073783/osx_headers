//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSImage;

@interface NSFontPanelImagePopUpButtonCell : NSPopUpButtonCell
{
    NSImage *image;
    NSImage *alternateImage;
}

- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)alternateImage;
- (void)setAlternateImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (double)_extraWidthForCellHeight:(double)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1 pullsDown:(BOOL)arg2;

@end
