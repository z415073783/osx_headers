//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@interface GlassButton : NSButton
{
}

+ (Class)cellClass;
- (void)updateLayer;
- (double)baselineOffsetFromBottom;
- (CDStruct_3c058996)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;
- (void)setCell:(id)arg1;
- (void)_glassButtonCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
