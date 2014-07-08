//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class GKFacebookLikeButton, GKGame, NSButton, NSLayoutConstraint, NSPopUpButton, NSString, NSTextField;

@interface GKGameDetailInGameView : NSView
{
    NSView *_contentView;
    GKGame *_game;
    NSView *_titleView;
    NSTextField *_titleLabel;
    NSLayoutConstraint *_titleHeightConstraint;
    double _titleHeight;
    NSPopUpButton *_rateButton;
    NSButton *_shareButton;
    NSView *_contentContainerView;
    GKFacebookLikeButton *_facebookButton;
    NSString *_rateInitialTitle;
}

+ (id)detailView;
@property(retain) NSString *rateInitialTitle; // @synthesize rateInitialTitle=_rateInitialTitle;
@property GKFacebookLikeButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property NSView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property NSPopUpButton *rateButton; // @synthesize rateButton=_rateButton;
@property double titleHeight; // @synthesize titleHeight=_titleHeight;
@property NSLayoutConstraint *titleHeightConstraint; // @synthesize titleHeightConstraint=_titleHeightConstraint;
@property NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property NSView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void)donePressed:(id)arg1;
- (void)sharePressed:(id)arg1;
- (void)ratePressed:(id)arg1;
@property(copy) NSString *title;
@property(getter=isTitleHidden) BOOL titleHidden;
- (void)dealloc;
- (void)awakeFromNib;

@end
