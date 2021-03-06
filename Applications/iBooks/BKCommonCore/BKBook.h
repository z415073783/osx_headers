//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKAsset.h"
#import "NSCoding.h"

@class BKBookViewerPlugInInstanceDescriptor, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface BKBook : NSObject <NSCoding, BKAsset>
{
    BOOL _checkedForEncryption;
    BOOL _hasEncryption;
    NSDictionary *_documentOrdinalMap;
    NSDictionary *_linearDocumentOrdinalMap;
    BOOL _respectImageSizeClassIsPrefix;
    BOOL _fixedWidthIsDominant;
    BOOL _obeyPageBreaks;
    BOOL _portraitProhibited;
    BOOL _landscapeProhibited;
    BOOL _hidesSpine;
    BOOL _hasMediaOverlayElemets;
    int _bookState;
    int _fixedLayoutSpreadValue;
    int _scrollAxis;
    NSArray *_sortedLinearDocuments;
    id <BKAsset> _asset;
    NSURL *_url;
    NSString *_accountID;
    NSString *_assetID;
    BKBookViewerPlugInInstanceDescriptor *_bookViewerPlugInInstanceDescriptor;
    NSArray *_chapters;
    NSArray *_landmarks;
    NSArray *_physicalPages;
    NSString *_bookAuthor;
    NSString *_bookOPFTitle;
    NSString *_bookLanguage;
    NSString *_genre;
    NSString *_bookEpubId;
    NSString *_bookEpubIdWithUUIDScheme;
    NSString *_bookContentSubpath;
    NSString *_dcTermsModified;
    NSString *_readingDirection;
    NSString *_mediaActiveClass;
    NSString *_pageProgressionDirection;
    NSString *_currentFontFamily;
    NSString *_respectImageSizeClass;
    NSNumber *_spineIndexInPackage;
    NSString *_embeddedArtHref;
    NSNumber *_embeddedArtHrefRejected;
    NSString *_parserOPFPath;
    NSString *_parserNCXPath;
    NSString *_firstDocumentHref;
    NSString *_startPageHref;
    NSString *_tocPageHref;
    NSString *_tocTitle;
    NSDictionary *_tocCfiToIdMap;
    NSDate *_dateLastOpened;
    NSDictionary *_sinfData;
    NSString *_encryptionAlgorithm;
    NSNumber *_sinfNumber;
    NSNumber *_useGlobalContentStyle;
    NSNumber *_appleDisplayOptions;
    NSNumber *_fixedLayoutWidth;
    NSNumber *_fixedLayoutHeight;
    NSString *_fixedLayoutSpread;
    int _openToSpread;
    NSString *_parserVersion;
    NSDictionary *_allBKDocuments;
    NSString *_basePlusContentPath;
    NSArray *_allDocuments;
    NSDictionary *_chapterLocations;
    NSMutableDictionary *_resources;
}

