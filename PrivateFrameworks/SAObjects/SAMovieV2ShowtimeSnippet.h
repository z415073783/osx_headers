//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SALocalSearchBusiness2;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet
{
}

+ (id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showtimeSnippet;
@property(copy, nonatomic) NSString *theaterName;
@property(retain, nonatomic) SALocalSearchBusiness2 *theater;
@property(copy, nonatomic) NSArray *showtimes;
@property(copy, nonatomic) NSString *movieName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

