//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDrawerFrame.h"

@interface NSProDrawerFrame : NSDrawerFrame
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGSize)minContentSizeForMinFrameSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (id)_fillColorForThemeState:(long long)arg1;
+ (double)_drawerFrameSideBorder;
+ (double)_drawerFrameBottomBorder;
+ (double)_drawerFrameTopBorder;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (unsigned long long)_shadowFlags;
- (void)_addTrackingRects;
- (void)mouseDown:(id)arg1;
- (struct CGSize)minFrameSize;
- (long long)_kThemeState;
- (BOOL)_isResizeEvent:(id)arg1;
- (struct CGRect)_grabberRect;
- (struct CGPoint)_grabberPointForImage:(id)arg1;
- (id)_grabberImage;
- (unsigned long long)_edge;
- (void)drawerDidClose:(id)arg1;
- (void)drawResizeIndicator:(struct CGRect)arg1;
- (void)drawFrame:(struct CGRect)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (void)shapeWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBevel:(struct CGRect)arg1;
- (id)contentFill;
- (struct CGRect)contentRect;

@end

