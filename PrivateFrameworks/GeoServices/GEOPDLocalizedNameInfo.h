//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEONameInfo, NSString;

@interface GEOPDLocalizedNameInfo : PBCodable <NSCopying>
{
    NSString *_languageCode;
    GEONameInfo *_name;
    NSString *_requestedLanguageCode;
}

@property(retain, nonatomic) GEONameInfo *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *requestedLanguageCode; // @synthesize requestedLanguageCode=_requestedLanguageCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL hasLanguageCode;
@property(readonly, nonatomic) BOOL hasRequestedLanguageCode;
- (void)dealloc;

@end
