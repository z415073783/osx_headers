//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactListSelectHelper.h"

@class CNContactListController, CNContactListHelperScope, NSString;

@interface CNContactListSelectHelper : NSObject <CNContactListSelectHelper>
{
    CNContactListController *_contactListController;
    id <CNContactPickerInternalResponseDelegate> _delegate;
    CNContactListHelperScope *_scope;
}

- (void).cxx_destruct;
- (BOOL)hasValue;
- (BOOL)shouldSelectContact;
- (void)selectContact;
- (void)performSelect;
- (id)initWithDelegate:(id)arg1 listController:(id)arg2 scope:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

