//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUIListTableCellView.h"

@class NSTextField;

@interface CalUIListDateCell : CalUIListTableCellView
{
    NSTextField *_weekdayText;
    NSTextField *_monthDayText;
    BOOL _isToday;
}

+ (Class)expectedObjectClass;
@property BOOL isToday; // @synthesize isToday=_isToday;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_objectValueDidChange;
- (void)awakeFromNib;

@end
