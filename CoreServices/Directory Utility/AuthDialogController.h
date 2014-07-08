//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class AppDelegate, NSButton, NSTextField, NSWindow, ODSession, RemoteAuthorization;

@interface AuthDialogController : NSWindowController
{
    NSButton *okButton;
    NSButton *cancelButton;
    NSWindow *panel;
    NSTextField *pwdField;
    NSTextField *nameField;
    NSTextField *ipAddressField;
    AppDelegate *appController;
    BOOL isModal;
    ODSession *_odSession;
    RemoteAuthorization *_remoteAuth;
}

- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)showConnectErrorWithTitle:(id)arg1 andMessage:(id)arg2;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)setAcceptsPasswordOnly:(BOOL)arg1;
- (void)setModal:(BOOL)arg1;
- (void)showWindow:(id)arg1;
- (void)reset;
- (id)remoteAuth;
- (id)odSession;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)username;
- (id)ipAddress;
- (void)awakeFromNib;
- (id)init;

@end
