//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CALayer, NSColor, NSCursor, NSEvent, NSObject<PVMediaContainer>, NSObject<PVMediaElement>, NSUndoManager;

@protocol PVContentView
@property BOOL showsCheckerboardBackground;
@property(retain) NSColor *backgroundColor;
@property BOOL autoResizes;
@property(readonly) struct CGPoint zoomCenter;
@property double zoomFactor;
@property(readonly) double zoomToFitZoomFactor;
@property(readonly) BOOL canZoomToFit;
@property(readonly) BOOL canZoomToSelection;
@property(readonly) BOOL canZoomOut;
@property(readonly) BOOL canZoomIn;
@property(readonly) BOOL hasCroppableSelection;
@property(readonly) long long defaultToolMode;
@property long long toolMode;
- (BOOL)shouldAnimateToAndFromContactSheet;
- (CALayer *)layerFromCurrentViewStateInRect:(struct CGRect)arg1;
- (CALayer *)layerFromCurrentViewState;
- (struct CGRect)contentRect;
- (double)zoomToFitZoomFactorWithContentSize:(struct CGSize)arg1;
- (double)zoomFactorForUIZoomFactor:(double)arg1 withContentResolution:(double)arg2;
- (double)uiZoomFactorForZoomFactor:(double)arg1 withContentResolution:(double)arg2;
- (double)zoomFactorForUIZoomFactor:(double)arg1;
- (double)uiZoomFactorForZoomFactor:(double)arg1;
- (double)clampedZoomFactor:(double)arg1;
- (double)maxZoomFactor;
- (double)minZoomFactor;
- (void)setZoomFactor:(double)arg1 withCenter:(struct CGPoint)arg2 animate:(BOOL)arg3 stickyFit:(BOOL)arg4;
- (void)setZoomFactor:(double)arg1 animate:(BOOL)arg2 stickyFit:(BOOL)arg3;
- (void)zoomToSelection;
- (BOOL)supportsEyeDropperMode;
- (BOOL)supportsToolMode:(long long)arg1;
- (NSUndoManager *)undoManager;

@optional
@property BOOL inEyeDropperMode;
@property(readonly) double defaultAnnotationFontSize;
@property long long addingStampShape;
@property long long addingMarkupType;
- (void)commitTextAnnotationEditor;
- (void)setCursorForContentView:(NSCursor *)arg1;
- (void)updateCursorForContentView:(NSEvent *)arg1;
- (void)loadElement:(NSObject<PVMediaElement> *)arg1 ofContainer:(NSObject<PVMediaContainer> *)arg2;
- (void)prepareForFluidSwipe;
@end

