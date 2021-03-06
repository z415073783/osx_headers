//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (iPhotoExtensions)
+ (id)preciseStringFromPoint:(struct CGPoint)arg1;
+ (struct CGPoint)precisePointFromString:(id)arg1;
+ (id)preciseStringFromRect:(struct CGRect)arg1;
+ (struct CGRect)preciseRectFromString:(id)arg1;
+ (id)dateRangeStringForPhotos:(struct IPPhotoList *)arg1 earlyDateOnly:(BOOL)arg2 shortFormat:(BOOL)arg3;
+ (id)decimalFormattedNumber:(long long)arg1;
+ (id)thousandSeparatorFormattedNumber:(long long)arg1;
+ (id)generateUUID;
+ (id)stringForOSType:(unsigned int)arg1;
- (BOOL)caseInsensitiveHasPrefix:(id)arg1;
- (BOOL)caseInsensitiveDiacriticalHasPrefix:(id)arg1;
- (unsigned long long)versionNumberRepresentedByDottedString;
- (id)colorRepresentedByFloatString;
- (id)colorRepresentedByString;
@end

