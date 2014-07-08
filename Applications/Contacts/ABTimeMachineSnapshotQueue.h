//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABTimeMachineSnapshotWindowController, NSMutableArray, NSString;

@interface ABTimeMachineSnapshotQueue : NSObject
{
    ABTimeMachineSnapshotWindowController *_snapshotWindowController;
    NSString *_timeStampString;
    NSMutableArray *_requestedUrls;
    double _currentDelay;
    int _snapshotIteration;
}

- (void)saveSnapshotOfWindow:(id)arg1 tag:(id)arg2;
- (void)invalidateSnapshots;
- (void)cancelAllRequests;
- (void)updateSnapshotForURL:(id)arg1;
- (id)popNextUrl;
- (void)updateNextSnapshot;
- (void)updateNextSnapshotAfterDelay;
- (void)requestSnapshotForUrl:(id)arg1;
- (void)dealloc;
- (id)initWithSnapshotWindowController:(id)arg1 timeStampString:(id)arg2;

@end
