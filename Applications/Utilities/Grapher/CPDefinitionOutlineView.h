//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

@class NSScrollView;

@interface CPDefinitionOutlineView : NSOutlineView
{
    NSScrollView *mScrollView;
}

- (id)menuForEvent:(id)arg1;
- (id)menuForEvent:(id)arg1 inOutlineView:(id)arg2;
- (void)duplicate:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)keyDown:(id)arg1;
- (void)clear:(id)arg1;

@end
