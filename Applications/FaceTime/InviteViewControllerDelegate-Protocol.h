//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class InviteViewController, NSString;

@protocol InviteViewControllerDelegate <NSObject>
- (void)inviteViewController:(InviteViewController *)arg1 sendMessage:(NSString *)arg2;
- (void)inviteViewControllerMessageCanceled:(InviteViewController *)arg1;
- (void)inviteViewController:(InviteViewController *)arg1 remindMeAfter:(double)arg2;
- (void)inviteViewControllerRequestedMessageUI:(InviteViewController *)arg1;
- (void)inviteViewControllerDeclined:(InviteViewController *)arg1;
- (void)inviteViewControllerAccpted:(InviteViewController *)arg1;
@end

