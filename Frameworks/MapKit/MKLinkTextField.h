//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSURL;

@interface MKLinkTextField : NSTextField
{
    NSURL *_link;
    CDUnknownBlockType _blockOnLinkOpened;
}

@property(copy) CDUnknownBlockType blockOnLinkOpened; // @synthesize blockOnLinkOpened=_blockOnLinkOpened;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)autoHandleLinks;
- (id)fontSmoothingBackgroundColor;
@property(retain) NSURL *link;
- (void)setAttributedStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)linkifyString;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)openLinkAction:(id)arg1;
- (void)openLink:(id)arg1;
- (void)resetCursorRects;
- (BOOL)acceptsFirstMouse:(id)arg1;

@end
