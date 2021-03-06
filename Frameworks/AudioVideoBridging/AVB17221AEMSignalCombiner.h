//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMBaseControl.h>

#import "NSCopying.h"

@class NSArray;

@interface AVB17221AEMSignalCombiner : AVB17221AEMBaseControl <NSCopying>
{
    NSArray *sources;
    NSArray *map;
}

@property(copy) NSArray *map; // @synthesize map;
@property(copy) NSArray *sources; // @synthesize sources;
- (void)dealloc;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_02f57b7b *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_02f57b7b *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

