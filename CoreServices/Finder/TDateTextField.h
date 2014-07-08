//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTextField.h"

@class NSDate;

@interface TDateTextField : TTextField
{
    _Bool _suspendReformat;
    _Bool _autoFormatToFit;
    _Bool _useRelativeDates;
    struct TNSRef<NSDate *> _date;
    struct vector<TFormattedDateEntry, std::__1::allocator<TFormattedDateEntry>> _dateFormatTable;
}

+ (Class)cellClass;
@property(nonatomic) _Bool useRelativeDates; // @synthesize useRelativeDates=_useRelativeDates;
@property(nonatomic) _Bool autoFormatToFit; // @synthesize autoFormatToFit=_autoFormatToFit;
@property(nonatomic) _Bool suspendReformat; // @synthesize suspendReformat=_suspendReformat;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)calcIdealSizeImpl;
- (void)formatToFit;
- (void)reformat;
- (double)smallestWidthForCurrentFormat;
- (double)availableTextWidth;
- (void)setFont:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setMinSize:(struct CGSize)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
- (void)setControlSize:(unsigned long long)arg1;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
- (void)applySettingsFrom:(id)arg1;
- (void)dealloc;
- (void)awakeCommon;
- (void)initCommon;

@end
