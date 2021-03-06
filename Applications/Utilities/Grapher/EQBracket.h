//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EQZone.h"

@interface EQBracket : EQZone
{
}

+ (id)bracketWithParent:(id)arg1 content:(id)arg2 openBracket:(id)arg3 closeBracket:(id)arg4;
+ (id)zoneWithSelection:(id)arg1;
+ (unsigned long long)textFormats;
- (void)appendOperationToString:(id)arg1;
- (void)appendToString:(id)arg1 info:(id)arg2;
- (void)updateDepth;
- (void)setContentPosition;
- (double)rightBracketMargin;
- (double)leftBracketMargin;
- (double)bracketMarginForSymbol:(id)arg1;
- (BOOL)validSize;
- (id)closeBracket;
- (id)bracketted;
- (id)openBracket;
- (unsigned long long)contentToSelectAfterCreation:(BOOL)arg1;
- (id)initWithParent:(id)arg1 bracketted:(id)arg2 openBracket:(id)arg3 closeBracket:(id)arg4;
- (id)purged;
- (BOOL)acceptsVoidContent;
- (BOOL)onlyFactorForFormat:(unsigned long long)arg1;
- (void)finishZoneForFormat:(unsigned long long)arg1;
- (id)suffixForFormat:(unsigned long long)arg1;
- (id)prefixForFormat:(unsigned long long)arg1;
- (id)LaTeXExpression;

@end

