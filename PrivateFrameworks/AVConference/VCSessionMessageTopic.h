//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionMessageTopic : NSObject
{
    NSArray *associatedStrings;
    NSString *topicKey;
    long long latestReceivedTopicMessageNumber;
    NSString *lastMessage;
    NSObject<OS_dispatch_queue> *outMessageQueue;
    struct tagHANDLE *handle;
    unsigned int p2pID;
    NSObject<OS_dispatch_queue> *inMessageQueue;
    CDUnknownBlockType receiveBlock;
    long long latestOutgoingMessageIndex;
    BOOL isSendingEnabled;
    BOOL shouldEncodeTopicKeyInMessage;
    NSString *topicPrefix;
}

@property(nonatomic, setter=setIsSendingEnabled:) BOOL isSendingEnabled; // @synthesize isSendingEnabled;
@property(readonly) NSString *topicKey; // @synthesize topicKey;
- (void)passMessage:(id)arg1 sequence:(int)arg2;
- (void)setP2PID:(unsigned int)arg1;
- (void)sendMessage:(id)arg1 withSequence:(long long)arg2 numRetries:(long long)arg3;
- (void)sendMessage:(id)arg1;
- (BOOL)isStringAssociated:(id)arg1;
- (void)dealloc;
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 receiveHandler:(CDUnknownBlockType)arg3;

@end
