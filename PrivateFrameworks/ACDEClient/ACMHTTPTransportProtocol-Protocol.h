//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol ACMHTTPTransportProtocol <NSObject>
@property(nonatomic) BOOL isCanceled;
@property(nonatomic) double timeout;
@property(retain, nonatomic) NSData *httpPOSTBody;
@property(retain, nonatomic) NSDictionary *httpGETParameters;
@property(retain, nonatomic) NSDictionary *httpHeader;
@property(retain, nonatomic) NSString *httpMethod;
@property(retain, nonatomic) NSString *address;
- (void)cancelRequest;
- (void)performRequestWithCompletionBlock:(BOOL (^)(NSData *, NSError *))arg1;
@end

