//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FPIMWidgetFactory : NSObject
{
}

+ (id)webViewForDynamicMessaging;
+ (id)radioButtonsWithTitles:(id)arg1;
+ (id)textAsButtonWithText:(id)arg1 alternateColor:(id)arg2 bold:(BOOL)arg3;
+ (id)checkBoxWithTitle:(id)arg1 boldText:(BOOL)arg2;
+ (id)closeAppButtonWithTitle:(id)arg1 width:(float)arg2 image:(id)arg3;
+ (id)actionButtonWithTitle:(id)arg1;
+ (id)actionButtonWithTitle:(id)arg1 width:(float)arg2;
+ (id)functionButtonWithTitle:(id)arg1;
+ (id)warningIcon;
+ (id)generatePanelSplashWithImage:(id)arg1 grayMappingLevel:(float)arg2 useAutoUpdateBrandingAndSizing:(BOOL)arg3;
+ (id)autoUpdatePanelSplash;
+ (id)uninstallPanelSplash;
+ (id)installPanelSplash;
+ (void)_addBrandingToSplashImageViewForAutoUpdate:(id)arg1;
+ (void)_addBrandingToSplashImageView:(id)arg1;
+ (id)panelBackdropWithBackdropImageWidth:(float)arg1 backdropImageHeight:(float)arg2 bottomBarHeight:(float)arg3;
+ (id)panelBackdropWithHeight:(float)arg1;
+ (id)panelBackdrop;
+ (id)_imageViewForScaledImageNamed:(id)arg1 inWidth:(float)arg2 inHeight:(float)arg3;
+ (id)_imageViewForImageNamed:(id)arg1;
+ (id)_imageViewForImage:(id)arg1;
+ (id)_buttonImageWithImage:(id)arg1 backingColor:(id)arg2 baseButtonImage:(id)arg3;
+ (id)_stylizedAttributesBold:(BOOL)arg1 underlined:(BOOL)arg2;
+ (id)_stylizedAttributesBold:(BOOL)arg1 underlined:(BOOL)arg2 alignment:(unsigned int)arg3;
+ (id)_boldFontOfSize:(float)arg1;
+ (id)_fontOfSize:(float)arg1;

@end

