//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TView.h"

@class NSDictionary, NSString, TLayoutBinder;

@interface TLayoutBinderTestBox : TView
{
    TLayoutBinder *_layoutBinder;
    NSString *_title;
    NSDictionary *_titleAttributes;
}

@property(retain) NSString *title; // @synthesize title=_title;
@property(readonly, retain) TLayoutBinder *layoutBinder; // @synthesize layoutBinder=_layoutBinder;
- (void)drawRect:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;
- (void)initCommon;

@end
