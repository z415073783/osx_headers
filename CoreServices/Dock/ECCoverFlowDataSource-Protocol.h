//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol ECCoverFlowDataSource <NSObject>
- (id)coverFlowValueForKey:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (id)coverFlowValueForKey:(NSString *)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(NSDictionary *)arg3;
- (unsigned long long)numberOfCoverFlowItems;

@optional
- (void)invalidateCoverFlowCache;
@end
