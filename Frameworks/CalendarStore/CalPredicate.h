//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCompoundPredicate.h"

@class NSPredicate;

@interface CalPredicate : NSCompoundPredicate
{
    NSPredicate *_subpredicate;
}

- (id)predicate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subpredicate;
- (id)initWithPredicate:(id)arg1;

@end
