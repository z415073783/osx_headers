//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "SUURLSessionDownloadDelegate.h"

@class NSError, SUProduct, SUURLSessionDownload;

@interface SUProductDownloader : NSOperation <SUURLSessionDownloadDelegate>
{
    SUProduct *_product;
    BOOL _backgroundPriority;
    unsigned long long _totalLength;
    unsigned long long _finishedLength;
    BOOL _isCancelled;
    struct dispatch_queue_s *_opQueue;
    NSError *_error;
    SUURLSessionDownload *_session;
}

@property BOOL backgroundPriority; // @synthesize backgroundPriority=_backgroundPriority;
- (id)error;
- (BOOL)isCancelled;
- (float)averageBytesPerSecond;
- (double)progress;
- (long long)totalLength;
- (long long)currentLength;
- (void)cancel;
- (void)saveCurrentState;
- (void)downloadSessionDidFinishForProductKey:(id)arg1;
- (void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3;
- (id)packageReferenceForPackageIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPreviousRef:(id)arg3;
- (void)main;
- (id)product;
- (void)dealloc;
- (id)initWithProduct:(id)arg1;

@end
