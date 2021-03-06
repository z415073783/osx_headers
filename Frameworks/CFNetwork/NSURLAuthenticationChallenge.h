//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSError, NSURLAuthenticationChallengeInternal, NSURLCredential, NSURLProtectionSpace, NSURLResponse;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding>
{
    NSURLAuthenticationChallengeInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, retain) id <NSURLAuthenticationChallengeSender> sender;
@property(readonly, copy) NSURLResponse *failureResponse;
@property(readonly, copy) NSError *error;
@property(readonly) long long previousFailureCount;
@property(readonly, copy) NSURLCredential *proposedCredential;
@property(readonly, copy) NSURLProtectionSpace *protectionSpace;
- (void)dealloc;
- (id)_initWithCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (id)init;
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;
- (void)setSender:(id)arg1;

@end

