//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CABasicAnimation, CALayer, CIFilter, NSArray;

@interface BKPageCurl : NSObject
{
    BOOL _nightMode;
    BOOL _finished;
    BOOL _secondHalf;
    BOOL _ignoreManualUpdates;
    BOOL _cancelledManualCurl;
    int _type;
    int _state;
    int _spineLocation;
    int _didEndCount;
    double _delay;
    double _duration;
    double _stabilization;
    NSArray *_curlPages;
    NSArray *_existingPages;
    CALayer *_backPage;
    CALayer *_container;
    struct CGColor *_pageColor;
    struct CGColor *_backColor;
    id <BKPageCurlDelegate> _delegate;
    CIFilter *_curlFilter;
    double _k;
    double _diagonalLengthPixels;
    double _diagonalAngle;
    double _projectedDiagonal;
    double _initialCurlRadius;
    CABasicAnimation *_curlAnimationTime;
    CABasicAnimation *_uncurlAnimationTime;
    CABasicAnimation *_curlAnimationRadius;
    CABasicAnimation *_uncurlAnimationRadius;
    CABasicAnimation *_curlAnimationAngle;
    CABasicAnimation *_uncurlAnimationAngle;
    CABasicAnimation *_curlAnimationShadowColor;
    CABasicAnimation *_uncurlAnimationShadowColor;
    CABasicAnimation *_curlAnimationBackColor;
    struct CGPoint _manualStartPoint;
    struct CGPoint _lastPoint;
}

@property(retain, nonatomic) CABasicAnimation *curlAnimationBackColor; // @synthesize curlAnimationBackColor=_curlAnimationBackColor;
@property(retain, nonatomic) CABasicAnimation *uncurlAnimationShadowColor; // @synthesize uncurlAnimationShadowColor=_uncurlAnimationShadowColor;
@property(retain, nonatomic) CABasicAnimation *curlAnimationShadowColor; // @synthesize curlAnimationShadowColor=_curlAnimationShadowColor;
@property(retain, nonatomic) CABasicAnimation *uncurlAnimationAngle; // @synthesize uncurlAnimationAngle=_uncurlAnimationAngle;
@property(retain, nonatomic) CABasicAnimation *curlAnimationAngle; // @synthesize curlAnimationAngle=_curlAnimationAngle;
@property(retain, nonatomic) CABasicAnimation *uncurlAnimationRadius; // @synthesize uncurlAnimationRadius=_uncurlAnimationRadius;
@property(retain, nonatomic) CABasicAnimation *curlAnimationRadius; // @synthesize curlAnimationRadius=_curlAnimationRadius;
@property(retain, nonatomic) CABasicAnimation *uncurlAnimationTime; // @synthesize uncurlAnimationTime=_uncurlAnimationTime;
@property(retain, nonatomic) CABasicAnimation *curlAnimationTime; // @synthesize curlAnimationTime=_curlAnimationTime;
@property(nonatomic) BOOL cancelledManualCurl; // @synthesize cancelledManualCurl=_cancelledManualCurl;
@property(nonatomic) BOOL ignoreManualUpdates; // @synthesize ignoreManualUpdates=_ignoreManualUpdates;
@property(nonatomic) BOOL secondHalf; // @synthesize secondHalf=_secondHalf;
@property(nonatomic) int didEndCount; // @synthesize didEndCount=_didEndCount;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) struct CGPoint manualStartPoint; // @synthesize manualStartPoint=_manualStartPoint;
@property(nonatomic) double initialCurlRadius; // @synthesize initialCurlRadius=_initialCurlRadius;
@property(nonatomic) double projectedDiagonal; // @synthesize projectedDiagonal=_projectedDiagonal;
@property(nonatomic) double diagonalAngle; // @synthesize diagonalAngle=_diagonalAngle;
@property(nonatomic) double diagonalLengthPixels; // @synthesize diagonalLengthPixels=_diagonalLengthPixels;
@property(nonatomic) double k; // @synthesize k=_k;
@property(retain, nonatomic) CIFilter *curlFilter; // @synthesize curlFilter=_curlFilter;
@property(nonatomic) int spineLocation; // @synthesize spineLocation=_spineLocation;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) id <BKPageCurlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) struct CGColor *backColor; // @synthesize backColor=_backColor;
@property(retain, nonatomic) struct CGColor *pageColor; // @synthesize pageColor=_pageColor;
@property(retain, nonatomic) CALayer *container; // @synthesize container=_container;
@property(retain, nonatomic) CALayer *backPage; // @synthesize backPage=_backPage;
@property(retain, nonatomic) NSArray *existingPages; // @synthesize existingPages=_existingPages;
@property(retain, nonatomic) NSArray *curlPages; // @synthesize curlPages=_curlPages;
@property(nonatomic) double stabilization; // @synthesize stabilization=_stabilization;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) BOOL nightMode; // @synthesize nightMode=_nightMode;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)cleanup;
- (void)fullCleanup;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)killCurl;
- (void)_finishManualCurl;
- (void)cancelManualCurl;
- (void)finishManualCurl;
- (void)updateManualCurlToLocation:(struct CGPoint)arg1;
- (void)beginManualCurlAtLocation:(struct CGPoint)arg1;
- (void)_beginAnimation;
- (void)startAutoCurl;
- (struct CGColor *)_backColorAtPosition:(double)arg1;
- (void)_setupViews;
- (void)ensureCurlFilterOnLayer:(id)arg1;
- (id)init;

@end

