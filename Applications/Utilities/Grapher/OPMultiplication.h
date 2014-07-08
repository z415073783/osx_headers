//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPOperation.h"

@interface OPMultiplication : OPOperation
{
    int mMultOperation;
}

+ (id)divisionOf:(id)arg1 by:(id)arg2;
+ (id)multiplicationOf:(id)arg1 with:(id)arg2;
+ (BOOL)isFactor:(id)arg1;
- (id)partialDerivative:(unsigned long long)arg1;
- (id)simplified;
- (struct _NComplex)computeComplexWith:(struct _NComplex)arg1 and:(struct _NComplex)arg2;
- (double)computeRealWith:(double)arg1 and:(double)arg2;
- (id)evaluate;
- (struct _NComplex)complexMultiplicationOf:(struct _NComplex)arg1 with:(struct _NComplex)arg2;
- (id)initWithFirstFactor:(id)arg1 secondFactor:(id)arg2 operation:(int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
