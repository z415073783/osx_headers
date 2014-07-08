//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class PVAnnotation;

@interface PVPDFPopupTextView : NSTextView
{
    BOOL _selfChangingText;
    PVAnnotation *_annotation;
}

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)adjustHeight;
- (void)didChangeText;
- (void)setFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)endObservingAnnotation;
- (void)beginObservingAnnotation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andAnnotation:(id)arg2;

@end
