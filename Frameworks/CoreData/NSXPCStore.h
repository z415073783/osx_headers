//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSIncrementalStore.h>

@class NSGenerationToken, NSMutableDictionary, NSPersistentStoreCache, NSSQLCore, NSSQLModel, NSString, NSXPCStoreConnection, NSXPCStoreNotificationObserver;

__attribute__((visibility("hidden")))
@interface NSXPCStore : NSIncrementalStore
{
    NSPersistentStoreCache *_cache;
    NSMutableDictionary *_changeCache;
    NSXPCStoreConnection *_myConnection;
    NSSQLModel *_model;
    NSSQLCore *_core;
    NSString *_sanityCheckToken;
    NSXPCStoreNotificationObserver *_observer;
    NSGenerationToken *_identifier;
    NSString *_remoteStoreChangedNotificationName;
}

+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
+ (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
+ (BOOL)_isOnExtendedTimeout;
+ (void)initialize;
+ (int)debugDefault;
@property(readonly, copy) NSString *remoteStoreChangedNotificationName; // @synthesize remoteStoreChangedNotificationName=_remoteStoreChangedNotificationName;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)decodeValue:(id)arg1 forRelationship:(id)arg2 onSource:(id)arg3 inContext:(id)arg4 error:(id *)arg5;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)_createAndCacheRowForObjectWithID:(id)arg1 propertyValues:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)executePullChangesRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)executeSaveRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)_executeSaveRequest:(id)arg1 forceInsertsToUpdates:(BOOL)arg2 withContext:(id)arg3 interrupts:(unsigned long long *)arg4 error:(id *)arg5;
- (void)_commitChangesForRequest:(id)arg1;
- (id)encodeSaveRequest:(id)arg1 forceInsertsToUpdates:(BOOL)arg2;
- (id)encodeObjectsForSave:(id)arg1 forDelete:(BOOL)arg2;
- (id)_cacheNodePropertiesFromObject:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)decodeResults:(id)arg1 forFetch:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (id)decodeResults:(id)arg1 forFaultOfObjectWithID:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3;
- (BOOL)loadMetadata:(id *)arg1;
- (BOOL)load:(id *)arg1;
- (void)teardownRemoteStoreObserver;
- (void)setupRemoteStoreObserver;
- (id)_sanityCheckToken;
- (void)setIdentifier:(id)arg1;
- (void)setURL:(id)arg1;
- (id)type;
- (id)sendMessage:(id)arg1 fromContext:(id)arg2 interrupts:(unsigned long long *)arg3 error:(id *)arg4;
- (id)retainedConnection;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (void)disconnectConnection:(id)arg1;
- (id)serviceName;
- (void)disconnect;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (struct _NSScalarObjectID *)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (struct _NSScalarObjectID *)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (id)entityForEntityDescription:(id)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (Class)_objectIDClass;
- (void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 withTimestamp:(double)arg4;
- (void)cacheFetchedRows:(id)arg1 forManagedObjects:(id)arg2;
- (void)decodePrefetchArray:(id)arg1 forSources:(id)arg2 context:(id)arg3;
- (void)decodePrefetchResult:(id)arg1 forSources:(id)arg2 context:(id)arg3;
- (void)_updateRollbackCacheForObjectWithID:(id)arg1 relationship:(id)arg2 withValuesFrom:(id)arg3;
- (void)_clearCachedRowForObjectWithID:(id)arg1;
- (id)_cachedRowForObjectWithID:(id)arg1;
- (id)_cachedRowForRelationship:(id)arg1 onObjectWithID:(id)arg2;
- (void)setSQLCore:(id)arg1;
- (id)sqlCore;
- (id)model;

@end

