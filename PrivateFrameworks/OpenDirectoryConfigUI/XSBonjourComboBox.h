//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSComboBox.h"

#import "NSCoding.h"
#import "NSComboBoxDataSource.h"
#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMultiReadUniWriteLock, NSMutableArray, NSMutableDictionary, NSNetServiceBrowser, NSString, XSAdminSession;

@interface XSBonjourComboBox : NSComboBox <NSNetServiceBrowserDelegate, NSNetServiceDelegate, NSComboBoxDataSource, NSCoding>
{
    NSString *_serviceType;
    XSAdminSession *_session;
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_netServices;
    BOOL _isBrowsing;
    BOOL _displaysResolvedAddresses;
    NSMultiReadUniWriteLock *_hostNamesForAddressesLock;
    NSMutableDictionary *_hostNamesForAddresses;
}

+ (void)initialize;
@property BOOL displaysResolvedAddresses; // @synthesize displaysResolvedAddresses=_displaysResolvedAddresses;
@property(retain) NSMutableArray *netServices; // @synthesize netServices=_netServices;
@property(retain) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(retain) XSAdminSession *session; // @synthesize session=_session;
@property(retain) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)failedToReceiveBonjourServiceNamesWithAction:(id)arg1;
- (void)receivedBonjourServiceNamesWithAction:(id)arg1;
- (id)resolvedHostNameForNetService:(id)arg1;
- (void)threadedGetBestHostNameFromAddresses:(id)arg1;
- (void)sortAndReloadResolvedData;
- (id)ipV4AddressStringFromAddressData:(id)arg1;
- (void)refreshRemoteServiceNames;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (id)discoveredServiceNames;
- (id)selectedServiceName;
- (id)discoveredNetServices;
- (id)selectedNetService;
- (void)stopBrowsing:(id)arg1;
- (void)startBrowsing:(id)arg1;
@property BOOL displayResolvedAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
