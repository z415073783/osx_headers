//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class CHUDViewController;

@interface CHUDOverlayWindowController : NSWindowController
{
    CHUDViewController *viewController;
    double timeoutValue;
    struct _NSRect screenRect;
}

- (void)setTimeoutValue:(double)arg1;
- (double)timeoutValue;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (id).cxx_construct;
- (void)willReleaseController;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1 timeoutValue:(int)arg2 displayRect:(struct CGRect)arg3;

@end
