//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PRSDecoder;

@interface PRSSearchCompletionResultSet : NSObject
{
    PRSDecoder *_decoder;
    id <PRSSimpleResult> _fakeMapsMoreResult;
    BOOL _cacheable;
    float _completionScore;
    NSString *_prefix;
    NSString *_completionString;
    NSString *_feedbackQueryIdentifier;
    NSArray *_results;
}

@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic, getter=isCacheable) BOOL cacheable; // @synthesize cacheable=_cacheable;
@property(readonly, nonatomic) NSString *feedbackQueryIdentifier; // @synthesize feedbackQueryIdentifier=_feedbackQueryIdentifier;
@property(readonly, nonatomic) float completionScore; // @synthesize completionScore=_completionScore;
@property(readonly, nonatomic) NSString *completionString; // @synthesize completionString=_completionString;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (id)description;
- (id)resultForFactory:(id)arg1 resourceProvider:(id)arg2 dictionary:(id)arg3;
- (id)parseMapsTemplate:(id)arg1 withFactory:(id)arg2;
- (id)parseSimpleTemplate:(id)arg1 withFactory:(id)arg2;
- (id)decodeImageArray:(id)arg1;
- (id)decodeImage:(id)arg1;
- (id)initWithFactory:(id)arg1 resourceProvider:(id)arg2 prefix:(id)arg3 completionString:(id)arg4 score:(float)arg5 resultStatusString:(id)arg6 feedbackQueryIdentifier:(id)arg7 resultDictionaries:(id)arg8;

@end

