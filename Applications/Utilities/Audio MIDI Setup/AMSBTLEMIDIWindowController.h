//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "BTLEConnectionTable.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class AMSBTLEAdvertisementManager, AMSBTLEConnectionManager, NSBox, NSButton, NSLayoutConstraint, NSMutableArray, NSProgressIndicator, NSString, NSTableView, NSTextField, NSTimer, NSView;

@interface AMSBTLEMIDIWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate, BTLEConnectionTable>
{
    AMSBTLEAdvertisementManager *advertisingManager;
    NSButton *MIDIServiceAdvertiseButton;
    long long advertiseTimeout;
    BOOL advertising;
    NSTextField *MIDIServiceNameTextField;
    NSView *MIDIServiceStatusView;
    NSProgressIndicator *MIDIServiceStatusIndicator;
    NSTextField *MIDIServiceStatusTextField;
    BOOL showingServiceStatusMessage;
    BOOL isConnectedToCentral;
    NSLayoutConstraint *MIDIServiceStatusViewSuperviewHeight;
    NSProgressIndicator *peripheralSearchingStatusIndicator;
    NSTextField *peripheralSearchingStatusTextField;
    NSTableView *peripheralTableView;
    NSTextField *peripheralCountTextField;
    NSMutableArray *peripheralList;
    AMSBTLEConnectionManager *connectionManager;
    NSView *noBTView;
    NSTextField *noBTTextField;
    NSButton *assistMeButton;
    NSView *serviceView;
    NSBox *horizontalSeparator;
    NSView *peripheralView;
    NSMutableArray *connectionTimers;
    NSTimer *advertiseTimer;
}

@property NSTextField *peripheralCountTextField; // @synthesize peripheralCountTextField;
@property NSTableView *peripheralTableView; // @synthesize peripheralTableView;
@property NSTextField *peripheralSearchingStatusTextField; // @synthesize peripheralSearchingStatusTextField;
@property NSProgressIndicator *peripheralSearchingStatusIndicator; // @synthesize peripheralSearchingStatusIndicator;
@property NSTextField *MIDIServiceStatusTextField; // @synthesize MIDIServiceStatusTextField;
@property NSProgressIndicator *MIDIServiceStatusIndicator; // @synthesize MIDIServiceStatusIndicator;
@property NSView *MIDIServiceStatusView; // @synthesize MIDIServiceStatusView;
@property NSTextField *MIDIServiceNameTextField; // @synthesize MIDIServiceNameTextField;
@property NSButton *MIDIServiceAdvertiseButton; // @synthesize MIDIServiceAdvertiseButton;
- (id)peripheralAtIndex:(unsigned long long)arg1;
- (unsigned long long)peripheralCount;
- (BOOL)disconnectLocalPeripheral;
- (BOOL)changeServiceNameTo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)stopAdvertisingServiceWithCompletionBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)advertiseServiceWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)updatePeripheralTable;
- (id)advertisedServiceName;
- (void)hideServiceStatus;
- (void)showServiceStatusMessage:(id)arg1 showProgressIndicator:(BOOL)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)advertiseTimerFired:(id)arg1;
- (void)timeOutTimerFired:(id)arg1;
- (void)togglePeripheralConnect:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)toggleAdvertiseService:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)openBTPreferences:(id)arg1;
- (void)setUIEnabled:(BOOL)arg1;
- (id)windowNibName;
- (void)updateAdvertiseUI;
- (void)showWindow:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

