//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MGScreenSelector, NSScreen;

@protocol MGScreenSelectorDelegate <NSObject>

@optional
- (void)screenSelectorDidCancel:(MGScreenSelector *)arg1;
- (void)screenSelector:(MGScreenSelector *)arg1 didSelectRect:(struct CGRect)arg2 ofScreen:(NSScreen *)arg3;
@end
