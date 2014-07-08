//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ScrollableTabBarViewButton.h>

@class BrowserTabViewItem, ClippedItemsIndicator, NSArray, NSImage, NSImageView, NSLayoutConstraint, NSString, NSTextField, NSView, RolloverImageButton;

__attribute__((visibility("hidden")))
@interface ScrollableTabButton : ScrollableTabBarViewButton
{
    NSString *_title;
    NSTextField *_titleTextField;
    NSImageView *_errorIndicator;
    NSView *_focusRingView;
    NSView *_mainContentContainer;
    NSView *_mainContentClippingContainer;
    NSLayoutConstraint *_mainContentContainerWidthConstraint;
    NSLayoutConstraint *_mainContentContainerLeftConstraint;
    NSLayoutConstraint *_mainContentContainerRightConstraint;
    NSLayoutConstraint *_mainContentContainerHorizontalCenteringConstraint;
    ClippedItemsIndicator *_clippedItemsIndicator;
    NSArray *_clippedItemsIndicatorConstraints;
    NSImage *_tabDragImage;
    NSImage *_miniWindowDragImage;
    BOOL _showingAlertSymbol;
    BOOL _showingCloseButton;
    BOOL _showingClippedItemsIndicator;
    BrowserTabViewItem *_tabViewItem;
    RolloverImageButton *_closeButton;
    SEL _closeAction;
    SEL _becomeFirstResponderAction;
    double _buttonWidthForTitleLayout;
    double _titleCenterOffset;
}

+ (id)titleFont;
+ (double)titleWidthForButtonWidth:(double)arg1;
+ (BOOL)isMiniWindowDrag:(id)arg1;
+ (BOOL)isTabDrag:(id)arg1;
@property(nonatomic) double titleCenterOffset; // @synthesize titleCenterOffset=_titleCenterOffset;
@property(nonatomic) double buttonWidthForTitleLayout; // @synthesize buttonWidthForTitleLayout=_buttonWidthForTitleLayout;
@property(nonatomic, getter=isShowingClippedItemsIndicator) BOOL showingClippedItemsIndicator; // @synthesize showingClippedItemsIndicator=_showingClippedItemsIndicator;
@property(nonatomic, getter=isShowingCloseButton) BOOL showingCloseButton; // @synthesize showingCloseButton=_showingCloseButton;
@property(nonatomic, getter=isShowingAlertSymbol) BOOL showingAlertSymbol; // @synthesize showingAlertSymbol=_showingAlertSymbol;
@property(nonatomic) SEL becomeFirstResponderAction; // @synthesize becomeFirstResponderAction=_becomeFirstResponderAction;
@property(nonatomic) SEL closeAction; // @synthesize closeAction=_closeAction;
@property(readonly) RolloverImageButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly) BrowserTabViewItem *tabViewItem; // @synthesize tabViewItem=_tabViewItem;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateConstraints;
- (void)updateLayer;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)morphingDragImageEnded:(id)arg1;
- (void)morphingDragImage:(id)arg1 wasDroppedAtPointOnScreen:(struct CGPoint)arg2;
- (void)morphingDragImage:(id)arg1 movedToPointOnScreen:(struct CGPoint)arg2;
- (id)_imageForEmptyWindowOfSize:(struct CGSize)arg1 usePrivateBrowsing:(BOOL)arg2;
- (double)_miniWindowDragImageWidth;
- (id)miniWindowDragImage;
- (id)tabDragImage;
- (struct CGSize)maximumDragImageSize;
- (id)_titleStringAttributesForMainWindow:(BOOL)arg1 activeTab:(BOOL)arg2;
- (void)_updateTitleTextField;
- (void)_updateErrorIndicatorImage;
- (void)_updateCloseButtonImages;
- (void)setHasPressedHighlight:(BOOL)arg1;
- (void)setHasMouseOverHighlight:(BOOL)arg1 shouldAnimateCloseButton:(BOOL)arg2;
- (void)_createClippedItemsIndicatorConstraintsIfNecessary;
- (void)_createdClippedItemsIndicatorIfNecessary;
- (void)_closeButtonClicked:(id)arg1;
- (void)destroy;
- (void)_updateAccessibilityAttributes;
- (void)_setUpConstraints;
- (void)_updateTitleContainerConstraints;
- (void)setActive:(BOOL)arg1;
- (void)setHasMouseOverHighlight:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_textFieldFontSmoothingBackgroundColor;
- (void)setTitleCenterOffset:(double)arg1 animated:(BOOL)arg2;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setButtonWidthForTitleLayout:(double)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tabViewItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
