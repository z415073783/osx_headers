//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABMetadataOperation.h>

@class NSArray;

@interface ABMetadataMarkViewedOperation : ABMetadataOperation
{
    NSArray *_uniqueIds;
    BOOL _oneShot;
}

- (void)main;
- (void)_markViewedForPeople:(id)arg1;
- (void)markOneShot;
- (int)metadataJobType;
- (void)dealloc;
- (id)initWithMetadataManager:(id)arg1 recordUniqueIds:(id)arg2;

@end

