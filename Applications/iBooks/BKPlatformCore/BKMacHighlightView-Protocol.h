//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSFont;

@protocol BKMacHighlightView <NSObject>
@property(nonatomic) __weak id <BKMacHighlightViewDelegate> delegate;
- (void)setTextColor:(NSColor *)arg1 forRange:(struct _NSRange)arg2;
- (void)setTextColor:(NSColor *)arg1;
- (void)setAnnotation:(id <AEAnnotation>)arg1 font:(NSFont *)arg2 textColor:(NSColor *)arg3 underlineColor:(NSColor *)arg4;
- (void)teardown;
@end
