//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSString, NSView;

__attribute__((visibility("hidden")))
@interface BU_TMControl : CALayer
{
    NSView *fParent;
    _Bool fEnabled;
    long long fValue;
    long long fMin;
    long long fMax;
    NSString *fHelpString;
    struct TString fTitle;
    id fTarget;
    SEL fAction;
    double fDisabledAlpha;
    double fRedrawDuration;
}

+ (id)controlWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setRedrawDuration:(double)arg1;
- (void)invalidate;
- (void)scrollByX:(double)arg1 byY:(double)arg2 withModifiers:(unsigned int)arg3;
- (_Bool)mouseDraggedToPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (void)mouseMovedToPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (_Bool)mouseUpAtPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (_Bool)mouseDownAtPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (_Bool)pixelAccurateHitTest:(struct CGPoint)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (void)valueDidChange:(long long)arg1;
- (_Bool)valueWillChange:(long long)arg1;
- (void)setMax:(long long)arg1;
- (long long)max;
- (void)setMin:(long long)arg1;
- (long long)min;
- (void)setValue:(long long)arg1;
- (long long)value;
- (void)setAlphaForDisabledAppearance:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (_Bool)isEnabled;
- (void)setHelpString:(id)arg1;
- (id)helpString;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;
- (id)parent;
- (void)setParent:(id)arg1;

@end
