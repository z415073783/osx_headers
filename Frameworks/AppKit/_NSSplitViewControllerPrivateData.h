//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSSplitViewControllerPrivateData : NSObject
{
    NSMutableArray *_splitViewItems;
    struct {
        unsigned int hidesFirstDivider:1;
        unsigned int hidesLastDivider:1;
        unsigned int settingSplitViewItems:1;
        unsigned int _reserved:29;
    } _flags;
}

@property(retain) NSMutableArray *splitViewItems; // @synthesize splitViewItems=_splitViewItems;
- (void)dealloc;

@end

