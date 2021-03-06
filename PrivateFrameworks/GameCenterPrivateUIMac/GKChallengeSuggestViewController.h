//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "GKComposeControllerDelegate.h"

@class GKChallenge, GKChallengeSuggestCollectionViewController, GKGameRecord, GKPlayer, NSButton, NSString, NSTextField, NSView;

@interface GKChallengeSuggestViewController : NSViewController <GKComposeControllerDelegate>
{
    id <GKChallengeSuggestViewControllerDelegate> _delegate;
    GKGameRecord *_game;
    GKPlayer *_player;
    GKChallenge *_challenge;
    GKChallengeSuggestCollectionViewController *_collectionController;
    NSTextField *_titleLabel;
    NSView *_collectionContainerView;
    NSButton *_nextButton;
}

+ (id)challengeSuggestViewControllerWithGame:(id)arg1 player:(id)arg2;
@property NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property NSView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) GKChallengeSuggestCollectionViewController *collectionController; // @synthesize collectionController=_collectionController;
@property(retain) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain) GKPlayer *player; // @synthesize player=_player;
@property(retain) GKGameRecord *game; // @synthesize game=_game;
@property id <GKChallengeSuggestViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)composeController:(id)arg1 didFinishWithMessage:(id)arg2;
- (void)composeControllerWasCancelled:(id)arg1;
- (void)nextPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)didSelectChallenge:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

