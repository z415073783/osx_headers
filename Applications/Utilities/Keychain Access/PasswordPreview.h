//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class KeychainItemBasic;

@interface PasswordPreview : NSView
{
    id _view;
    id _account;
    id _icon;
    id _kind;
    id _modified;
    id _name;
    id _where;
    KeychainItemBasic *_item;
}

- (BOOL)isFlipped;
- (void)populateAttributes;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end
