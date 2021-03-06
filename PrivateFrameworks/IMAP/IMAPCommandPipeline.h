//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IMAPCommandPipeline : NSObject
{
    id _imapCommandPipelineLock;
    BOOL _isSending;
    BOOL _isFull;
    unsigned int _chunkSize;
    unsigned int _expectedSize;
    NSMutableArray *_fetchUnits;
}

@property(retain, nonatomic) NSMutableArray *fetchUnits; // @synthesize fetchUnits=_fetchUnits;
@property(nonatomic) BOOL isFull; // @synthesize isFull=_isFull;
@property(nonatomic) BOOL isSending; // @synthesize isSending=_isSending;
@property(nonatomic) unsigned int expectedSize; // @synthesize expectedSize=_expectedSize;
@property(nonatomic) unsigned int chunkSize; // @synthesize chunkSize=_chunkSize;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_newOperationsAssigningResponseHandler:(id)arg1;
- (id)failureResponsesFromSendingCommandsWithGateway:(id)arg1 responseHandler:(id)arg2 highPriority:(BOOL)arg3;
- (void)_removeFetchUnitMatchingResponse:(id)arg1;
- (void)addFetchCommandForUid:(unsigned int)arg1 fetchItem:(id)arg2 expectedLength:(unsigned int)arg3;
- (id)imapCommandPipelineLock;
- (id)description;
- (id)init;

@end

