//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGTQueryGenius.h"

@interface CalendarQueryGenius : SGTQueryGenius
{
}

+ (id)tokenTitleForScope:(long long)arg1 suggestion:(id)arg2;
+ (id)notesCategory;
+ (id)locationCategory;
+ (id)attendeeCategory;
+ (id)organizerCategory;
+ (id)titleCategory;
+ (id)eventCategory;
- (id)suggester:(id)arg1 filterSuggestions:(id)arg2 forInput:(id)arg3;
- (long long)scopeForAttributeName:(id)arg1;
- (id)displayNameForScope:(long long)arg1;
- (id)imageForSuggestion:(id)arg1;
- (id)init;
- (id)_categoryForScope:(long long)arg1;
- (id)_categoryForAttribute:(id)arg1;

@end

