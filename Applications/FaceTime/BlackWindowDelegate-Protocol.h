//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowDelegate.h"

@class BlackWindow, SidePanel;

@protocol BlackWindowDelegate <NSWindowDelegate>

@optional
- (struct CGRect)window:(BlackWindow *)arg1 willSetFrame:(struct CGRect)arg2;
- (void)window:(BlackWindow *)arg1 sidePanel:(SidePanel *)arg2 animationStateDidChange:(long long)arg3;
- (void)window:(BlackWindow *)arg1 isHidingViewsVisibleDidChange:(BOOL)arg2;
- (void)window:(BlackWindow *)arg1 isTitlebarVisibleDidChange:(BOOL)arg2;
@end

