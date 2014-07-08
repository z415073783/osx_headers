//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSURLConnectionDelegate.h"

@class NSError, NSRunLoop, NSString, NSURLConnection;

@interface MGYouTubeUnpublishOperation : NSOperation <NSURLConnectionDelegate>
{
    NSError *_error;
    NSString *_authToken;
    NSString *_userID;
    NSString *_videoID;
    NSURLConnection *_currentConnection;
    NSRunLoop *_connectionRunLoop;
}

+ (id)youTubeDeletionURLForUserID:(id)arg1 videoID:(id)arg2;
@property(copy) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
@property(readonly) NSString *localizedStatusMessage;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)main;
- (id)initWithUserID:(id)arg1 videoID:(id)arg2 authorizationToken:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
