//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSAttributedString, NSString;

@interface MKUILabel : NSTextField
{
}

+ (id)keyPathsForValuesAffectingAlignment;
+ (id)keyPathsForValuesAffectingAttributedText;
+ (id)keyPathsForValuesAffectingText;
@property(nonatomic) unsigned long long textAlignment;
- (double)baselineOffsetFromBottom;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

@end

