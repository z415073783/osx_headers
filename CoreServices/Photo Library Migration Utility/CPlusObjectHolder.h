//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPlusObjectHolder : NSObject
{
    void *mObject;
    int mType;
}

+ (id)hold:(void *)arg1 type:(int)arg2;
+ (id)hold:(void *)arg1;
- (int)type;
- (void *)object;
- (id)initWithObject:(void *)arg1 type:(int)arg2;
- (id)initWithObject:(void *)arg1;

@end
