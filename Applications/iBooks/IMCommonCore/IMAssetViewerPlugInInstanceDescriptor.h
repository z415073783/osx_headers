//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCommonCore/IMPlugInInstanceDescriptor.h>

@class NSColor, NSString;

@interface IMAssetViewerPlugInInstanceDescriptor : IMPlugInInstanceDescriptor
{
    BOOL _shouldMaintainAspectRatio;
    BOOL _supportsStudyCards;
    BOOL _supportsSearchPageNumber;
    NSString *_title;
    NSString *_tocTitle;
    NSColor *_containerBackgroundColor;
    unsigned long long _toolbarItemMask;
    id <BKAsset> _asset;
    id <IMAssetViewerDelegate> _assetViewerDelegate;
    id _locationToSelect;
    struct CGSize _defaultSize;
    struct CGSize _minimumSize;
}

@property(retain) id locationToSelect; // @synthesize locationToSelect=_locationToSelect;
@property(nonatomic) __weak id <IMAssetViewerDelegate> assetViewerDelegate; // @synthesize assetViewerDelegate=_assetViewerDelegate;
@property(readonly) id <BKAsset> asset; // @synthesize asset=_asset;
@property BOOL supportsSearchPageNumber; // @synthesize supportsSearchPageNumber=_supportsSearchPageNumber;
@property BOOL supportsStudyCards; // @synthesize supportsStudyCards=_supportsStudyCards;
@property unsigned long long toolbarItemMask; // @synthesize toolbarItemMask=_toolbarItemMask;
@property(retain, nonatomic) NSColor *containerBackgroundColor; // @synthesize containerBackgroundColor=_containerBackgroundColor;
@property(retain, nonatomic) NSString *tocTitle; // @synthesize tocTitle=_tocTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property BOOL shouldMaintainAspectRatio; // @synthesize shouldMaintainAspectRatio=_shouldMaintainAspectRatio;
@property struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property struct CGSize defaultSize; // @synthesize defaultSize=_defaultSize;
- (void).cxx_destruct;
- (id)lastScreenshot;
- (void)saveScreenshot:(id)arg1;
- (id)initWithPlugInDescriptor:(id)arg1 asset:(id)arg2;

@end

