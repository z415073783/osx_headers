//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccountStatusDataSourceDelegate.h"
#import "NSTableViewDataSource.h"

@class AccountStatusDataSource, MFSMTPAccount, NSArray, NSArrayController, NSMutableArray, NSMutableDictionary, NSPanel, NSPopUpButton, NSSegmentedControl, NSString, NSTableView;

@interface SMTPSettings : NSObject <AccountStatusDataSourceDelegate, NSTableViewDataSource>
{
    NSMutableArray *_accountsInConflict;
    NSMutableDictionary *_cachedAccountEmployment;
    NSMutableDictionary *_cachedAccountEmploymentStrings;
    BOOL _didRegisterForNotifications;
    NSArray *_deliveryAccounts;
    NSArrayController *_deliveryAccountsController;
    NSPanel *_panel;
    NSTableView *_accountTable;
    NSSegmentedControl *_addRemoveAccountControl;
    NSPopUpButton *_tlsCertificatePopUp;
    MFSMTPAccount *_selectedDeliveryAccount;
    AccountStatusDataSource *_deliveryASDS;
}

+ (id)sharedPanel;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(nonatomic) BOOL didRegisterForNotifications; // @synthesize didRegisterForNotifications=_didRegisterForNotifications;
@property(readonly, nonatomic) AccountStatusDataSource *deliveryASDS; // @synthesize deliveryASDS=_deliveryASDS;
@property(retain, nonatomic) MFSMTPAccount *selectedDeliveryAccount; // @synthesize selectedDeliveryAccount=_selectedDeliveryAccount;
@property(nonatomic) __weak NSPopUpButton *tlsCertificatePopUp; // @synthesize tlsCertificatePopUp=_tlsCertificatePopUp;
@property(nonatomic) __weak NSSegmentedControl *addRemoveAccountControl; // @synthesize addRemoveAccountControl=_addRemoveAccountControl;
@property(nonatomic) __weak NSTableView *accountTable; // @synthesize accountTable=_accountTable;
@property(retain, nonatomic) NSPanel *panel; // @synthesize panel=_panel;
@property(retain, nonatomic) NSArrayController *deliveryAccountsController; // @synthesize deliveryAccountsController=_deliveryAccountsController;
@property(copy, nonatomic) NSArray *deliveryAccounts; // @synthesize deliveryAccounts=_deliveryAccounts;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_restoreMailAccountDefaultAccounts;
- (void)_recacheAccountEmployment;
- (void)_removeInvalidAccounts;
- (id)_defaultColumnSortDescriptor;
- (BOOL)_checkForConflicts;
- (void)_accountInfoDidChange:(id)arg1;
- (BOOL)_validateAccounts;
- (void)_updateTLSCertificateForOldAccount:(id)arg1 newAccount:(id)arg2;
- (void)_syncBindings;
- (void)dismissPanel:(id)arg1;
- (void)addRemoveAccountClicked:(id)arg1;
- (void)runSheetRelativeToWindow:(id)arg1 selectedAccount:(id)arg2 didEndDelegate:(id)arg3;
- (void)_updateEnableRemoveAccountControl;
- (void)_updateEnableAddAccountControl;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

