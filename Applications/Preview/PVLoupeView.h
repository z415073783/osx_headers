//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSValue, NSView<PVLoupeMagnifiableView>;

@interface PVLoupeView : NSView
{
    NSView<PVLoupeMagnifiableView> *_parentView;
    struct CGPoint _centerOfLoupe;
    struct CGSize _sizeOfAreaToMagnify;
    double _scaleFactor;
    BOOL _sizeWasClamped;
}

@property BOOL sizeWasClamped; // @synthesize sizeWasClamped=_sizeWasClamped;
@property(nonatomic) struct CGSize magnifiedSize; // @synthesize magnifiedSize=_sizeOfAreaToMagnify;
@property(nonatomic) struct CGPoint magnifiedCenter; // @synthesize magnifiedCenter=_centerOfLoupe;
@property(nonatomic) double magnificationLevel; // @synthesize magnificationLevel=_scaleFactor;
- (id)animationForKey:(id)arg1;
@property NSValue *magnifiedSizeValue;
- (void)updateLoupeAfterChange;
- (void)fadeToInvisible;
- (void)makeInvisible;
- (void)makeVisible;
- (void)appResigningActive:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

