//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, OPOperation;

@interface OPResult : NSObject <NSCoding>
{
    OPOperation *mOperation;
    NSMutableArray *mReferences;
    BOOL mReferenceOperation;
    int mType;
    BOOL mIsDefined;
    BOOL mIsComplex;
    unsigned long long mColumns;
    unsigned long long mRows;
    struct _NComplex *mValue;
}

+ (id)intervalWithOperation:(id)arg1;
+ (id)value;
+ (id)valueFromReference:(id)arg1;
+ (id)resultWithOperation:(id)arg1 fromOperations:(id)arg2;
+ (id)boolResultWithOperation:(id)arg1 from:(id)arg2 and:(id)arg3;
+ (id)resultWithOperation:(id)arg1 from:(id)arg2 and:(id)arg3;
+ (id)resultWithOperation:(id)arg1 fromResult:(id)arg2;
- (BOOL)isTrue;
- (BOOL)isDefinedNumber;
- (BOOL)isStaticNumber;
- (BOOL)isNumber;
- (BOOL)isMatrix;
- (BOOL)isVector;
- (BOOL)isStatic;
- (unsigned long long)countValues;
- (BOOL)isDefinedValue;
- (BOOL)isDefined;
- (BOOL)isValue;
- (BOOL)isBoolean;
- (double)realValue;
- (BOOL)isStaticReal;
- (BOOL)isReal;
- (void)addReferencesFromArray:(id)arg1;
- (void)addReference:(id)arg1;
- (id)reference;
- (id)referencesOfKind:(Class)arg1;
- (id)references;
- (void)setOperation:(id)arg1;
- (void)setUndefined;
- (void)copyValueFrom:(id)arg1;
- (void)mergeWith:(id)arg1;
- (BOOL)isCompatibleForMultiplicationWith:(id)arg1;
- (BOOL)isCompatibleWith:(id)arg1;
- (void)dealloc;
- (id)initIntervalWithOperation:(id)arg1;
- (id)initValueFromReference:(id)arg1;
- (id)initWithOperation:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (id)initWithOperation:(id)arg1;
- (id)initWithOperation:(id)arg1 value:(struct _NComplex)arg2;
- (id)initWithOperation:(id)arg1 result:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

