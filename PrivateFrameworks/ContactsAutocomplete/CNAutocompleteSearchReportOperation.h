//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSMutableArray;

@interface CNAutocompleteSearchReportOperation : NSOperation
{
    NSMutableArray *_results;
    CDUnknownBlockType _reportingBlock;
}

+ (id)operationWithReportingBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)main;
- (void)addResults:(id)arg1;
- (id)initWithReportingBlock:(CDUnknownBlockType)arg1;

@end

