//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DUSingleFunctionWindowController.h"

#import "DUListWindowProtocol.h"

@class DUBaseDiskListViewController, DUDisk, NSWindow;

@interface DUSimpleInterfaceController : DUSingleFunctionWindowController <DUListWindowProtocol>
{
    NSWindow *simpleInterfaceWindow;
    id simpleInterfaceTabView;
    id simpleInterfaceIntroTab;
    id simpleInterfaceGatheringTab;
    id simpleInterfaceDiskTab;
    id simpleInterfaceOptionTab;
    id simpleInterfaceSummaryTab;
    id simpleInterfaceHelpButton;
    id simpleInterfaceReturnButton;
    id simpleInterfaceNextButton;
    id simpleInterfacePreviousButton;
    id simpleInterfaceStepText;
    id step1TabTitleText;
    id step1TabDetailedText;
    id step1TabEraseButton;
    id step1TabFixButton;
    id step2TabTitleText;
    id step2TabDetailedText;
    id step2TabDiskOutlineView;
    id step4TabProgressIndicator;
    id step4TabProgressText;
    id step5TabSummaryTitleText;
    id step5TabSummaryDetailedText;
    id step5TabStartOverButton;
    id step5TabQuitButton;
    DUBaseDiskListViewController *diskListViewController;
    BOOL haveAllDisks;
    long long actionType;
    long long actionResult;
    DUDisk *workingDisk;
}

- (BOOL)selectDiskInDiskListByDMDisk:(id)arg1;
- (void)activateGlobalProgressText:(BOOL)arg1;
- (void)activateGlobalProgressBar:(BOOL)arg1;
- (void)stopGlobalProgressBarAnimation:(id)arg1;
- (void)startGlobalProgressBarAnimation:(id)arg1;
- (void)setupDisksTab;
- (void)advanceToDisksTab;
- (void)setButtonsForSummaryTab:(id)arg1;
- (void)setButtonsForOptionTab:(id)arg1;
- (void)setButtonsForDiskTab:(id)arg1;
- (void)setButtonsForGatheringTab:(id)arg1;
- (void)setButtonsForIntroTab:(id)arg1;
- (void)stuffChanged:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)simpleInterfacePreviousButtonAction:(id)arg1;
- (void)simpleInterfaceNextButtonAction:(id)arg1;
- (void)simpleInterfaceReturnButtonAction:(id)arg1;
- (void)simpleInterfaceHelpButtonAction:(id)arg1;
- (void)step5QuitButtonAction:(id)arg1;
- (void)step5AgainButtonAction:(id)arg1;
- (void)step1RepairButtonAction:(id)arg1;
- (void)step1EraseButtonAction:(id)arg1;
- (void)notifyWindowOfCompletion:(id)arg1;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end
