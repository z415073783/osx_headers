//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, SCROutputRequest;

@interface SpokenInterface : NSObject
{
    NSLock *_pendingRequestLock;
    SCROutputRequest *_pendingRequest;
    BOOL _pendingRequestDoAddDelay;
}

+ (id)spokenInterface;
- (void)speakRequest:(id)arg1;
- (void)speakCategory:(id)arg1 withNewValueText:(id)arg2 withDelay:(BOOL)arg3;
- (void)stopAllSound;
- (void)dealloc;
- (id)init;
- (void)_notifySpeakingCategoryCanBegin;
- (void)_beginSpeakingCategoryOutputRequest;

@end
