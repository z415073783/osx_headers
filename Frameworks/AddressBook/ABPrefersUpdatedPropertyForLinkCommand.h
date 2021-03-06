//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABBookCommand.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABPrefersUpdatedPropertyForLinkCommand : ABBookCommand
{
    NSArray *_updatedPeople;
    id <ABLinkingInfoDataSource> _adapter;
}

+ (id)_buildCommandOfClass:(Class)arg1 withUpdatedPeople:(id)arg2 adapter:(id)arg3;
+ (id)prefersPhotoCommandWithUpdatedPeople:(id)arg1 adapter:(id)arg2;
+ (id)prefersNameCommandWithUpdatedPeople:(id)arg1 adapter:(id)arg2;
- (void)modifyPerson:(id)arg1;
- (void)modifyPeople:(id)arg1;
- (id)propertiesThatWillFlagAPersonWhenChanged;
- (BOOL)personNeedsFlagged:(id)arg1;
- (id)arrayByRemovingPeopleWhereMoreThanOneHaveChangedInALink:(id)arg1;
- (id)relevantUpdatedPeople;
- (id)peopleNeedingFlagged;
- (void)execute;
- (void)dealloc;
- (id)initWithUpdatedPeople:(id)arg1 adapter:(id)arg2;

@end

