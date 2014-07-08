//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPeoplePickerView, ABPerson, AddBuddyNameHelper, CollapseView, ExtendedComboBox, IMHandle, NSArray, NSButton, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSString, NSTextField, NSView, NSWindow, PeopleListController, PeoplePicker, ServicePopUp;

@interface AddBuddy : NSObject
{
    NSWindow *_recordWindow;
    NSView *_topReferenceView;
    NSTextField *_addCardTitle;
    CollapseView *_accountsCollapseView;
    ServicePopUp *_toAccountPopup;
    CollapseView *_groupsCollapseView;
    NSPopUpButton *_proposedGroupPopUpButton;
    ExtendedComboBox *_proposedFirstNameTextField;
    ExtendedComboBox *_proposedLastNameTextField;
    NSButton *_disclosure;
    NSView *_pickerArea;
    NSView *_titleView;
    ABPeoplePickerView *_pickerView;
    NSButton *_proposedAddButton;
    NSTextField *_proposedNameField;
    PeoplePicker *_picker;
    AddBuddyNameHelper *_buddyNameHelper;
    NSWindow *_buddyWindow;
    IMHandle *_imHandle;
    ABPerson *_abPerson;
    NSArray *_accounts;
    NSString *_targetGroup;
    PeopleListController *_peopleListController;
    NSMutableArray *_abAddressesCache;
    NSMutableArray *_abFirstNameCache;
    NSMutableArray *_abLastNameCache;
    NSMutableDictionary *_abFirstNameToLastNameCache;
    NSMutableDictionary *_abLastNameToFirstNameCache;
    IMHandle *_cachedSelectedIMHandle;
    ABPerson *_cachedSelectedPerson;
    NSString *_cachedKeyName;
    NSArray *_cachedPossibleNames;
    struct CGRect _originalBuddyListFrame;
    struct CGRect _initialSheetBuddyListFrame;
    struct CGRect _smallSheetBuddyListFrame;
    struct CGRect _largeSheetBuddyListFrame;
    struct CGSize _minExpandedSheetSize;
    struct CGSize _collapsedSheetSize;
    struct CGSize _expandedSheetSize;
    unsigned int _lockAccountSelection:1;
}

- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(int)arg2;
- (int)numberOfItemsInComboBox:(id)arg1;
- (id)_possibleLastNames;
- (id)_possibleFirstNames;
- (id)_completedLastName;
- (id)_completedFirstName;
- (void)nameChanged:(id)arg1;
- (BOOL)_fillAccountInformationIfNecessary;
- (id)_selectedIMHandleForABPerson:(id)arg1;
- (void)togglePickerView:(id)arg1;
- (void)cancelChanges:(id)arg1;
- (void)extendedComboBoxDidPressEnter:(id)arg1;
- (void)_acceptEntry;
- (void)accountSelectionChanged:(id)arg1;
- (void)chooseAccountName:(id)arg1;
- (BOOL)isPickerVisible;
- (BOOL)_abPersonAndFieldsAreTheSame;
- (void)_updateFromABPerson;
- (void)_updateFromABPersonForce:(BOOL)arg1 setAsNotAutoFilled:(BOOL)arg2;
- (BOOL)_firstOrLastNameCustomized;
- (BOOL)_lastNameCustomized;
- (BOOL)_firstNameCustomized;
- (BOOL)_isAccountUserCustomized;
- (id)_selectedGroup;
- (void)_validateAddButton;
- (void)_synchronizeDisclosureArea;
- (void)_peopleListControllerRepresentedAccountsChanged:(id)arg1;
- (void)_accountStatusChanged:(id)arg1;
- (void)_peoplePickerPalettePropertyChanged:(id)arg1;
- (void)_peoplePickerPaletteUpdated:(id)arg1;
- (void)_peoplePickerValueUpdated:(id)arg1;
- (void)comboBoxSelectionIsChanging:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)comboBoxWillDismiss:(id)arg1;
- (void)comboBoxWillPopUp:(id)arg1;
- (void)_controlTextDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)buddyNameFieldDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (id)_selectedService;
- (id)_selectedAccount;
- (void)_setGroups:(id)arg1;
- (void)_setBuddyWindow:(id)arg1;
- (void)_setABPerson:(id)arg1;
- (void)setAccountSelectionLocked:(BOOL)arg1;
- (void)setTargetGroup:(id)arg1;
- (void)setIMHandle:(id)arg1;
- (struct CGRect)rectForRecordSheetResizedTo:(struct CGSize)arg1;
- (void)dismissRecordSheet:(id)arg1;
- (void)_displayRecordSheet;
- (void)_recordSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_setupNewRecordSheet;
- (void)_acceptRecord;
- (void)_setAccountName:(id)arg1;
- (void)_clearFields;
- (void)_rebuildAddressBookInformation;
- (void)_registerForNotifications;
- (void)_configurePeoplePickerPaletteForMe;
- (void)_configureTitleForLockedIMHandle;
- (void)_configureAccountsAndGroups;
- (void)openForNewIMHandleWithGroups:(id)arg1 buddyWindow:(id)arg2;
- (void)openForIMHandle:(id)arg1 groups:(id)arg2 buddyWindow:(id)arg3;
- (void)openForABPerson:(id)arg1 imHandle:(id)arg2 groups:(id)arg3 buddyWindow:(id)arg4;
- (void)openForABPerson:(id)arg1 groups:(id)arg2 buddyWindow:(id)arg3;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithPeopleListController:(id)arg1;
- (id)initWithAccounts:(id)arg1;
- (id)_init;

@end
