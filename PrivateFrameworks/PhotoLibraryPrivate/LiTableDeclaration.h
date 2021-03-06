//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LiEncoding.h"

@class NSMutableArray, NSString;

@interface LiTableDeclaration : NSObject <LiEncoding>
{
    unsigned short _tableOptions;
    NSString *_tableName;
    NSString *_tableClassName;
    NSString *_databaseName;
    NSString *_digest;
    NSString *_ridIndexField;
    NSMutableArray *_properties;
}

@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(nonatomic) unsigned short tableOptions; // @synthesize tableOptions=_tableOptions;
@property(retain, nonatomic) NSString *ridIndexField; // @synthesize ridIndexField=_ridIndexField;
@property(readonly, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(readonly, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
@property(readonly, nonatomic) NSString *tableClassName; // @synthesize tableClassName=_tableClassName;
@property(readonly, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)tableWithLibrary:(id)arg1;
- (id)makePropertyDefsForStringAtomCache:(id)arg1;
- (void)addProperty:(id)arg1 withType:(unsigned char)arg2 options:(unsigned int)arg3 storage:(unsigned int)arg4;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 tableClassName:(id)arg2 databaseName:(id)arg3 digest:(id)arg4;
- (id)initWithName:(id)arg1 tableClassName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

