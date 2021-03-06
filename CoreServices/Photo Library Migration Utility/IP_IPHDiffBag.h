//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface IP_IPHDiffBag : NSObject
{
    NSMutableDictionary *_localMapping;
    NSMutableArray *_links;
    long long _resolvePolicy;
    id _delegate;
    SEL _sortCompareSelector;
}

- (id)persistencePropertyList;
- (void)loadWithPersistencePropertyList:(id)arg1;
- (BOOL)removeLinkForResouce:(id)arg1;
- (id)links;
- (id)syncTasks;
- (void)getLocalState:(long long *)arg1 andDistantState:(long long *)arg2 forResource:(id)arg3;
- (void)updateWithLocalIDs:(id)arg1;
- (void)updateWithDistantIDs:(id)arg1;
- (void)setResourceIsSynced:(id)arg1;
- (void)notifyThatDistantResource:(id)arg1 hasChangedStateTo:(int)arg2;
- (void)notifyThatLocalResource:(id)arg1 hasChangedStateTo:(int)arg2;
- (void)normalizeLocalState:(int *)arg1 distantState:(int *)arg2;
- (id)_stateDescription:(int)arg1;
- (void)setSortCompareSelector:(SEL)arg1;
- (SEL)sortCompareSelector;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setResolvePolicy:(long long)arg1;
- (long long)resolvePolicy;
- (void)dealloc;
- (id)init;

@end

