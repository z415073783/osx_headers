//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@interface ABEncodingPopUpButton : NSPopUpButton
{
    unsigned long long defaultEncoding;
    BOOL hasDefaultEntry;
}

- (void)encodingsListChanged:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)setEncoding:(unsigned long long)arg1 defaultEntry:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)sharedInit;

@end

