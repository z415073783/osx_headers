//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSInputStream, NSString, NSURL, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSURLRequestInternal *_internal;
}

+ (double)defaultTimeoutInterval;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
- (BOOL)preventsIdleSystemSleep;
- (id)boundInterfaceIdentifier;
@property(readonly) BOOL allowsCellularAccess;
@property(readonly) unsigned long long networkServiceType;
- (void)_removePropertyForKey:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
@property(readonly, copy) NSURL *mainDocumentURL;
@property(readonly) double timeoutInterval;
@property(readonly) unsigned long long cachePolicy;
@property(readonly, copy) NSURL *URL;
- (struct _CFURLRequest *)_CFURLRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)_initWithCFURLRequest:(struct _CFURLRequest *)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (double)_timeWindowDuration;
- (double)_timeWindowDelay;
- (unsigned long long)expectedWorkload;
- (id)contentDispositionEncodingFallbackArray;
@property(readonly) BOOL HTTPShouldUsePipelining;
@property(readonly) BOOL HTTPShouldHandleCookies;
- (id)HTTPUserAgent;
- (id)HTTPReferrer;
- (id)HTTPExtraCookies;
- (id)HTTPContentType;
@property(readonly, retain) NSInputStream *HTTPBodyStream;
@property(readonly, copy) NSData *HTTPBody;
- (id)valueForHTTPHeaderField:(id)arg1;
@property(readonly, copy) NSDictionary *allHTTPHeaderFields;
@property(readonly, copy) NSString *HTTPMethod;

@end
