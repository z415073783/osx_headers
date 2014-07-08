//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSImage;

@interface LightThreePartButtonCell : NSButtonCell
{
    NSImage *_leftCap;
    NSImage *_centerStretch;
    NSImage *_rightCap;
    NSImage *_pressedLeftCap;
    NSImage *_pressedCenterStretch;
    NSImage *_pressedRightCap;
}

@property(retain, nonatomic) NSImage *pressedRightCap; // @synthesize pressedRightCap=_pressedRightCap;
@property(retain, nonatomic) NSImage *pressedCenterStretch; // @synthesize pressedCenterStretch=_pressedCenterStretch;
@property(retain, nonatomic) NSImage *pressedLeftCap; // @synthesize pressedLeftCap=_pressedLeftCap;
@property(retain, nonatomic) NSImage *rightCap; // @synthesize rightCap=_rightCap;
@property(retain, nonatomic) NSImage *centerStretch; // @synthesize centerStretch=_centerStretch;
@property(retain, nonatomic) NSImage *leftCap; // @synthesize leftCap=_leftCap;
- (void)drawCellForFrame:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)grabImages;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
