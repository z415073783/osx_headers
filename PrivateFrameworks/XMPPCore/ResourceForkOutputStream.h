//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

@class NSError, NSString;

@interface ResourceForkOutputStream : NSOutputStream
{
    NSString *_path;
    int _rsrcForkRef;
    struct FSRef _fileFSRef;
    unsigned int _forkLength;
    unsigned long long _status;
    NSError *_streamError;
    id _delegate;
}

- (void)dealloc;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (void)setResourceForkLength:(int)arg1;
- (void)setStreamError;
- (BOOL)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

