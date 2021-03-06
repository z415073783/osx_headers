//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class NSTextField;

@interface VAlignTextView : NSTextView
{
    struct CGRect mPreservedBounds;
    struct CGRect _boundingBox;
    int _valign;
    struct CGPoint _lastOrigin;
    struct CGPoint _lastSuperOrigin;
    BOOL _cacheDirty;
    struct CGRect _usedRect;
    double _lastDelta;
    BOOL _useRealMetrics;
    BOOL _honorFlipped;
    double _nudgeY;
    NSTextField *mLocationParseField;
}

@property double nudgeY; // @synthesize nudgeY=_nudgeY;
@property BOOL honorFlipped; // @synthesize honorFlipped=_honorFlipped;
@property BOOL useRealMetrics; // @synthesize useRealMetrics=_useRealMetrics;
- (struct CGPoint)textContainerOrigin;
- (void)didChangeText;
- (double)lastDelta;
- (struct CGRect)realUsedRect;
- (struct CGRect)roughUsedRect;
@property int vAlignment; // @synthesize vAlignment=_valign;
- (struct CGRect)bounds;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setFrameSize:(struct CGSize)arg1 forceScroll:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

