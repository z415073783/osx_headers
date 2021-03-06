//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABCreatePersonCommandDelegate.h"
#import "ABUserInterfaceAction.h"

@class ABCardViewController, ABPersonListController, NSString;

@interface ABCreateContactUIAction : NSObject <ABCreatePersonCommandDelegate, ABUserInterfaceAction>
{
    id <ABMainWindowController> _mainWindowController;
    ABPersonListController *_personListController;
    ABCardViewController *_cardViewController;
}

- (id)parentGroupIDs;
- (void)createPersonCommand:(id)arg1 updatePredicateWithPerson:(id)arg2 entry:(id)arg3;
- (id)makeCreatePersonCommand;
- (void)performWithSender:(id)arg1;
- (BOOL)alreadyEditingAnEmptyContact;
- (BOOL)validateWithMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithMainWindowController:(id)arg1 personListController:(id)arg2 cardViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

