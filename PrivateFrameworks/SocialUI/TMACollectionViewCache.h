//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TMACollectionView;

@interface TMACollectionViewCache : NSObject
{
    TMACollectionView *_collectionView;
    NSMutableArray *_layoutAttributes;
    struct CGRect _totalCachedFrame;
}

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)_cachedLayoutAttributesForRect:(struct CGRect)arg1;
- (struct CGRect)totalFrameForAttributes:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1;

@end
