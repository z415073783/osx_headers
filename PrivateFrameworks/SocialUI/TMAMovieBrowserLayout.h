//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/TMACollectionViewLayout.h>

@class NSArray;

@interface TMAMovieBrowserLayout : TMACollectionViewLayout
{
    NSArray *_mediaObjects;
}

@property(copy, nonatomic) NSArray *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
- (id)nextRowIndexPathForIndexPath:(id)arg1;
- (id)previousRowIndexPathForIndexPath:(id)arg1;
- (id)nextColumnIndexPathForIndexPath:(id)arg1;
- (id)previousColumnIndexPathForIndexPath:(id)arg1;
- (id)layoutAttributesForElementAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)dealloc;

@end
