//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface ABACL : NSObject <NSCopying>
{
    NSMutableArray *_aces;
}

- (BOOL)hasACEs;
- (id)description;
- (id)ACEs;
- (void)removeACE:(id)arg1;
- (void)addACEs:(id)arg1;
- (void)addACE:(id)arg1 append:(BOOL)arg2;
- (void)setACEs:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithACLNode:(id)arg1;
- (id)init;

@end

