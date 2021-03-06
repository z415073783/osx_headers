//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject
{
    NSString *thingToResolve;
    int resolveType;
    struct dispatch_queue_s *resolveQueue;
    struct dispatch_queue_s *cacheAccessQueue;
    struct dispatch_queue_s *callbackQueue;
    BOOL startedResolving;
}

@property BOOL startedResolving; // @synthesize startedResolving;
@property(readonly) struct dispatch_queue_s *callbackQueue; // @synthesize callbackQueue;
@property(readonly) struct dispatch_queue_s *cacheAccessQueue; // @synthesize cacheAccessQueue;
@property(readonly) struct dispatch_queue_s *resolveQueue; // @synthesize resolveQueue;
@property(retain, nonatomic) NSString *thingToResolve; // @synthesize thingToResolve;
@property(nonatomic) int resolveType; // @synthesize resolveType;
- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (id)init;

@end

