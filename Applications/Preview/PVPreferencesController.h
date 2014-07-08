//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDelegate.h"
#import "NSToolbarDelegate.h"

@class NSButton, NSColorWell, NSMatrix, NSPopUpButton, NSString, NSTextField, NSView;

@interface PVPreferencesController : NSWindowController <NSToolbarDelegate, NSTableViewDelegate>
{
    NSView *_generalPane;
    NSView *_imagesPane;
    NSView *_pdfPane;
    NSColorWell *_generalWindowbackgroundColor;
    NSTextField *_pdfAnnotationUserName;
    NSButton *_pdfAnnotationUseUserName;
    NSMatrix *_imagesRespectDPIMatrix;
    NSMatrix *_imagesWindowMatrix;
    NSPopUpButton *_pdfDefaultPageViewModePopup;
    NSButton *_PDFAntiAliased;
    NSButton *_PDFOpenWithSidebar;
    NSButton *_PDFLogicalPages;
    NSButton *_PDFRememberPage;
    NSMatrix *_PDFRespectDPIMatrix;
    NSView *_currentView;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (void)replaceSubview:(id)arg1;
- (void)pdfAnnotationUseUserNameChanged:(id)arg1;
- (void)pdfAnnotationUserNameChanged:(id)arg1;
- (void)pdfOpenWithSidebarChanged:(id)arg1;
- (void)pdfRespectScreenDPIForScaleChanged:(id)arg1;
- (void)pdfRememberPageChanged:(id)arg1;
- (void)pdfLogicalPagesChanged:(id)arg1;
- (void)pdfAntiAliasOptionChanged:(id)arg1;
- (void)pdfDefaultPageViewModeChanged:(id)arg1;
- (void)imagesWindowOpenChanged:(id)arg1;
- (void)imagesRespectImageDPIChanged:(id)arg1;
- (void)generalWindowBackgroundColorChanged:(id)arg1;
- (void)selectPane:(long long)arg1;
- (void)openToPDFPane:(id)arg1;
- (void)openToImagesPane:(id)arg1;
- (void)openToGeneralPane:(id)arg1;
- (void)selectPDFPane:(id)arg1;
- (void)selectImagesPane:(id)arg1;
- (void)selectGeneralPane:(id)arg1;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)prefsToPanel;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;
- (void)initializeDefaults;
- (void)openPreferencePanel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
