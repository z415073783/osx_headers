//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListener : NSObject
{
    NSMutableArray *_handlers;
    NSLock *_lock;
    struct dispatch_source_s *_timeoutTimer;
}

+ (id)sharedListener;
- (void)waitForManifestWithHandler:(CDUnknownBlockType)arg1;
- (void)_finish:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

