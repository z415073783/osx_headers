//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface QTDataReference : NSObject <NSCoding>
{
    int _proxy;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
}

+ (id)dataReferenceWithProxy:(int)arg1;
+ (id)dataReferenceWithReferenceToData:(id)arg1 name:(id)arg2 MIMEType:(id)arg3;
+ (id)dataReferenceWithReferenceToData:(id)arg1;
+ (id)dataReferenceWithReferenceToURL:(id)arg1;
+ (id)dataReferenceWithReferenceToFile:(id)arg1;
+ (id)dataReferenceWithDataRefData:(id)arg1 type:(id)arg2;
+ (id)dataReferenceWithDataRef:(char **)arg1 type:(id)arg2;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)proxy;
- (void)setDataRefType:(id)arg1;
- (void)setDataRef:(char **)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)MIMEType;
- (id)name;
- (id)referenceData;
- (id)referenceURL;
- (id)referenceFile;
- (id)dataRefType;
- (id)dataRefData;
- (char **)dataRef;
- (void)dealloc;
- (void)finalize;
- (id)initWithReferenceToData:(id)arg1 name:(id)arg2 MIMEType:(id)arg3;
- (id)initWithReferenceToData:(id)arg1;
- (id)initWithReferenceToURL:(id)arg1;
- (id)initWithReferenceToFile:(id)arg1;
- (id)initWithDataRefData:(id)arg1 type:(id)arg2;
- (id)initWithDataRef:(char **)arg1 type:(id)arg2;
- (id)initWithProxy:(int)arg1;

@end
