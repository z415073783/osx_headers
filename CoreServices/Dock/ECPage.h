//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, ECPager, NSMutableArray;

@interface ECPage : NSObject
{
    ECPager *_pager;
    CALayer *_layer;
    unsigned long long _index;
    NSMutableArray *_items;
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) __weak ECPager *pager; // @synthesize pager=_pager;
- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) id offIndicatorImage; // @dynamic offIndicatorImage;
@property(readonly, nonatomic) id onIndicatorImage; // @dynamic onIndicatorImage;
@property(readonly, nonatomic) unsigned long long numberOfItems; // @dynamic numberOfItems;
- (void)dealloc;
- (id)initWithPager:(id)arg1 andLayer:(id)arg2 forIndex:(unsigned long long)arg3 withItems:(id)arg4;

@end

