//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface BKPillContainerView : NSView
{
    SEL _action;
    id _target;
}

@property(retain) id target; // @synthesize target=_target;
@property SEL action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)activeButtonWithTitle:(id)arg1;
- (void)button:(id)arg1 didActivate:(BOOL)arg2;
- (id)allButtons;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
