//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FezExtendedOperation.h"

@interface iTunesAdditionOp : FezExtendedOperation
{
    BOOL _didStart;
    FezExtendedOperation *_moveOperation;
    FezExtendedOperation *_playlistOperation;
}

- (void)main;
- (void)didChangeValueForKey:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithFilenames:(id)arg1 trackTitle:(id)arg2;

@end

