//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECCoverFlowItemLayer.h"

@class CAPluginLayer;

@interface WVMinimizedAndRecentsItemLayer : ECCoverFlowItemLayer
{
    CAPluginLayer *_pluginLayer;
}

@property(readonly, nonatomic) __weak CAPluginLayer *pluginLayer; // @synthesize pluginLayer=_pluginLayer;
- (void).cxx_destruct;
- (void)layout;
- (struct CGRect)frameForHighlight;
- (id)maskLayerForHighlight;
- (struct CGRect)pluginFrameForWindowSize:(struct CGSize)arg1;
- (void)setContentFromDataSource:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;

@end

