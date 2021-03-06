//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class ABAddressBook, NSArray, NSString, PHXSource;

@interface ABSearchOperation : NSOperation
{
    PHXSource *source;
    NSArray *terms;
    NSString *originalTerm;
    ABAddressBook *_addressBook;
    id <ABSearchOperationDelegate> delegate;
    CDUnknownBlockType _completionHandler;
    int phase;
    BOOL shouldSearchLocal;
    BOOL shouldSearchServer;
    BOOL shouldReturnDistributionLists;
    BOOL shouldReturnFullContactData;
    int resultType;
    NSArray *prefixFields;
    id <CNDirectoryResultBuilder> _resultBuilderPrototype;
}

+ (BOOL)_resultRecord:(id)arg1 matchesSearchOperation:(id)arg2;
@property(retain, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain) id <CNDirectoryResultBuilder> resultBuilderPrototype; // @synthesize resultBuilderPrototype=_resultBuilderPrototype;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *prefixFields; // @synthesize prefixFields;
@property(nonatomic) int resultType; // @synthesize resultType;
@property(nonatomic) BOOL shouldReturnFullContactData; // @synthesize shouldReturnFullContactData;
@property(nonatomic) BOOL shouldReturnDistributionLists; // @synthesize shouldReturnDistributionLists;
@property(nonatomic) BOOL shouldSearchServer; // @synthesize shouldSearchServer;
@property(nonatomic) BOOL shouldSearchLocal; // @synthesize shouldSearchLocal;
@property(nonatomic) int phase; // @synthesize phase;
@property(retain, nonatomic) id <ABSearchOperationDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *originalTerm; // @synthesize originalTerm;
@property(copy, nonatomic) NSArray *terms; // @synthesize terms;
@property(retain, nonatomic) PHXSource *source; // @synthesize source;
- (id)description;
- (void)reportRecords:(id)arg1;
- (id)searchMatches;
- (id)cachedMatches;
- (void)_doMain;
- (void)main;
- (void)dealloc;
- (id)init;

@end

