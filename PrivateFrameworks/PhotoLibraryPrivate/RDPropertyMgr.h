//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface RDPropertyMgr : NSObject
{
    NSMutableDictionary *m_propertyInfo;
    NSDictionary *m_qualifiersDict;
    NSArray *m_sortKeys;
    NSSet *m_exifKeysSet;
    NSMutableSet *m_iptcPropertyKeySet;
}

+ (id)customInfoKeys;
+ (id)customKeyPathsToIgnore;
+ (id)orientationPortrait;
+ (id)orientationLandscape;
+ (id)orientationSquare;
+ (id)convertKeyPathToNewIPTCKeyPath:(id)arg1;
+ (id)convertKeyToNewIPTCKey:(id)arg1;
+ (id)fixedPrecisionNumberForNumber:(id)arg1 precision:(unsigned long long)arg2;
+ (id)decimalRounderForPrecision:(unsigned long long)arg1;
+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_qualifiersFromPlist;
- (id)_keyPathsForPropertyType:(unsigned short)arg1;
- (id)_keysForTierName:(id)arg1;
- (id)_propertyInfo;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)iptcPropertyKeySet;
- (id)metadataSetNameForSet:(unsigned char)arg1 context:(unsigned char)arg2;
- (BOOL)showLabelsForSet:(unsigned char)arg1 context:(unsigned char)arg2;
- (unsigned char)placementForSet:(unsigned char)arg1 context:(unsigned char)arg2;
- (void)toggleShowPropertiesForContext:(unsigned char)arg1;
- (BOOL)showPropertiesForContext:(unsigned char)arg1;
- (unsigned char)propertySetForContext:(unsigned char)arg1;
- (void)rotatePropertySetForContext:(unsigned char)arg1;
- (unsigned char)rotatePropertySet:(unsigned char)arg1;
- (id)showPropertiesKeyForContext:(unsigned char)arg1;
- (id)propertySetKeyForContext:(unsigned char)arg1;
- (id)defaultsNameForSet:(unsigned char)arg1 context:(unsigned char)arg2;
- (id)defaultsContextNameForPropertyContext:(unsigned char)arg1;
- (id)defaultsSetNameForPropertySet:(unsigned char)arg1;
- (id)sortKeys;
- (id)parentKeyForKeyPath:(id)arg1;
- (id)dependentKeyPathsForKeys:(id)arg1;
- (id)dependentKeyPathsForKey:(id)arg1;
- (BOOL)isKeyPathEditable:(id)arg1;
- (id)exifDateKeyPaths;
- (id)alphabeticalCustomInfoKeyPaths;
- (id)hierarchicalPlacesKeyPaths;
- (id)alphabeticalIptcKeyPaths;
- (id)statisticKeyPaths;
- (id)iptcDateKeyPaths;
- (id)iptcKeyPaths;
- (id)exifKeysSet;
- (id)exifKeys;
- (id)exifKeyPaths;
- (id)badgeKeyPaths;
- (id)basicKeyPaths;
- (BOOL)qualifierUsesValue:(long long)arg1;
- (id)labelForQualifier:(id)arg1;
- (id)qualifiersForQualifierKey:(id)arg1;
- (id)qualifiersForKey:(id)arg1 queryType:(int)arg2;
- (id)keyPathToQualifier:(id)arg1;
- (unsigned char)valueTypeForKeyPath:(id)arg1;
- (id)placeHolderStringForKeyPath:(id)arg1;
- (id)init;

@end
