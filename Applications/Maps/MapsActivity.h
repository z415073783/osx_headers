//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class DirectionsPlan, GEOURLOptions, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MapsActivity : PBCodable <NSCopying>
{
    unsigned long long _selectedPlaceIndex;
    int _collectionsMode;
    DirectionsPlan *_directionsPlan;
    GEOURLOptions *_displayOptions;
    NSMutableArray *_searchPlaces;
    NSString *_searchString;
    BOOL _isPresentingSelectedPlace;
    struct {
        unsigned int selectedPlaceIndex:1;
        unsigned int collectionsMode:1;
        unsigned int isPresentingSelectedPlace:1;
    } _has;
}

@property(retain, nonatomic) DirectionsPlan *directionsPlan; // @synthesize directionsPlan=_directionsPlan;
@property(nonatomic) BOOL isPresentingSelectedPlace; // @synthesize isPresentingSelectedPlace=_isPresentingSelectedPlace;
@property(nonatomic) unsigned long long selectedPlaceIndex; // @synthesize selectedPlaceIndex=_selectedPlaceIndex;
@property(retain, nonatomic) NSMutableArray *searchPlaces; // @synthesize searchPlaces=_searchPlaces;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) int collectionsMode; // @synthesize collectionsMode=_collectionsMode;
@property(retain, nonatomic) GEOURLOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDirectionsPlan;
@property(nonatomic) BOOL hasIsPresentingSelectedPlace;
@property(nonatomic) BOOL hasSelectedPlaceIndex;
- (id)searchPlacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchPlacesCount;
- (void)addSearchPlaces:(id)arg1;
- (void)clearSearchPlaces;
@property(readonly, nonatomic) BOOL hasSearchString;
@property(nonatomic) BOOL hasCollectionsMode;
@property(readonly, nonatomic) BOOL hasDisplayOptions;

@end
