//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUICalendarInfoViewController.h"

#import "CalUICalendarInfoViewDataSource.h"
#import "CalUICalendarInfoViewDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class CalManagedCalendar, CalManagedObjectContext, NSMutableArray, NSString;

@interface CalUICalendarInfoPopoverContentController : CalUICalendarInfoViewController <CalUICalendarInfoViewDataSource, CalUICalendarInfoViewDelegate, CoreDAVTaskGroupDelegate>
{
    BOOL _isCalendarPublicallyShared;
    BOOL _isCalendarPublished;
    id <CalUICalendarInfoPopoverContentControllerDelegate> _delegate;
    CalManagedCalendar *_calendar;
    NSMutableArray *_sharees;
    CalManagedObjectContext *_context;
}

@property(retain) CalManagedObjectContext *context; // @synthesize context=_context;
@property BOOL isCalendarPublished; // @synthesize isCalendarPublished=_isCalendarPublished;
@property BOOL isCalendarPublicallyShared; // @synthesize isCalendarPublicallyShared=_isCalendarPublicallyShared;
@property(retain) NSMutableArray *sharees; // @synthesize sharees=_sharees;
@property(retain) CalManagedCalendar *calendar; // @synthesize calendar=_calendar;
@property id <CalUICalendarInfoPopoverContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)xmlAccessLevelForCalDAVAccessLevel:(int)arg1;
- (BOOL)isCalendarSharedToMe;
- (BOOL)calendarSupportsSharing;
- (id)remoteCalendar;
- (BOOL)hasRemoteCalendar;
- (id)calDAVCalendar;
- (BOOL)hasCalDAVCalendar;
- (id)presentableStringForOwnerOfCalendar:(id)arg1;
- (id)ownerEmailAddressForCalendar:(id)arg1;
- (void)setPublished:(BOOL)arg1;
- (id)accountFromCalendar:(id)arg1;
- (BOOL)hasUnsavedSharingChanges;
- (void)updateShareesOnCalendarToUISharees:(id)arg1;
- (void)revertChanges;
- (void)saveUnsavedChanges;
- (BOOL)infoViewCalendarIsSharedToMe:(id)arg1;
- (BOOL)infoViewCalendarIsPublicallyShared:(id)arg1;
- (BOOL)infoViewCalendarIsFamilyCalendar;
- (BOOL)infoViewCalendarIsMarkedImmutableSharees;
- (BOOL)infoViewCalendarSupportsPublishing:(id)arg1;
- (BOOL)infoViewCalendarIsAPublishedCalendar:(id)arg1;
- (BOOL)infoViewCalendarIsASubcribedCalendar:(id)arg1;
- (BOOL)infoViewCalendarSupportsSharing:(id)arg1;
- (id)infoViewManagedAccount:(id)arg1;
- (id)infoViewPublicURLString:(id)arg1;
- (id)infoViewCalendarOwnerEmailAddress:(id)arg1;
- (id)infoViewCalendarTitle:(id)arg1;
- (id)infoViewCalendarSharees:(id)arg1;
- (void)reinviteSharee:(id)arg1 forInfoView:(id)arg2;
- (BOOL)infoViewShouldSupportShareeAccessChange:(id)arg1;
- (void)infoViewCancelledByUser:(id)arg1;
- (void)infoViewDismissedByUser:(id)arg1;
- (void)infoView:(id)arg1 updatedMinimumSize:(struct CGSize)arg2;
- (BOOL)infoViewShouldDisplayiCloudStatus:(id)arg1;
- (void)infoView:(id)arg1 publicCalendarToggledOn:(BOOL)arg2;
- (void)awakeFromNib;
- (id)initWithManagedCalendar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

