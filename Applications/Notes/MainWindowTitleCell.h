//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

@class NSString;

@interface MainWindowTitleCell : NSCell
{
    NSString *_status;
    struct CGRect _baseTitleFrame;
}

@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) struct CGRect baseTitleFrame; // @synthesize baseTitleFrame=_baseTitleFrame;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_attributedStatusString;
- (id)attributedStringValue;
- (void)setAttributedStringValue:(id)arg1;
- (id)_titleAttributes;
- (id)_inactiveTextColor;
- (id)_activeTextColor;

@end
