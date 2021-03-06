//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatTranscriptViewHelper.h"

@class Animator, ScrollViewWatcher;

@interface ChatTranscriptViewScrollHelper : ChatTranscriptViewHelper
{
    Animator *_currentScrollerAnimation;
    double _startingValue;
    double _endingValue;
    ScrollViewWatcher *_scrollViewWatcher;
}

@property(retain) ScrollViewWatcher *scrollViewWatcher; // @synthesize scrollViewWatcher=_scrollViewWatcher;
- (void)scrollToPoint:(struct CGPoint)arg1;
- (void)restoreSavedScrollPosition:(double)arg1;
- (void)restoreSavedScrollPositionFromNumber:(id)arg1;
- (double)savedScrollPosition;
- (void)scrollSmoothlyFromPosition:(double)arg1 toPosition:(double)arg2 inTime:(float)arg3;
- (void)scrollToEndWithTime:(float)arg1;
- (void)scrollToBeginningSmoothly:(BOOL)arg1;
- (void)scrollToEndSmoothly:(BOOL)arg1;
- (void)scrollToPosition:(double)arg1 smoothly:(BOOL)arg2;
- (void)animator:(id)arg1 doStep:(double)arg2 lastStep:(BOOL)arg3;
- (BOOL)isScrollingToEnd;
- (BOOL)isScrolling;
- (void)scrollFromPosition:(double)arg1 toPosition:(double)arg2 smoothly:(BOOL)arg3;
- (void)setScrollPositionToEnd;
- (double)scrollPositionForDocumentHeight:(double)arg1 clipRect:(struct CGRect)arg2;
- (void)userPerformedScroll;
- (void)setIsPinnedToBottom:(BOOL)arg1;
- (BOOL)isPinnedToBottom;
- (void)dealloc;
- (id)initWithChatTranscriptViewController:(id)arg1;

@end

