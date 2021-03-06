//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class ShadowTextFieldCell;

@interface ShadowTextView : NSTextView
{
    ShadowTextFieldCell *_shadowCell;
}

@property(retain) ShadowTextFieldCell *shadowCell; // @synthesize shadowCell=_shadowCell;
- (void).cxx_destruct;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (BOOL)isRichText;
- (void)setTypingAttributes:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (BOOL)becomeFirstResponder;

@end

