//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSlider.h"

@class NSArray;

@interface AVScrubber : NSSlider
{
    NSArray *_loadedTimeRanges;
}

+ (void)initialize;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (double)baselineOffsetFromBottom;
- (CDStruct_83cd8af5)alignmentRectInsets;
- (BOOL)allowsVibrancy;
@property(retain, nonatomic) NSArray *loadedTimeRanges;

@end
