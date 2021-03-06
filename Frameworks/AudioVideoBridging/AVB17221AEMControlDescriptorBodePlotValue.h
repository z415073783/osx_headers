//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@class AVB17221AEMBodePlotEntry, NSArray;

@interface AVB17221AEMControlDescriptorBodePlotValue : AVB17221AEMControlDescriptorValue
{
    AVB17221AEMBodePlotEntry *minValue;
    AVB17221AEMBodePlotEntry *maxValue;
    AVB17221AEMBodePlotEntry *step;
    AVB17221AEMBodePlotEntry *defaultValue;
    NSArray *currentValues;
}

@property(copy) NSArray *currentValues; // @synthesize currentValues;
@property(copy) AVB17221AEMBodePlotEntry *defaultValue; // @synthesize defaultValue;
@property(copy) AVB17221AEMBodePlotEntry *step; // @synthesize step;
@property(copy) AVB17221AEMBodePlotEntry *maxValue; // @synthesize maxValue;
@property(copy) AVB17221AEMBodePlotEntry *minValue; // @synthesize minValue;
- (void)dealloc;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)arg1;
- (id)initWithValuePointer:(char **)arg1 numberOfValues:(unsigned short)arg2;

@end

