//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenAttachmentCell.h"

__attribute__((visibility("hidden")))
@interface FI_TTagTokenAttachmentCell : NSTokenAttachmentCell
{
    _Bool _titleShowsSelectedColorCircle;
    _Bool _dottedOutline;
    unsigned long long _numberOfItemsLackingThisTag;
}

+ (id)copyFromTokenAttachmentCell:(id)arg1;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)tokenBackgroundColor;
- (id)tokenForegroundColor;
- (_Bool)mixedState;
- (_Bool)tagExists;
- (void)updateAttributedStringValueForState;
- (void)setTitle:(id)arg1;

@end
