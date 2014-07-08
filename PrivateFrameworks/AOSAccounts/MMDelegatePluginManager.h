//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface MMDelegatePluginManager : NSObject
{
    BOOL _done;
    BOOL _succeeded;
    NSArray *_mbSetupPlugins;
    NSDictionary *_delegatesResponseDict;
}

+ (id)shared;
@property(readonly) NSDictionary *delegatesResponseDict; // @synthesize delegatesResponseDict=_delegatesResponseDict;
- (id)getMessagingAliasesFromDelegateResponse:(id)arg1 andResponse:(id)arg2;
- (void)invokeDelegatesWithAuthenticationResponse:(id)arg1 account:(id)arg2 withDispatchGroup:(struct dispatch_group_s *)arg3 completion:(CDUnknownBlockType)arg4;
- (id)readDelegatesRequest;
- (id)collectAccountInformationFromDelegates;
- (id)allPlugins;
- (void)dealloc;
- (id)init;

@end
