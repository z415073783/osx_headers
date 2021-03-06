//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface SPDefaults : NSObject
{
    long long _useCount;
    BOOL _showedFTE;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    BOOL _spotEnabled;
    BOOL _highlightShownWithSpot;
    BOOL _parsecEnabled;
    BOOL _webSearchEnabled;
    BOOL _demoEnabled;
    BOOL _cornerMaskEnabled;
    BOOL _clearOnClose;
    BOOL _ledBellyConfigured;
    BOOL _ledBellyEnabled;
    BOOL _skipMailAttachments;
    BOOL _rankGroups;
    BOOL _useNewQueryOrder;
    BOOL _customAppPreview;
    BOOL _customFolderPreview;
    BOOL _showExtraInfoInline;
    BOOL _useLayerForGroupRows;
    BOOL _useHeavyGroupRows;
    BOOL _useLayerForSelection;
    BOOL _useWhiteSelection;
    BOOL _useCompositingFilters;
    BOOL _useCorrectMaterials;
    BOOL _borderlessWindow;
    BOOL _useSpotlightMenuSorting;
    BOOL _reloadPrefs;
    BOOL _disableLastUsedPromotion;
    NSString *_parsecBaseURL;
    long long _parsecMaxResults;
    long long _parsecMaxBingResults;
    NSArray *_parsecBlessedResults;
    NSString *_spotlightExtraQueryClause;
    NSString *_spotlightExtraQueryFlags;
    long long _maxResultsPerGroup;
}

+ (void)initialize;
+ (BOOL)isParsecEnabled;
+ (BOOL)isDeveloper;
+ (id)standardAppDefaults;
@property BOOL disableLastUsedPromotion; // @synthesize disableLastUsedPromotion=_disableLastUsedPromotion;
@property(getter=shouldReloadPrefs) BOOL reloadPrefs; // @synthesize reloadPrefs=_reloadPrefs;
@property BOOL useSpotlightMenuSorting; // @synthesize useSpotlightMenuSorting=_useSpotlightMenuSorting;
@property(getter=isBorderlessWindow) BOOL borderlessWindow; // @synthesize borderlessWindow=_borderlessWindow;
@property BOOL useCorrectMaterials; // @synthesize useCorrectMaterials=_useCorrectMaterials;
@property BOOL useCompositingFilters; // @synthesize useCompositingFilters=_useCompositingFilters;
@property BOOL useWhiteSelection; // @synthesize useWhiteSelection=_useWhiteSelection;
@property BOOL useLayerForSelection; // @synthesize useLayerForSelection=_useLayerForSelection;
@property BOOL useHeavyGroupRows; // @synthesize useHeavyGroupRows=_useHeavyGroupRows;
@property BOOL useLayerForGroupRows; // @synthesize useLayerForGroupRows=_useLayerForGroupRows;
@property BOOL showExtraInfoInline; // @synthesize showExtraInfoInline=_showExtraInfoInline;
@property(readonly) BOOL customFolderPreview; // @synthesize customFolderPreview=_customFolderPreview;
@property(readonly) BOOL customAppPreview; // @synthesize customAppPreview=_customAppPreview;
@property(readonly) BOOL useNewQueryOrder; // @synthesize useNewQueryOrder=_useNewQueryOrder;
@property(readonly) BOOL rankGroups; // @synthesize rankGroups=_rankGroups;
@property(readonly) long long maxResultsPerGroup; // @synthesize maxResultsPerGroup=_maxResultsPerGroup;
@property(readonly) NSString *spotlightExtraQueryFlags; // @synthesize spotlightExtraQueryFlags=_spotlightExtraQueryFlags;
@property(readonly) NSString *spotlightExtraQueryClause; // @synthesize spotlightExtraQueryClause=_spotlightExtraQueryClause;
@property(readonly) BOOL skipMailAttachments; // @synthesize skipMailAttachments=_skipMailAttachments;
@property(readonly) NSArray *parsecBlessedResults; // @synthesize parsecBlessedResults=_parsecBlessedResults;
@property(readonly) long long parsecMaxBingResults; // @synthesize parsecMaxBingResults=_parsecMaxBingResults;
@property(readonly) long long parsecMaxResults; // @synthesize parsecMaxResults=_parsecMaxResults;
@property(readonly) NSString *parsecBaseURL; // @synthesize parsecBaseURL=_parsecBaseURL;
@property(readonly) BOOL ledBellyEnabled; // @synthesize ledBellyEnabled=_ledBellyEnabled;
@property(readonly) BOOL ledBellyConfigured; // @synthesize ledBellyConfigured=_ledBellyConfigured;
@property BOOL clearOnClose; // @synthesize clearOnClose=_clearOnClose;
@property(getter=isCornerMaskEnabled) BOOL cornerMaskEnabled; // @synthesize cornerMaskEnabled=_cornerMaskEnabled;
@property(getter=isDemoEnabled) BOOL demoEnabled; // @synthesize demoEnabled=_demoEnabled;
@property(getter=isWebSearchEnabled) BOOL webSearchEnabled; // @synthesize webSearchEnabled=_webSearchEnabled;
@property(getter=isParsecEnabled) BOOL parsecEnabled; // @synthesize parsecEnabled=_parsecEnabled;
@property(getter=isHighlightShownWithSpot) BOOL highlightShownWithSpot; // @synthesize highlightShownWithSpot=_highlightShownWithSpot;
@property(getter=isSpotEnabled) BOOL spotEnabled; // @synthesize spotEnabled=_spotEnabled;
- (void).cxx_destruct;
@property BOOL showedFTE;
- (void)used;
- (void)_used;
- (long long)useCount;
@property(readonly) BOOL firstUse;
@property(readonly, getter=isWebSearchAllowed) BOOL webSearchAllowed;
@property(readonly, getter=isParsecAllowed) BOOL parsecAllowed;
@property(readonly) BOOL groupResults;
- (id)init;
- (void)reloadDefaults;
- (void)prefsNotificationReceived:(id)arg1;
- (void)reloadPrefs;

@end

