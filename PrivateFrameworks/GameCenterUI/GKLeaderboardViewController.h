//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKGameCenterViewController.h>

@class NSString;

@interface GKLeaderboardViewController : GKGameCenterViewController
{
    id <GKLeaderboardViewControllerDelegate> _leaderboardDelegate;
    NSString *_category;
    long long _timeScope;
}

@property id <GKLeaderboardViewControllerDelegate> leaderboardDelegate; // @synthesize leaderboardDelegate=_leaderboardDelegate;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
@property long long timeScope;
@property(copy) NSString *category;
- (id)init;

@end
