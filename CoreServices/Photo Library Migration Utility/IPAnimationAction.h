//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IPAnimationAction : NSObject
{
    int _type;
    id _target;
    SEL _selector;
    CDUnknownBlockType _block;
}

+ (id)withBlock:(CDUnknownBlockType)arg1;
+ (id)withTarget:(id)arg1 selector:(SEL)arg2;
- (id)description;
- (void)perform;
- (void)_setBlock:(CDUnknownBlockType)arg1;

@end
