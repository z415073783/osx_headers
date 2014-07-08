//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACFHTTPMethodInvocationDelegate.h"

@class NSData, NSError, NSString;

@interface ACFHTTPMethodSynchronousInvocationHelper : NSObject <ACFHTTPMethodInvocationDelegate>
{
    NSError *_error;
    NSData *_result;
}

@property(retain) NSData *result; // @synthesize result=_result;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2;
- (void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2;
- (void)dealloc;
- (void)finalize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
