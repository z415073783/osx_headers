//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCountedSet, NSMutableDictionary;

@interface _NSTreeNodeObservingTracker : NSObject
{
    id _treeNodeObserver;
    NSArray *_availableModelAndProxyKeys;
    NSCountedSet *_treeNodeObservingTracking;
    id _observedTreeNodesData;
    struct __treeNodeObservingTrackerFlags {
        unsigned int _multipleObservedModelObjects:1;
        unsigned int _registersObservingWithKVOPriorKey:1;
        unsigned int _reservedModelObservingTrackerFlags:30;
    } _treeNodeObservingTrackerFlags;
    NSMutableDictionary *_observedModelKeyPathInfoTable;
}

- (void)stopObservingModelObject:(id)arg1;
- (void)startObservingModelObject:(id)arg1;
- (void)stopAllModeObjectObserving;
- (void)startObservingModelObjectTree:(id)arg1;
- (void)_stopObservingModelObject:(id)arg1;
- (void)_startObservingModelObject:(id)arg1;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForKeyPath:(id)arg2;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForModelObject:(id)arg2;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForKeyPath:(id)arg2 ofModelObject:(id)arg3;
- (void)unregisterModelKeyPath:(id)arg1;
- (void)registerModelKeyPath:(id)arg1;
- (void)unregisterObservingForAnalyzableKeyPath:(id)arg1;
- (void)registerObservingForAnalyzableKeyPath:(id)arg1;
- (BOOL)registersObservingWithKVOPriorKey;
- (void)setRegistersObservingWithKVOPriorKey:(BOOL)arg1;
- (void)dealloc;
- (id)initWithModelObserver:(id)arg1 availableModelAndProxyKeys:(id)arg2;

@end

