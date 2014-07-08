//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

@interface LocationMenuInfoCell : NSCell
{
    BOOL mIncludeIcon;
    BOOL mLightBackground;
    BOOL mShowsEmptyTitle;
    BOOL mIsTrackingButton;
    BOOL mButtonClicked;
    int mButtonType;
}

+ (void)_drawSubtitleText:(id)arg1 inRect:(struct CGRect)arg2 textColor:(id)arg3;
+ (void)_remoteResultText:(id)arg1 inRect:(struct CGRect)arg2 textColor:(id)arg3;
+ (void)_drawTitleText:(id)arg1 inRect:(struct CGRect)arg2 textColor:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)trackMouseForButtonEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)showsEmptyTitle;
- (void)setShowsEmptyTitle:(BOOL)arg1;
- (void)includeIcon:(BOOL)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_buttonRectForCellFrame:(struct CGRect)arg1;
- (struct CGRect)_titleTextRectForCellFrame:(struct CGRect)arg1;
- (void)setButtonType:(int)arg1;
- (void)useLightBackground:(BOOL)arg1;
- (id)init;

@end
