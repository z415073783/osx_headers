//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACLEditor, KeychainItemBasic, NSButton, NSImageView, NSMutableArray, NSPopUpButton, NSTabView, NSTextField, NSView, NSWindow, SFCertificateView;

@interface CertificatePrefEditor : NSObject
{
    NSWindow *_window;
    NSTabView *_tabView;
    NSImageView *_icon;
    NSTextField *_name;
    NSTextField *_where;
    NSPopUpButton *_certPopup;
    NSButton *_saveButton;
    SFCertificateView *_certView;
    NSView *_aclView;
    ACLEditor *_aclEditor;
    KeychainItemBasic *_item;
    BOOL _identitiesOnly;
    BOOL _certificateChanged;
    NSMutableArray *_certificates;
    long long _lastIndex;
    long long _index;
    BOOL _isDirty;
    BOOL _saveChanges;
}

- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)saveChangesAlert;
- (void)textDidChange:(id)arg1;
- (void)populateAttributes;
- (void)populateMenu;
- (void)selectPreferredCertificate;
- (void)insertMenuItemForCertificate:(struct OpaqueSecCertificateRef *)arg1 withImage:(id)arg2;
- (long long)indexOfCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)certificates;
- (void)saveClicked:(id)arg1;
- (void)certPopupSelected:(id)arg1;
- (void)keychainLockNotification:(id)arg1;
- (void)windowResignedKey:(id)arg1;
- (void)windowBecameKey:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)forceClose;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)show:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithItem:(id)arg1;

@end

