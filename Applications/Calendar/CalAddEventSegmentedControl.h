//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedControl.h"

@class CALMainController;

@interface CalAddEventSegmentedControl : NSSegmentedControl
{
    CALMainController *_mainController;
}

@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)includeEventCalendars;
- (void)calendarSelected:(id)arg1;
- (id)menu;
- (id)initWithController:(id)arg1;

@end
