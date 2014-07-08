//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSSplitViewDelegate.h"

@class NSString;

@interface GKSplitViewController : NSViewController <NSSplitViewDelegate>
{
    BOOL _covered;
    NSViewController *_leftViewController;
    NSViewController *_rightViewController;
}

@property(getter=isCovered) BOOL covered; // @synthesize covered=_covered;
- (BOOL)statusShouldCoverSplitViewFor:(id)arg1;
- (void)setCurrentSearchText:(id)arg1;
- (id)currentSearchText;
- (void)setRightViewHidden:(BOOL)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
@property(retain) NSViewController *rightViewController; // @synthesize rightViewController=_rightViewController;
@property(retain) NSViewController *leftViewController; // @synthesize leftViewController=_leftViewController;
- (id)splitView;
- (void)loadView;
- (void)set_gkPresentationDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