@property(retain, nonatomic) NSMutableDictionary *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSDictionary *chapterLocations; // @synthesize chapterLocations=_chapterLocations;
@property(retain, nonatomic) NSArray *allDocuments; // @synthesize allDocuments=_allDocuments;
@property(retain, nonatomic) NSString *basePlusContentPath; // @synthesize basePlusContentPath=_basePlusContentPath;
@property(nonatomic) BOOL hasMediaOverlayElemets; // @synthesize hasMediaOverlayElemets=_hasMediaOverlayElemets;
@property(retain, nonatomic) NSDictionary *allBKDocuments; // @synthesize allBKDocuments=_allBKDocuments;
@property(retain, nonatomic) NSString *parserVersion; // @synthesize parserVersion=_parserVersion;
@property(nonatomic) BOOL hidesSpine; // @synthesize hidesSpine=_hidesSpine;
@property(nonatomic) int openToSpread; // @synthesize openToSpread=_openToSpread;
@property(nonatomic, getter=isLandscapeProhibited) BOOL landscapeProhibited; // @synthesize landscapeProhibited=_landscapeProhibited;
@property(nonatomic, getter=isPortraitProhibited) BOOL portraitProhibited; // @synthesize portraitProhibited=_portraitProhibited;
@property(nonatomic) BOOL obeyPageBreaks; // @synthesize obeyPageBreaks=_obeyPageBreaks;
@property(nonatomic) int scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(nonatomic) BOOL fixedWidthIsDominant; // @synthesize fixedWidthIsDominant=_fixedWidthIsDominant;
@property(nonatomic) int fixedLayoutSpreadValue; // @synthesize fixedLayoutSpreadValue=_fixedLayoutSpreadValue;
@property(retain, nonatomic) NSString *fixedLayoutSpread; // @synthesize fixedLayoutSpread=_fixedLayoutSpread;
@property(retain, nonatomic) NSNumber *fixedLayoutHeight; // @synthesize fixedLayoutHeight=_fixedLayoutHeight;
@property(retain, nonatomic) NSNumber *fixedLayoutWidth; // @synthesize fixedLayoutWidth=_fixedLayoutWidth;
@property(retain, nonatomic) NSNumber *appleDisplayOptions; // @synthesize appleDisplayOptions=_appleDisplayOptions;
@property(retain, nonatomic) NSNumber *useGlobalContentStyle; // @synthesize useGlobalContentStyle=_useGlobalContentStyle;
@property(retain, nonatomic) NSNumber *sinfNumber; // @synthesize sinfNumber=_sinfNumber;
@property(retain, nonatomic) NSString *encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
@property(retain, nonatomic) NSDictionary *sinfData; // @synthesize sinfData=_sinfData;
@property(retain, nonatomic) NSDate *dateLastOpened; // @synthesize dateLastOpened=_dateLastOpened;
@property(retain, nonatomic) NSDictionary *tocCfiToIdMap; // @synthesize tocCfiToIdMap=_tocCfiToIdMap;
@property(retain, nonatomic) NSString *tocTitle; // @synthesize tocTitle=_tocTitle;
@property(retain, nonatomic) NSString *tocPageHref; // @synthesize tocPageHref=_tocPageHref;
@property(retain, nonatomic) NSString *startPageHref; // @synthesize startPageHref=_startPageHref;
@property(retain, nonatomic) NSString *firstDocumentHref; // @synthesize firstDocumentHref=_firstDocumentHref;
@property(retain, nonatomic) NSString *parserNCXPath; // @synthesize parserNCXPath=_parserNCXPath;
@property(retain, nonatomic) NSString *parserOPFPath; // @synthesize parserOPFPath=_parserOPFPath;
@property(retain, nonatomic) NSNumber *embeddedArtHrefRejected; // @synthesize embeddedArtHrefRejected=_embeddedArtHrefRejected;
@property(retain, nonatomic) NSString *embeddedArtHref; // @synthesize embeddedArtHref=_embeddedArtHref;
@property(retain, nonatomic) NSNumber *spineIndexInPackage; // @synthesize spineIndexInPackage=_spineIndexInPackage;
@property(nonatomic) BOOL respectImageSizeClassIsPrefix; // @synthesize respectImageSizeClassIsPrefix=_respectImageSizeClassIsPrefix;
@property(retain, nonatomic) NSString *respectImageSizeClass; // @synthesize respectImageSizeClass=_respectImageSizeClass;
@property(retain, nonatomic) NSString *currentFontFamily; // @synthesize currentFontFamily=_currentFontFamily;
@property(retain, nonatomic) NSString *pageProgressionDirection; // @synthesize pageProgressionDirection=_pageProgressionDirection;
@property(retain, nonatomic) NSString *mediaActiveClass; // @synthesize mediaActiveClass=_mediaActiveClass;
@property(retain, nonatomic) NSString *readingDirection; // @synthesize readingDirection=_readingDirection;
@property(retain, nonatomic) NSString *dcTermsModified; // @synthesize dcTermsModified=_dcTermsModified;
@property(retain, nonatomic) NSString *bookContentSubpath; // @synthesize bookContentSubpath=_bookContentSubpath;
@property(retain, nonatomic) NSString *bookEpubIdWithUUIDScheme; // @synthesize bookEpubIdWithUUIDScheme=_bookEpubIdWithUUIDScheme;
@property(retain, nonatomic) NSString *bookEpubId; // @synthesize bookEpubId=_bookEpubId;
@property(retain) NSString *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) NSString *bookLanguage; // @synthesize bookLanguage=_bookLanguage;
@property(retain, nonatomic) NSString *bookOPFTitle; // @synthesize bookOPFTitle=_bookOPFTitle;
@property(retain, nonatomic) NSString *bookAuthor; // @synthesize bookAuthor=_bookAuthor;
@property(retain, nonatomic) NSArray *physicalPages; // @synthesize physicalPages=_physicalPages;
@property(retain, nonatomic) NSArray *landmarks; // @synthesize landmarks=_landmarks;
@property(retain, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property __weak BKBookViewerPlugInInstanceDescriptor *bookViewerPlugInInstanceDescriptor; // @synthesize bookViewerPlugInInstanceDescriptor=_bookViewerPlugInInstanceDescriptor;
@property(nonatomic) int bookState; // @synthesize bookState=_bookState;
@property(readonly) NSString *assetID; // @synthesize assetID=_assetID;
@property(readonly) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) id <BKAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)nextChapter:(id)arg1;
- (id)previousChapter:(id)arg1;
@property(readonly) NSString *scrollDirection;
@property(readonly) short desktopSupportLevel;
@property(readonly) BOOL shouldDisableTouchEmulation;
@property(readonly) BOOL shouldDisableOptimizeSpeed;
@property(readonly) long long metadataMigrationVersion;
@property(readonly) NSDate *purchaseDate;
@property(readonly) NSDate *releaseDate;
@property(readonly) NSDate *dataSourceInsertionDate;
@property(readonly) long long fileSize;
@property(readonly) short state;
@property(readonly) short contentType;
@property(readonly) long long generation;
@property(readonly, getter=isCompressed) BOOL compressed;
@property(readonly, getter=isProof) BOOL proof;
@property(readonly, getter=isLocked) BOOL locked;
@property(readonly, getter=isSample) BOOL sample;
@property(readonly) NSString *dataSourceIdentifier;
@property(readonly) BOOL computedRating;
@property(readonly) NSString *grouping;
@property(readonly) NSString *year;
@property(readonly) NSString *kind;
@property(readonly) NSString *comments;
@property(readonly) NSString *bookDescription;
@property(readonly) NSNumber *versionNumber;
@property(readonly) NSDate *updateDate;
@property(readonly) long long rating;
@property(readonly) long long pageCount;
@property(readonly) NSString *sortTitle;
@property(readonly) NSString *title;
@property(readonly) NSString *author;
@property(readonly) unsigned long long storeFrontID;
@property(readonly) NSString *storeID;
- (void)resetAsNewlyDownloaded;
- (BOOL)hasEncryption;
- (id)documentAtPath:(id)arg1;
- (id)documentsWithPath:(id)arg1 sortBy:(id)arg2 limit:(long long)arg3;
- (id)linearDocumentWithOrdinal:(unsigned long long)arg1;
- (id)documentWithOrdinal:(unsigned long long)arg1;
- (id)documentWithHref:(id)arg1;
@property(readonly, nonatomic) NSArray *sortedLinearDocuments; // @synthesize sortedLinearDocuments=_sortedLinearDocuments;
@property(readonly, nonatomic) unsigned long long linearDocumentCount;
@property(readonly, nonatomic) unsigned long long allDocumentsCount;
@property(nonatomic, getter=isInteractive) BOOL interactive;
@property(nonatomic, getter=isFixedLayout) BOOL fixedLayout;
@property(nonatomic) BOOL hasBuiltInFonts;
- (BOOL)isScrollModeDisabled;
- (BOOL)languageIsChineseOrJapanese;
@property(readonly, nonatomic) BOOL showOriginalFontOption;
- (void)_setBitMask:(unsigned long long)arg1 enabled:(BOOL)arg2;
@property(readonly, nonatomic) NSDictionary *resourceDataRequiredForPlugin;
- (void)addBookResource:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *bookInformationForPlugin;
@property(readonly, nonatomic) struct CGSize fixedLayoutSize;
@property(readonly, nonatomic) BOOL isRightToLeft;
@property(readonly, nonatomic) int bookPageProgressionDirection;
@property(readonly, nonatomic) BOOL shouldTurnOffWebkitLigatures;
@property(readonly, nonatomic) BOOL shouldEmulateTouchEvents;
- (id)_cutoffDate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSString *sequenceDisplayName;
@property(readonly) NSString *seriesID;
@property(readonly) NSNumber *seriesIsCloudOnly;
@property(readonly) NSNumber *seriesIsHidden;
@property(readonly) NSNumber *seriesSortKey;
@property(readonly) Class superclass;

@end

