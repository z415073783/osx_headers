//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSFont, NSShadow, NSString, NSTextFieldCell;

@interface IMCustomLabel : NSView
{
    NSShadow *_shadow;
    NSTextFieldCell *_cell;
    BOOL _needsUpdate;
    BOOL _dummyString;
    BOOL _enabled;
    NSString *_text;
    NSFont *_font;
    NSColor *_color;
    NSColor *_disabledColor;
    unsigned long long _alignment;
    unsigned long long _underlineStyle;
}

@property(nonatomic) unsigned long long underlineStyle; // @synthesize underlineStyle=_underlineStyle;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSColor *disabledColor; // @synthesize disabledColor=_disabledColor;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)alignRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2 withHorizontalAlignment:(unsigned long long)arg3;
- (void)updateIfNeeded;
- (double)baselineOffsetFromBottom;
- (CDStruct_3c058996)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)setNeedsUpdate;
- (void)setShadow:(id)arg1 offset:(struct CGSize)arg2 blur:(double)arg3;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

