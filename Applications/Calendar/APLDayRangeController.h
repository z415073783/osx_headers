//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APLPeriodRangeController.h"

@interface APLDayRangeController : APLPeriodRangeController
{
}

- (id)infoString;
- (void)setDayCount:(unsigned long long)arg1;
- (unsigned long long)dayCount;
- (void)updateEndUI;
- (BOOL)convertEndToNewMode:(int)arg1;
- (int)setUnitCount:(long long)arg1;
- (long long)unitCount;
- (void)updateStartUI;
- (BOOL)convertStartToNewMode:(int)arg1;
- (int)setStartDate:(id)arg1;
- (id)startDate;

@end

