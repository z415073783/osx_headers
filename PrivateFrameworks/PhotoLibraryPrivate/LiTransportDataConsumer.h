//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiStringAtomCoder;

@interface LiTransportDataConsumer : NSObject
{
    char *_internalBuffer;
    char *_internalPtr;
    const char *_internalEndPtr;
    unsigned long long _internalBufferLen;
    unsigned long long _length;
    unsigned int *_elementCountPtr;
    LiStringAtomCoder *_stringAtomCoder;
}

@property(readonly, nonatomic) LiStringAtomCoder *stringAtomCoder; // @synthesize stringAtomCoder=_stringAtomCoder;
- (void).cxx_destruct;
- (void)putStats:(const CDStruct_c802c68a *)arg1;
- (void)putAtomId:(long long)arg1 string:(id)arg2;
- (void)putDictionary:(id)arg1 forLibrary:(id)arg2;
- (void)putSet:(id)arg1 forLibrary:(id)arg2;
- (void)putArray:(id)arg1 forLibrary:(id)arg2;
- (void)putObject:(id)arg1 forLibrary:(id)arg2;
- (void)putEncodingObject:(id)arg1 forLibrary:(id)arg2;
- (void)putNumber:(id)arg1;
- (void)putDate:(id)arg1;
- (void)putBytes:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)putData:(id)arg1;
- (void)putURL:(id)arg1;
- (void)putError:(id)arg1 forLibrary:(id)arg2;
- (void)putString:(id)arg1;
- (void)putDouble:(double)arg1;
- (void)putInt64:(long long)arg1;
- (void)putUInt64:(unsigned long long)arg1;
- (void)putUInt32:(unsigned int)arg1;
- (void)putUInt16:(unsigned short)arg1;
- (void)putUInt8:(unsigned char)arg1;
- (void)storeDataType:(unsigned char)arg1;
- (void)putDataType:(unsigned char)arg1;
- (unsigned long long)countOfElements;
- (unsigned long long)length;
- (const void *)buffer;
- (BOOL)verify:(unsigned long long)arg1;
- (void)recycle;
- (id)initWithStringAtomCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

