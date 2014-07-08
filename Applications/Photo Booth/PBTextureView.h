//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSVisualEffectView.h"

@class CALayer;

@interface PBTextureView : NSVisualEffectView
{
    BOOL _regenerateFullscreenTexture;
    BOOL _isFullscreen;
    BOOL _fullscreenTextureWarm;
    CALayer *_leftSpotlightLayer;
    CALayer *_rightSpotlightLayer;
}

@property(nonatomic) BOOL isFullscreen; // @synthesize isFullscreen=_isFullscreen;
- (void).cxx_destruct;
- (void)drawFullscreenTexture:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;
- (void)invalidateSpotlightLayers;
- (void)showSpotlights:(BOOL)arg1 animate:(BOOL)arg2;
- (void)drawSpotlightInRect:(struct CGRect)arg1;
- (id)leftSideImageForBounds:(struct CGRect)arg1;
- (void)forceRegenerateFullscreenTexture;
- (BOOL)isfullscreenTextureWarm;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (void)setFullscreen:(BOOL)arg1;

@end
