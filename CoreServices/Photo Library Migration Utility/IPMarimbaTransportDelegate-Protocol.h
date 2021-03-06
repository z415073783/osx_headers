//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSEvent;

@protocol IPMarimbaTransportDelegate
- (void)fadeOut;
- (void)fadeIn;
- (void)enteringSettingsHUD;
- (BOOL)usingSoftwareMirroring;
- (BOOL)usingIntegratedGraphics;
- (void)resetScrubberLevel;
- (void)setMouseOverTransport:(BOOL)arg1;
- (void)keyDown:(NSEvent *)arg1;
- (void)mouseMoved:(NSEvent *)arg1;
- (void)gotoBeginning;
- (void)play;
- (void)pause;
- (void)previous:(id)arg1;
- (void)next:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)close:(id)arg1;
@end

