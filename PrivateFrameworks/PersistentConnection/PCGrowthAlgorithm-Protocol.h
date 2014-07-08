//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PCLoggingDelegate.h"

@class NSDictionary, NSString;

@protocol PCGrowthAlgorithm <PCLoggingDelegate, NSObject>
@property(readonly, copy, nonatomic) NSDictionary *cacheInfo;
@property(readonly, nonatomic) unsigned long long countOfGrowthActions;
@property(nonatomic) double maximumKeepAliveInterval;
@property(nonatomic) double minimumKeepAliveInterval;
@property(readonly, nonatomic) double currentKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (BOOL)useIntervalIfImprovement:(double)arg1;
- (id)initWithCacheInfo:(NSDictionary *)arg1 loggingIdentifier:(NSString *)arg2 algorithmName:(NSString *)arg3;
@end
