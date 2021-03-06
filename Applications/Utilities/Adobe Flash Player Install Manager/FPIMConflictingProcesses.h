//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FPIMConflictingProcesses : NSObject
{
    NSArray *mOpenPIDs;
    NSArray *mOpenPIDNames;
    NSArray *mOpenPIDIcons;
}

+ (void)closeProcessWithPID:(int)arg1;
- (id)OpenPIDIcons;
- (id)OpenPIDNames;
- (id)OpenPIDs;
- (void)dealloc;
- (id)init;
- (int)PIDToCloseForPIDWithFlashPlayerOpen:(int)arg1;
- (void)refreshOpenPIDListMetadata;
- (void)refreshOpenPIDListWithStaticConflicts:(BOOL)arg1;

@end

