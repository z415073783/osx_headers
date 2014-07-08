//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPreferencesModule.h"

#import "TKTonePickerViewControllerDelegate.h"

@class DefaultApplicationPopUpButton, NSButton, NSLayoutConstraint, NSMenuItem, NSPopUpButton, NSSlider, NSString, NSTextField, NSView, SOAdjustableLayoutView, TKTonePickerViewController;

@interface Prefs_General : NSPreferencesModule <TKTonePickerViewControllerDelegate>
{
    NSPopUpButton *_placeholderSoundsPopUpButton;
    NSLayoutConstraint *_universalSettingsViewBottomConstraint;
    BOOL _isInLegacyMode;
    NSView *_allSettingsView;
    NSView *_universalSettingsView;
    NSView *_legacySettingsView;
    DefaultApplicationPopUpButton *_defaultIMClientPopup;
    NSButton *_saveConversationsOnClosingButton;
    NSButton *_notifyAboutKnockKnock;
    NSButton *_addressMeInGroupChatButton;
    NSButton *_playSoundsCheckbox;
    SOAdjustableLayoutView *_soundPopupContainerView;
    TKTonePickerViewController *_tonePickerController;
    NSPopUpButton *_downloadPathPopUpButton;
    NSPopUpButton *_appleScriptPopUp;
    NSPopUpButton *_customFontMenu;
    NSSlider *_textSizeSlider;
    NSTextField *_textSmallA;
    NSTextField *_textBigA;
    NSMenuItem *_customFontMenuItem;
    NSMenuItem *_fontLastCustomMenuItem;
    NSMenuItem *_fontLastCustomMenuItemSeparator;
    NSButton *_useSingleBuddyList;
    NSButton *_animateBuddyIcons;
    NSButton *_showStatusMenuCheckbox;
    NSButton *_offlineOnQuitCheckbox;
    NSButton *_autoReplyButton;
    NSButton *_autoAwayCheckbox;
    NSPopUpButton *_welcomeBackModePopUp;
    NSPopUpButton *_fastUserSwitchPopUp;
    NSTextField *_textSizeLabel;
    NSTextField *_buddyListLabel;
}

