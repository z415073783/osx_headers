//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary;

@interface GLayout : NSObject <NSCoding>
{
    NSMutableDictionary *mDictionary;
}

+ (id)layoutOfObject:(id)arg1;
+ (id)layout;
- (void)updateKey:(id)arg1 to:(id)arg2;
- (void)setDictionary:(id)arg1;
- (id)mutableDictionary;
- (id)dictionary;
- (void)applyToObject:(id)arg1;
- (void)setLayoutOfObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

