//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBannerFactory : NSObject
{
}

+ (int)bannerTypeForContainerNode:(const struct TFENode *)arg1 selectedNode:(const struct TFENode *)arg2 withParentController:(id)arg3;
+ (int)bannerTypeForBanner:(id)arg1;
+ (id)bannerViewControllerForType:(int)arg1 withParentController:(id)arg2;

@end

