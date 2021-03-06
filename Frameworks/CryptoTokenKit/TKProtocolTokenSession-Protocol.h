//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol TKProtocolTokenSession <NSObject>
- (void)decryptWithKey:(id)arg1 data:(NSData *)arg2 padding:(unsigned int)arg3 reply:(void (^)(NSData *, NSError *))arg4;
- (void)signWithKey:(id)arg1 data:(NSData *)arg2 padding:(unsigned int)arg3 reply:(void (^)(NSData *, NSError *))arg4;
- (void)dataForObject:(id)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)deleteObject:(id)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)updateObject:(id)arg1 attributes:(NSDictionary *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)generateKeyPairWithAttributes:(NSDictionary *)arg1 reply:(void (^)(NSData *, id, NSError *))arg2;
- (void)addObjectWithAttributes:(NSDictionary *)arg1 reply:(void (^)(id, NSError *))arg2;
- (void)openWithReply:(void (^)(BOOL, NSError *))arg1;
@end

