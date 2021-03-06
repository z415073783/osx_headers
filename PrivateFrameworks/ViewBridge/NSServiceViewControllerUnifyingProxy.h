//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class NSProxy<NSXPCProxyCreating>;

@interface NSServiceViewControllerUnifyingProxy : NSProxy
{
    NSProxy<NSXPCProxyCreating> *_clientProxy;
    NSProxy<NSXPCProxyCreating> *_animationSyncProxy;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithClientProxy:(id)arg1 andAnimationSyncProxy:(id)arg2 withErrorHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

