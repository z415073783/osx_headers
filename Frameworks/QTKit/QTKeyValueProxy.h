//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface QTKeyValueProxy : NSObject
{
    id _target;
    NSMutableDictionary *_proxiedKeysTriggeredByNonProxiedKeysTable;
    NSMutableSet *_proxiedKeysAnalyzedForTriggers;
    NSCountedSet *_observedProxiedKeys;
}

+ (BOOL)shouldProxyValueForKey:(id)arg1;
@property(retain, nonatomic) id target; // @dynamic target;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)_clearTriggerKeys;
- (void)_discoverTriggerKeysForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)QTKeyValueProxyTarget_keyPathsForValuesAffectingValueForKey:(id)arg1;

@end
