//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHView.h>

@interface ACSHResizeHandlesView : ACSHView
{
    id *_resizeHandles;
}

+ (void)initialize;
+ (double)handleSize;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isFlipped;
- (void)resumeTracking;
- (void)suspendTracking;
- (int)resizeTypeForView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)initView;
- (BOOL)wantsUpdateLayer;

@end
