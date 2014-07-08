//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"

@class CBCentralManager, NSMutableDictionary, NSSet, NSString;

@interface BTLEBrowser : NSObject <CBCentralManagerDelegate>
{
    struct LogCategory *_ucat;
    struct dispatch_queue_s *_queue;
    NSSet *_serviceUUIDs;
    CDUnknownBlockType _foundHandler;
    CDUnknownBlockType _lostHandler;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _stoppedHandler;
    CBCentralManager *_centralManager;
    BOOL _started;
    NSMutableDictionary *_accessories;
    struct dispatch_source_s *_lostTimer;
}

@property(copy) CDUnknownBlockType stoppedHandler; // @synthesize stoppedHandler=_stoppedHandler;
@property(copy) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(copy) CDUnknownBlockType lostHandler; // @synthesize lostHandler=_lostHandler;
@property(copy) CDUnknownBlockType foundHandler; // @synthesize foundHandler=_foundHandler;
@property(copy) NSSet *serviceUUIDs; // @synthesize serviceUUIDs=_serviceUUIDs;
@property struct LogCategory *logCategory; // @synthesize logCategory=_ucat;
@property struct dispatch_queue_s *dispatchQueue; // @synthesize dispatchQueue=_queue;
- (void)_lostTimer;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_stop:(int)arg1;
- (void)stop;
- (void)_start;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
