//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAlert.h"

@interface NSAlert (SafariNSAlertExtras)
+ (long long)safari_runAlertPanelAllowingQuitWithTitle:(id)arg1 messageFormat:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (void)_safari_buttonActivated:(id)arg1;
- (void)_safari_addButtonWithTitle:(id)arg1 tag:(long long)arg2;
@end
