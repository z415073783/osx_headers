//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (CPLCodingProxy)
+ (id)cplAllPropertyNames;
+ (void)cplDumpProperties;
+ (id)_cplPropertyAttributeMap;
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
- (unsigned long long)cplSpecialHash;
- (BOOL)cplSpecialIsEqual:(id)arg1;
- (id)cplFullDescription;
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2;
- (void)cplCopyPropertiesFromObject:(id)arg1;
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2;
- (unsigned long long)cplHash;
- (BOOL)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2;
- (BOOL)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 differingProperty:(id *)arg3;
- (BOOL)cplIsEqual:(id)arg1;
- (void)cplDecodePropertiesFromCoder:(id)arg1;
- (void)cplEncodePropertiesWithCoder:(id)arg1;
- (id)cplDeepCopy;
@end

