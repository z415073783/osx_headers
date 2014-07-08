//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

@class LiKeyPath;

@interface LiRebuildSearchKitIndexRequest : LiRequest
{
    unsigned long long _tableId;
    LiKeyPath *_propertyPath;
}

@property(retain, nonatomic) LiKeyPath *propertyPath; // @synthesize propertyPath=_propertyPath;
@property(nonatomic) unsigned long long tableId; // @synthesize tableId=_tableId;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)initWithTable:(id)arg1 propertyPath:(id)arg2;

@end