+ (id)defaultFont;
@property(nonatomic) BOOL isInLegacyMode; // @synthesize isInLegacyMode=_isInLegacyMode;
@property(retain) NSTextField *buddyListLabel; // @synthesize buddyListLabel=_buddyListLabel;
@property(retain) NSTextField *textSizeLabel; // @synthesize textSizeLabel=_textSizeLabel;
@property(retain) NSPopUpButton *fastUserSwitchPopUp; // @synthesize fastUserSwitchPopUp=_fastUserSwitchPopUp;
@property(retain) NSPopUpButton *welcomeBackModePopUp; // @synthesize welcomeBackModePopUp=_welcomeBackModePopUp;
@property(retain) NSButton *autoAwayCheckbox; // @synthesize autoAwayCheckbox=_autoAwayCheckbox;
@property(retain) NSButton *autoReplyButton; // @synthesize autoReplyButton=_autoReplyButton;
@property(retain) NSButton *offlineOnQuitCheckbox; // @synthesize offlineOnQuitCheckbox=_offlineOnQuitCheckbox;
@property(retain) NSButton *showStatusMenuCheckbox; // @synthesize showStatusMenuCheckbox=_showStatusMenuCheckbox;
@property(retain) NSButton *animateBuddyIcons; // @synthesize animateBuddyIcons=_animateBuddyIcons;
@property(retain) NSButton *useSingleBuddyList; // @synthesize useSingleBuddyList=_useSingleBuddyList;
@property(retain) NSMenuItem *fontLastCustomMenuItemSeparator; // @synthesize fontLastCustomMenuItemSeparator=_fontLastCustomMenuItemSeparator;
@property(retain) NSMenuItem *fontLastCustomMenuItem; // @synthesize fontLastCustomMenuItem=_fontLastCustomMenuItem;
@property(retain) NSMenuItem *customFontMenuItem; // @synthesize customFontMenuItem=_customFontMenuItem;
@property(retain) NSTextField *textBigA; // @synthesize textBigA=_textBigA;
@property(retain) NSTextField *textSmallA; // @synthesize textSmallA=_textSmallA;
@property(retain) NSSlider *textSizeSlider; // @synthesize textSizeSlider=_textSizeSlider;
@property(retain) NSPopUpButton *customFontMenu; // @synthesize customFontMenu=_customFontMenu;
@property(retain) NSPopUpButton *appleScriptPopUp; // @synthesize appleScriptPopUp=_appleScriptPopUp;
@property(retain) NSPopUpButton *downloadPathPopUpButton; // @synthesize downloadPathPopUpButton=_downloadPathPopUpButton;
@property(retain) TKTonePickerViewController *tonePickerController; // @synthesize tonePickerController=_tonePickerController;
@property(retain) SOAdjustableLayoutView *soundPopupContainerView; // @synthesize soundPopupContainerView=_soundPopupContainerView;
@property(retain) NSButton *playSoundsCheckbox; // @synthesize playSoundsCheckbox=_playSoundsCheckbox;
@property(retain) NSButton *addressMeInGroupChatButton; // @synthesize addressMeInGroupChatButton=_addressMeInGroupChatButton;
@property(retain) NSButton *notifyAboutKnockKnock; // @synthesize notifyAboutKnockKnock=_notifyAboutKnockKnock;
@property(retain) NSButton *saveConversationsOnClosingButton; // @synthesize saveConversationsOnClosingButton=_saveConversationsOnClosingButton;
@property(retain) DefaultApplicationPopUpButton *defaultIMClientPopup; // @synthesize defaultIMClientPopup=_defaultIMClientPopup;
@property(retain) NSView *legacySettingsView; // @synthesize legacySettingsView=_legacySettingsView;
@property(retain) NSView *universalSettingsView; // @synthesize universalSettingsView=_universalSettingsView;
@property(retain) NSView *allSettingsView; // @synthesize allSettingsView=_allSettingsView;
- (void).cxx_destruct;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (id)_scriptURL;
- (void)_addScriptsToPopUpFromPath:(id)arg1;
- (void)_fillAppleScriptPopup;
- (void)revealAppleScriptDirectory:(id)arg1;
- (void)_showTextSlider:(BOOL)arg1;
- (void)_updateFontPopUpButton;
- (void)changeFont:(id)arg1;
- (void)_setCustomFont:(id)arg1;
- (void)chooseAFont:(id)arg1;
- (void)fontChanged:(id)arg1;
- (void)changeTextSize:(id)arg1;
- (void)setTextSize:(long long)arg1;
- (void)appleScriptSelected:(id)arg1;
- (void)playSoundsToggled:(id)arg1;
- (void)changeAutoReply:(id)arg1;
- (void)changeSaveConversations:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)_updateAccountState;
- (void)_accountActivationChanged:(id)arg1;
- (void)_setupDownloadPathMenu;
- (void)changeDownloadPath:(id)arg1;
- (void)changeFastUserSwitchPopup:(id)arg1;
- (void)changeAutoAway:(id)arg1;
- (void)addressMeInGroupChatChanged:(id)arg1;
- (void)changeNotifyAboutKnockKnock:(id)arg1;
- (void)changeWelcomeBackMode:(id)arg1;
- (void)changeUseSingleBuddyList:(id)arg1;
- (void)changeShowFezStatus:(id)arg1;
- (void)changeOfflineOnQuit:(id)arg1;
- (void)changeAnimateBuddyIcons:(id)arg1;
- (void)saveChanges;
- (void)initializeFromDefaults;
- (void)_updateTextSizeControl:(id)arg1;
- (void)_updateStatusMenuControl:(id)arg1;
- (id)viewForPreferenceNamed:(id)arg1;
- (BOOL)isResizable;
- (void)willBeDisplayed;
- (void)dealloc;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
