//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, VisualTabPickerGridView;

@protocol VisualTabPickerGridViewDataSource <NSObject>
- (double)tilesHeightToWidthRatioInVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;
- (NSArray *)orderedTabItemsInVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;

@optional
- (double)keyWindowContentFrameAnimationDurationForVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;
- (struct CGRect)keyWindowContentFrameInScreenCoordinatesForVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;
@end
