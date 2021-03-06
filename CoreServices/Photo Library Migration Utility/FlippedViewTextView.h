//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class NSFont, NSResponder, NSString;

@interface FlippedViewTextView : NSTextView
{
    NSString *mPlaceholderText;
    NSTextView *mLocationParseField;
    NSFont *mPlaceholderFont;
    NSFont *mRegularFont;
    BOOL mOverrideDismiss;
    BOOL mIsBeingEdited;
    BOOL mFontIsRegular;
    NSResponder *mPreviousFirstResponder;
}

- (BOOL)performKeyEquivalent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)insertText:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (id)string;
- (void)setString:(id)arg1;
- (void)setRegularFont:(id)arg1;
- (void)setPlaceholderFont:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setLocationParseField:(id)arg1;
- (void)overrideDismiss:(BOOL)arg1;
- (BOOL)autoscroll:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_switchToRegularFont;
- (void)_switchToPlaceholderFont;

@end

