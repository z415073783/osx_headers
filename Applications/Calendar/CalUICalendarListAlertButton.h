//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUIDelayedHoverButton.h"

@class NSTrackingArea;

@interface CalUICalendarListAlertButton : CalUIDelayedHoverButton
{
    NSTrackingArea *_trackingArea;
    BOOL _isHover;
    BOOL _isDown;
    int _alertButtonState;
}

+ (void)initialize;
@property int alertButtonState; // @synthesize alertButtonState=_alertButtonState;
@property BOOL isDown; // @synthesize isDown=_isDown;
@property BOOL isHover; // @synthesize isHover=_isHover;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)updateTrackingAreas;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setButtonState:(int)arg1;
- (double)minimumWidth;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
