//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiActivityObserver.h>

@interface LiThreadSafetyActivityObserver : LiActivityObserver
{
}

- (void)observeModelSetLocalProperties:(id)arg1;
- (void)observeModel:(id)arg1 mutableCopy:(id)arg2;
- (void)observeModel:(id)arg1 copy:(id)arg2;
- (void)observeModel:(id)arg1 writeKeyPath:(id)arg2;
- (void)observeModel:(id)arg1 readKeyPath:(id)arg2;

@end
