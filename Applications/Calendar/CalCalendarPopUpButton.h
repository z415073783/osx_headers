//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@class EKEvent, NSString;

@interface CalCalendarPopUpButton : NSPopUpButton
{
    BOOL _includeLastSelectedOption;
    BOOL _includeNewCalendarOption;
    NSString *_mainControllerWindowUID;
    EKEvent *_mostRecentEvent;
    id _mostRecentTarget;
}

+ (Class)cellClass;
@property(retain) id mostRecentTarget; // @synthesize mostRecentTarget=_mostRecentTarget;
@property(retain) EKEvent *mostRecentEvent; // @synthesize mostRecentEvent=_mostRecentEvent;
@property(retain, nonatomic) NSString *mainControllerWindowUID; // @synthesize mainControllerWindowUID=_mainControllerWindowUID;
@property BOOL includeNewCalendarOption; // @synthesize includeNewCalendarOption=_includeNewCalendarOption;
@property BOOL includeLastSelectedOption; // @synthesize includeLastSelectedOption=_includeLastSelectedOption;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectCalendar:(id)arg1;
- (void)calendarListChanged:(id)arg1;
- (void)populatePopUp:(id)arg1 event:(id)arg2 target:(id)arg3;
- (void)awakeFromNib;

@end

