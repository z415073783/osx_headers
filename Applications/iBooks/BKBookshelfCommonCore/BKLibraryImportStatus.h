//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKLibraryProgressStatus.h"

@class NSString;

@interface BKLibraryImportStatus : NSObject <BKLibraryProgressStatus>
{
    NSString *_assetID;
    double _progressValue;
}

+ (id)statusWithAssetID:(id)arg1 progressValue:(double)arg2;
@property(readonly, nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
@property(readonly, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)updateWithStatus:(id)arg1;
- (id)initWithAssetID:(id)arg1 progressValue:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

