//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUICatalog, CUIStyleEffectConfiguration, NSGraphicsContext;

@interface NSLineFragmentRenderingContext : NSObject
{
    void *_runs;
    long long _numRuns;
    unsigned short *_glyphs;
    struct CGSize *_advancements;
    double _leftSideDelta;
    double _lineWidth;
    double _leftControlWidth;
    double _rightControlWidth;
    double _elasticWidth;
    struct CGRect _imageBounds;
    struct {
        unsigned int _isRTL:1;
        unsigned int _vAdvance:1;
        unsigned int _flipped:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _reserved:28;
    } _flags;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
    NSGraphicsContext *_graphicsContext;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain) NSGraphicsContext *graphicsContext; // @synthesize graphicsContext=_graphicsContext;
@property(retain) CUIStyleEffectConfiguration *cuiStyleEffects; // @synthesize cuiStyleEffects=_styleEffects;
@property(retain) CUICatalog *cuiCatalog; // @synthesize cuiCatalog=_catalog;
- (struct CGRect)imageBounds;
- (BOOL)isRTL;
- (double)elasticWidth;
- (double)lineFragmentWidth;
- (void)getMaximumAscender:(double *)arg1 minimumDescender:(double *)arg2;
- (struct CGSize)sizeWithBehavior:(long long)arg1 usesFontLeading:(BOOL)arg2 baselineDelta:(double *)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2;
@property(getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;
- (void)finalize;
- (void)dealloc;
- (id)initWithRuns:(struct __CFArray *)arg1 glyphOrigin:(double)arg2 lineFragmentWidth:(double)arg3 elasticWidth:(double)arg4 usesScreenFonts:(BOOL)arg5 isRTL:(BOOL)arg6;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

@end
