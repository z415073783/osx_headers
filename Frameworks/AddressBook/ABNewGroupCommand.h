//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCommand.h>

@class ABGroup, NSArray, NSDictionary;

@interface ABNewGroupCommand : ABCommand
{
    ABGroup *_newGroup;
    NSDictionary *_groupProperties;
    NSArray *_selectedRecords;
    ABGroup *_parentGroup;
}

- (id)newGroup;
- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)finalize;
- (void)dealloc;
- (id)initWithPeople:(id)arg1 parentGroup:(id)arg2 addressBook:(id)arg3;

@end

