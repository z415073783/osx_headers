//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPIdentifier, NSData, NSString;

@interface CKDPPublicKey : PBCodable <NSCopying>
{
    NSData *_keyData;
    NSString *_keyHash;
    CKDPIdentifier *_userId;
}

@property(retain, nonatomic) NSString *keyHash; // @synthesize keyHash=_keyHash;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(retain, nonatomic) CKDPIdentifier *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasKeyHash;
@property(readonly, nonatomic) BOOL hasKeyData;
@property(readonly, nonatomic) BOOL hasUserId;

@end
