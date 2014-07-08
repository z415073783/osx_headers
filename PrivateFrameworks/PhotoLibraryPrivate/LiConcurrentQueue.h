//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface LiConcurrentQueue : NSObject
{
    unsigned long long _concurrencyLimit;
    NSObject<OS_dispatch_queue> *_executeQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableArray *_waitList;
    unsigned long long _concurrentCount;
}

@property(nonatomic) unsigned long long concurrentCount; // @synthesize concurrentCount=_concurrentCount;
@property(retain, nonatomic) NSMutableArray *waitList; // @synthesize waitList=_waitList;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *controlQueue; // @synthesize controlQueue=_controlQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue; // @synthesize executeQueue=_executeQueue;
@property(nonatomic) unsigned long long concurrencyLimit; // @synthesize concurrencyLimit=_concurrencyLimit;
- (void).cxx_destruct;
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)blockDone;
- (void)dequeueOneBlock;
- (void)runBlockWithBarrier:(CDUnknownBlockType)arg1;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)enqueueBlock:(CDUnknownBlockType)arg1 barrier:(BOOL)arg2;
- (id)initWithConcurrencyLimit:(unsigned long long)arg1;

@end
