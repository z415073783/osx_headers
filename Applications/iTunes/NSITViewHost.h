//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTrackingArea;

@interface NSITViewHost : NSView
{
    struct ITWindow *_itWindow;
    shared_ptr_8092bbf7 _root;
    struct weak_ptr<ITView> _mouseDraggingView;
    struct shared_ptr<ITViewAdapterShim> _shim;
    NSTrackingArea *_trackingArea;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (void)detachTrackingAreas;
- (void)cursorUpdate:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct NSITTrackingArea *)trackingAreaFromTrackingEvent:(id)arg1;
- (shared_ptr_8092bbf7)targetViewFromTrackingEvent:(id)arg1;
- (struct NSITTrackingArea *)trackingAreaFromUserDict:(id)arg1;
- (shared_ptr_8092bbf7)targetViewFromUserDict:(id)arg1;
- (BOOL)_updateCursorForITMouseEvent:(const struct ITMouseEvent *)arg1 andOriginatingView:(shared_ptr_8092bbf7)arg2;
- (BOOL)_updateCursorForITMouseEvent:(const struct ITMouseEvent *)arg1 getAssigningView:(shared_ptr_8092bbf7 *)arg2;
- (void)flagsChanged:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (BOOL)isFlipped;
- (void)disposeTrackingArea;
- (void)createTrackingArea:(id)arg1;
- (BOOL)dispatchScrollWheel:(id)arg1;
- (BOOL)dispatchMouseUp:(id)arg1;
- (void)dispatchMouseDragged:(id)arg1;
- (BOOL)dispatchMouseDown:(id)arg1;
- (BOOL)commonMouseUp:(id)arg1;
- (BOOL)commonMouseDown:(id)arg1;
- (shared_ptr_ec8698d7)viewAdapter;
- (shared_ptr_8092bbf7)root;
- (void)setRoot:(shared_ptr_8092bbf7)arg1;
- (void)setITWindow:(struct ITWindow *)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
