//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

#import "VKPuckAnimatorTarget.h"

@class CALayer, CLLocation, NSString, VKAnnotationMarker;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget>
{
    VKAnnotationMarker *_marker;
    long long _zoomDirection;
    CALayer *_pulseLayer;
    CALayer *_accuracyLayer;
    BOOL _allowsPulse;
    BOOL _shouldPulse;
    BOOL _allowsHeadingIndicator;
    BOOL _shouldDisplayHeading;
    double _headingAccuracy;
    CALayer *_headingLayer;
    BOOL _allowsAccuracyRing;
    BOOL _stale;
    BOOL _effectsEnabled;
    double _presentationCourse;
    double _locationAccuracy;
    CLLocation *_lastLocation;
}

+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (double)accuracyDiameter:(double)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double locationAccuracy; // @synthesize locationAccuracy=_locationAccuracy;
@property(nonatomic) double presentationCourse; // @synthesize presentationCourse=_presentationCourse;
@property(nonatomic, getter=isEffectsEnabled) BOOL effectsEnabled; // @synthesize effectsEnabled=_effectsEnabled;
@property(readonly, nonatomic, getter=isStale) BOOL stale; // @synthesize stale=_stale;
@property(nonatomic) BOOL allowsAccuracyRing; // @synthesize allowsAccuracyRing=_allowsAccuracyRing;
@property(nonatomic) double headingAccuracy; // @synthesize headingAccuracy=_headingAccuracy;
@property(nonatomic) BOOL shouldDisplayHeading; // @synthesize shouldDisplayHeading=_shouldDisplayHeading;
@property(nonatomic) BOOL allowsHeadingIndicator; // @synthesize allowsHeadingIndicator=_allowsHeadingIndicator;
@property(nonatomic) BOOL allowsPulse; // @synthesize allowsPulse=_allowsPulse;
@property(nonatomic) long long zoomDirection; // @synthesize zoomDirection=_zoomDirection;
- (void).cxx_destruct;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (void)setPresentationCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)_tracking;
- (void)_setTracking:(BOOL)arg1;
- (void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2;
- (void)_setPresentationCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_setAnimatingToCoordinate:(BOOL)arg1;
- (id)_vkMarker;
- (void)_updateLayers;
- (void)locationManagerFailedToUpdateLocation;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (void)_resetLayerToMatchAccuracyRing;
- (id)_layerToMatchAccuracyRing;
- (id)_accuracyAnimation:(double)arg1;
@property(nonatomic) float opacity;
- (void)_updateHeadingLayer;
- (struct NSImage *)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint *)arg2;
- (id)_baseLayer;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGRect)_mapkit_visibleRect;
- (void)viewDidMoveToWindow;
- (void)_updatePulse;
- (void)_pausePulse;
- (void)_resumePulse;
- (id)_pulseAnimation;
- (id)_animationToSynchronizePulse:(id *)arg1;
- (id)_pulseLayer;
- (id)_pulseTintColor;
- (void)_setMapPitchRadians:(double)arg1;
- (void)_updateFromMap;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
