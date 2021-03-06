//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface BAFunctionSignature : NSObject
{
    NSString *_returnType;
    NSMutableArray *_argTypes;
    NSMutableArray *_argModifiers;
    BOOL _isVariadic;
}

@property(nonatomic) BOOL isVariadic; // @synthesize isVariadic=_isVariadic;
@property(retain, nonatomic) NSMutableArray *argModifiers; // @synthesize argModifiers=_argModifiers;
@property(retain, nonatomic) NSMutableArray *argTypes; // @synthesize argTypes=_argTypes;
- (void)setReturnType:(id)arg1;
- (const char *)returnType;
- (BOOL)getArgumentModifierAtIndex:(long long)arg1;
- (const char *)getArgumentTypeAtIndex:(long long)arg1;
- (unsigned long long)numberOfArguments;
- (id)init;

@end

