//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface IPMailMessageShadowView : NSView
{
    BOOL _showShadow;
    id _controller;
}

@property id controller; // @synthesize controller=_controller;
@property BOOL showShadow; // @synthesize showShadow=_showShadow;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationForKey:(id)arg1;

@end

