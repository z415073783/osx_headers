//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSPredicate;

@protocol CTFontDownloading
- (void)availableDownloadableFontsWithReply:(void (^)(NSArray *))arg1;
- (void)cancel;
- (void)startUpdateWithPredicate:(NSPredicate *)arg1 replyBlock:(void (^)(_Bool, NSError *))arg2;
@end
