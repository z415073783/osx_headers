//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ICDevice, IKDeviceBrowserView, NSError;

@protocol IKDeviceBrowserViewDelegate
- (void)deviceBrowserView:(IKDeviceBrowserView *)arg1 selectionDidChange:(ICDevice *)arg2;

@optional
- (void)deviceBrowserView:(IKDeviceBrowserView *)arg1 didEncounterError:(NSError *)arg2;
@end
