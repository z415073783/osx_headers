//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface NSPrefPaneGroup : NSObject
{
    NSString *_identifier;
    NSString *_localizedName;
    NSMutableArray *_prefPanes;
}

- (id)description;
- (id)prefPanes;
- (id)localizedName;
- (id)identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
