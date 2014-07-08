//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface ASKDisplayDialog : NSObject
{
    id alternateButton;
    id answerTextField;
    id defaultButton;
    id iconImageView;
    id otherButton;
    id titleTextField;
    id _modalDelegate;
    SEL _endSelector;
    void *_contextInfo;
    id _buttonReturned;
    BOOL _hasTitle;
    BOOL _hasAnswer;
    BOOL _hasIcon;
    BOOL _hasGivingUp;
    BOOL _gaveUp;
    long long _giveUpAfter;
    NSTimer *_timer;
}

+ (id)displayDialog;
- (void)buttonPressed:(id)arg1;
- (BOOL)gaveUp;
- (id)textReturned;
- (id)buttonReturned;
- (id)panel;
- (void)setContextInfo:(void *)arg1;
- (void *)contextInfo;
- (void)setEndSelector:(SEL)arg1;
- (SEL)endSelector;
- (void)setModalDelegate:(id)arg1;
- (id)modalDelegate;
- (void)setupForText:(id)arg1 buttons:(id)arg2 defaultButton:(id)arg3 defaultAnswer:(id)arg4 givingUpAfter:(id)arg5 withIcon:(id)arg6;
- (void)setupButton:(id)arg1 withTitle:(id)arg2 defaultTitle:(id)arg3 cancelString:(id)arg4;
- (void)giveUpTimer:(id)arg1;
- (id)runModal;
- (id)endSheet;
- (void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
