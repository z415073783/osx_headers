//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface MGFocusRingLayer : CALayer
{
    CALayer *_focusedLayer;
}

@property(retain, nonatomic) CALayer *focusedLayer; // @dynamic focusedLayer;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end
