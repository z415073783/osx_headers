//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "GKDialogControllerSizing.h"
#import "GKRemoteViewControllerDelegate.h"
#import "GKViewController.h"

@class GKMatchRequest, GKRemoteViewController, NSString;

@interface GKTurnBasedMatchmakerViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>
{
    id _remoteViewController;
    id <GKTurnBasedMatchmakerViewControllerDelegate> _turnBasedMatchmakerDelegateWeak;
    GKMatchRequest *_matchRequest;
    BOOL _showExistingMatches;
}

@property(retain, nonatomic) GKRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) BOOL showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
- (void)authenticationChanged:(id)arg1;
- (void)playerQuitMatch:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
- (void)remoteViewController:(id)arg1 receivedMessageFromService:(id)arg2;
@property(nonatomic) id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate; // @dynamic turnBasedMatchmakerDelegate;
- (struct CGSize)_gkSizeForDialogController;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)loadView;
- (void)dealloc;
- (id)initWithMatchRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
