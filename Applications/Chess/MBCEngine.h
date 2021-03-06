//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBCPlayer.h"

#import "NSPortDelegate.h"

@class MBCMove, NSFileHandle, NSPipe, NSPort, NSPortMessage, NSRunLoop, NSString, NSTask;

@interface MBCEngine : MBCPlayer <NSPortDelegate>
{
    NSTask *fEngineTask;
    NSFileHandle *fToEngine;
    NSFileHandle *fFromEngine;
    NSPipe *fToEnginePipe;
    NSPipe *fFromEnginePipe;
    NSRunLoop *fMainRunLoop;
    NSPort *fEngineMoves;
    NSPortMessage *fMove;
    MBCMove *fLastMove;
    MBCMove *fLastPonder;
    MBCMove *fLastEngineMove;
    int fLastSide;
    _Bool fThinking;
    _Bool fWaitForStart;
    _Bool fSetPosition;
    _Bool fTakeback;
    _Bool fEngineEnabled;
    _Bool fNeedsGo;
    int fSide;
    double fDontMoveBefore;
    _Bool fIsLogging;
    NSFileHandle *fEngineLogFile;
    BOOL fHasObservers;
}

+ (int)secondsForTime:(int)arg1;
- (id)squareToCoord:(unsigned char)arg1;
- (void)opponentMoved:(id)arg1;
- (id)retain;
- (void)takeback;
- (void)moveDone:(id)arg1;
- (void)startGame:(int)arg1 playing:(int)arg2;
- (void)dealloc;
- (void)removeChessObservers;
- (void)setGame:(int)arg1 fen:(id)arg2 holding:(id)arg3 moves:(id)arg4;
- (void)initGame:(int)arg1;
- (id)notificationForSide;
- (void)flipSide;
- (void)handlePortMessage:(id)arg1;
- (void)executeMove:(id)arg1;
- (void)takebackNow;
- (void)enableEngineMoves:(BOOL)arg1;
- (void)runEngine:(id)arg1;
- (id)lastEngineMove;
- (id)lastPonder;
- (void)setSearchTime:(int)arg1;
- (void)interruptEngine;
- (void)writeToEngine:(id)arg1;
- (void)shutdown;
- (void)launchEngine:(id)arg1;
- (void)logFromEngine:(id)arg1;
- (void)logToEngine:(id)arg1;
- (void)writeLog:(id)arg1;
- (BOOL)isLogging;
- (void)setLogging:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

