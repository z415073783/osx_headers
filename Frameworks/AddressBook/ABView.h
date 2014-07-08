//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ABView : NSObject
{
}

+ (_Bool)constraint:(id)arg1 affectsAnyView:(id)arg2;
+ (_Bool)constraint:(id)arg1 affectsView:(id)arg2;
+ (void)registerNibNamed:(id)arg1 forIdentifier:(id)arg2 onTableView:(id)arg3;
+ (id)loadNibNamed:(id)arg1 owner:(id)arg2;
+ (void)setAlternateTitleTextColor:(id)arg1 ofButton:(id)arg2;
+ (void)setTitleTextColor:(id)arg1 ofButton:(id)arg2;
+ (BOOL)isViewOrDescendentFirstResponder:(id)arg1;
+ (void)forwardAction:(SEL)arg1 sender:(id)arg2 startingWithResponder:(id)arg3;
+ (void)removeNextResponderOf:(id)arg1;
+ (void)insertResponder:(id)arg1 afterResponder:(id)arg2;
+ (double)positionOfDividerAtIndex:(long long)arg1 onSplitView:(id)arg2;
+ (void)setEnabled:(BOOL)arg1 forSegmentWithTag:(long long)arg2 onSegmentedControl:(id)arg3;
+ (long long)segmentWithTag:(long long)arg1 onSegmentedControl:(id)arg2;
+ (void)setHidden:(BOOL)arg1 onViews:(id)arg2;
+ (void)setHidden:(BOOL)arg1 onView:(id)arg2;
+ (void)enumerateRectsBeingDrawnInView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)firstAncestorOfView:(id)arg1 ofClass:(Class)arg2;
+ (id)viewWithIdentifier:(id)arg1 inViewHierarchy:(id)arg2;
+ (id)viewsByIdentifierInViewHierarchy:(id)arg1;
+ (void)enumerateViewHierarchy:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)addAnimation:(id)arg1 toView:(id)arg2 forKey:(id)arg3;
+ (void)setAnimation:(id)arg1 forView:(id)arg2 key:(id)arg3;
+ (void)addSubview:(id)arg1 toView:(id)arg2;
+ (id)bitmapRepresentationOfViewByRedrawing:(id)arg1;
+ (id)imageRepresentationOfViewByRedrawing:(id)arg1;
+ (id)bitmapRepresentationOfViewFromBackingStore:(id)arg1;
+ (id)imageRepresentationOfViewFromBackingStore:(id)arg1;

@end
