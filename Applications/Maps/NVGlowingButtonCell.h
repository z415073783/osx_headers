//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

__attribute__((visibility("hidden")))
@interface NVGlowingButtonCell : NSButtonCell
{
    BOOL _animateGlow;
}

@property BOOL animateGlow;
- (void)stepPulse;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;

@end
