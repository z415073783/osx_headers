//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@interface CalUICalendarListBadgeCountField : NSTextField
{
    long long _badgeCount;
    BOOL _isHighlighted;
}

- (CDStruct_d2b197d1)alignmentRectInsets;
- (id)badgeBackgroundColor;
- (id)badgeTextColor;
- (id)badgeTextAttributes;
- (id)badgeCountString;
- (void)updateCountString;
- (struct CGSize)intrinsicContentSize;
@property BOOL highlighted;
@property long long count;
- (id)init;

@end
