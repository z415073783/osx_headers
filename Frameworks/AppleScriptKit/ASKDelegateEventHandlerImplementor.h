//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleScriptKit/ASKEventHandlerImplementor.h>

@class ASKEventHandlerDelegate;

@interface ASKDelegateEventHandlerImplementor : ASKEventHandlerImplementor
{
    ASKEventHandlerDelegate *_eventHandlerDelegate;
}

- (void)disable;
- (void)enable;
- (void)setEventHandlerDelegate:(id)arg1;
- (id)eventHandlerDelegate;
- (id)delegateForObject:(id)arg1;
- (void)finalize;
- (void)dealloc;

@end
