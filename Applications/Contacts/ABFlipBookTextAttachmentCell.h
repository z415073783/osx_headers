//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachmentCell.h"

@class NSFont;

@interface ABFlipBookTextAttachmentCell : NSTextAttachmentCell
{
    BOOL _isHome;
    NSFont *_font;
}

- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initAsHome:(BOOL)arg1 font:(id)arg2;

@end

