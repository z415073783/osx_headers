//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPScanner.h"

@class NSMutableArray;

@interface OPScanner : CPScanner
{
    NSMutableArray *mSubErrors;
}

+ (id)convertString:(id)arg1;
- (unsigned long long)scanPrimes;
- (unsigned long long)scanLocationInRootString;
- (unsigned long long)scanOffsetFromRootString;
- (id)subscannerWithStringInRange:(struct _NSRange)arg1;
- (void)setError:(id)arg1 fromLocation:(unsigned long long)arg2;
- (void)setError:(id)arg1;
- (void)addSyntaxErrorWithDescription:(id)arg1 fromLocation:(long long)arg2 toLocation:(long long)arg3;
- (void)addSyntaxError:(id)arg1 from:(id)arg2;
- (id)error;
- (void)addValueNeeded;
- (void)addFunctions:(id)arg1;
- (void)addFunction:(id)arg1;
- (BOOL)scanSeparator;
- (BOOL)scanWithSelector:(SEL)arg1 operation:(id *)arg2;
- (BOOL)scanOperation:(id *)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 context:(id)arg2;
- (id)initWithString:(id)arg1;
- (BOOL)scanDiffEqDefinition:(id *)arg1;
- (BOOL)scanDiffEqOperation:(id *)arg1;
- (BOOL)scanInitialCondition:(id *)arg1 withVariable:(id)arg2;
- (BOOL)scanDiffEqVector:(id *)arg1 order:(unsigned long long *)arg2 withVariable:(id)arg3;
- (BOOL)scanVariableFunction:(id *)arg1;
- (BOOL)scanSerieDefinition:(id *)arg1;
- (BOOL)scanSerieInitialCondition:(id *)arg1 withSystem:(id)arg2;
- (BOOL)scanCustomFunction:(id *)arg1;
- (BOOL)scanArgumentToOperation:(id)arg1 withFunction:(id)arg2 bracket:(BOOL)arg3 isLast:(char *)arg4;
- (BOOL)scanIndexArgumentToOperation:(id)arg1 withFunction:(id)arg2;
- (BOOL)scanFunctionOperation:(id *)arg1 argumentNumber:(long long *)arg2;
- (void)didScanName:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)scanIterationOperation:(id *)arg1;
- (BOOL)scanFunctionOperation:(id *)arg1;
- (BOOL)scanAndOperation:(id *)arg1;
- (BOOL)scanBoolOperation:(id *)arg1;
- (BOOL)scanBoolFunctionOperation:(id *)arg1;
- (BOOL)scanComparisonOperation:(id *)arg1;
- (BOOL)scanNotInOperation:(id *)arg1;
- (BOOL)scanInOperation:(id *)arg1;
- (BOOL)scanInOperation:(id *)arg1 withOperatorString:(id)arg2 class:(Class)arg3;
- (BOOL)scanNotOperation:(id *)arg1;
- (BOOL)scanXorOperation:(id *)arg1;
- (BOOL)scanOrOperation:(id *)arg1;
- (BOOL)scanOrOperation:(id *)arg1 withOperationStrings:(id)arg2 selector:(SEL)arg3 class:(Class)arg4;
- (BOOL)scanBoolOrValueOperation:(id *)arg1;
- (BOOL)scanBracketOperations:(id *)arg1;
- (BOOL)scanBracketOperation:(id *)arg1;
- (BOOL)scanConditionOperation:(id *)arg1;
- (BOOL)scanDefinitionOperation:(id *)arg1;
- (BOOL)scanDeltaOperation:(id *)arg1;
- (BOOL)scanEqualOperation:(id *)arg1;
- (BOOL)scanStringRangeList:(id *)arg1;
- (BOOL)scanListOperation:(id *)arg1;
- (BOOL)scanRootOperation:(id *)arg1;
- (BOOL)scanTranspose;
- (BOOL)scanBracketDescriptorString:(id *)arg1 dropBracket:(BOOL)arg2;
- (BOOL)scanDescriptorString:(id *)arg1;
- (BOOL)scanUnknownOperation:(id *)arg1;
- (BOOL)scanComplementOperation:(id *)arg1;
- (BOOL)scanIntersectOperation:(id *)arg1;
- (BOOL)scanIntervalOperation:(id *)arg1;
- (BOOL)scanIntervalDefOperation:(id *)arg1;
- (BOOL)scanIntervalDiffOperation:(id *)arg1;
- (BOOL)scanUnionOperation:(id *)arg1;
- (BOOL)scanUnionOperation:(id *)arg1 withOperationStrings:(id)arg2 selector:(SEL)arg3 class:(Class)arg4;
- (BOOL)scanAdditionOperation:(id *)arg1;
- (BOOL)scanConditionalOperation:(id *)arg1;
- (BOOL)scanDerivativeOperation:(id *)arg1;
- (BOOL)scanStaticDerivativeOperation:(id *)arg1;
- (BOOL)scanDynamicDerivativeOperation:(id *)arg1;
- (BOOL)scanDynamicDerivativeOperation:(id *)arg1 inNumerator:(BOOL)arg2;
- (BOOL)shouldResolveOrder;
- (BOOL)scanMultipleDerivativeOperation:(id *)arg1 resolveOrder:(BOOL)arg2;
- (BOOL)scanMultipleDerivativeOperation:(id *)arg1 resolveOrder:(BOOL)arg2 inNumerator:(BOOL)arg3;
- (BOOL)scanSimpleDerivativeOperation:(id *)arg1;
- (BOOL)scanSimpleDerivativeOperation:(id *)arg1 inNumerator:(BOOL)arg2;
- (BOOL)scanUnspacedFactorOperation:(id *)arg1 isLast:(char *)arg2;
- (BOOL)scanUnspacedFactorOperation:(id *)arg1;
- (BOOL)scanFactorOperation:(id *)arg1 spaced:(BOOL)arg2 isLast:(char *)arg3;
- (BOOL)scanFactorOperation:(id *)arg1;
- (BOOL)scanFactorialOperation:(id *)arg1 spaced:(BOOL)arg2 isLast:(char *)arg3;
- (BOOL)scanFactorialOperation:(id *)arg1;
- (BOOL)scanFractionOperation:(id *)arg1;
- (BOOL)scanIntegralOperation:(id *)arg1;
- (BOOL)scanIntegral:(id *)arg1;
- (BOOL)scanMatrixOperation:(id *)arg1;
- (BOOL)scanUnspacedFactorMultiplicationOperation:(id *)arg1;
- (BOOL)scanMultiplicationOperation:(id *)arg1;
- (BOOL)scanNegativeOperation:(id *)arg1;
- (BOOL)scanNumberOperation:(id *)arg1;
- (BOOL)scanParamOperation:(id *)arg1;
- (BOOL)scanPowerOperation:(id *)arg1 spaced:(BOOL)arg2 isLast:(char *)arg3;
- (BOOL)scanPowerOperation:(id *)arg1;
- (BOOL)scanProductOperation:(id *)arg1;
- (BOOL)scanRangeOperation:(id *)arg1;
- (BOOL)scanSumOperation:(id *)arg1 operatorString:(id)arg2 class:(Class)arg3;
- (BOOL)scanSumOperation:(id *)arg1;
- (BOOL)scanValueOperation:(id *)arg1;
- (BOOL)scanValueFunctionOperation:(id *)arg1 spaced:(BOOL)arg2 isLast:(char *)arg3;
- (BOOL)scanBinomialOperation:(id *)arg1;

@end
