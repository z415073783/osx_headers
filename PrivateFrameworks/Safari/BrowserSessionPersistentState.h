//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BrowserSessionPersistentState : NSObject
{
    struct Vector<BrowserWindowPersistentState *, 0, WTF::CrashOnOverflow> _windowStates;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)data;
- (void)restoreSession;
- (BOOL)containsAnyURLs;
- (id)initFromFile:(id)arg1;
- (id)initFromCurrentSession;

@end
