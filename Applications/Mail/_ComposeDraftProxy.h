//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class ComposeDraft;

@interface _ComposeDraftProxy : NSProxy
{
    ComposeDraft *_draft;
}

@property(readonly, nonatomic) __weak ComposeDraft *draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDraft:(id)arg1;

@end
