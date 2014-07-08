//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPRecordIdentifier, NSString;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying>
{
    NSString *_etag;
    CKDPRecordIdentifier *_recordIdentifier;
}

+ (id)options;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEtag;
@property(readonly, nonatomic) BOOL hasRecordIdentifier;

@end
