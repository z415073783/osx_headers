//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ClearBrowsingDataController : NSObject
{
    NSArray *_availableIntervals;
}

+ (id)allTimeInterval;
@property(readonly) NSArray *availableIntervals; // @synthesize availableIntervals=_availableIntervals;
- (void).cxx_destruct;
- (void)_clearBackForwardListForAllTabs;
- (void)_clearDataAddedAfterDate:(id)arg1;
- (void)clearAllData;
- (void)_clearNonTemporalData;
- (void)clearDataFromInterval:(id)arg1;
- (id)init;

@end

