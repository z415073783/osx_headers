//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PRLogging : NSObject
{
    NSObject<OS_dispatch_queue> *_logQueue;
    BOOL _logToFile;
    BOOL _logToSyslog;
}

+ (id)sharedLogger;
- (void).cxx_destruct;
- (void)logMessageWithFormat:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (void)_reloadLogPreferences;
- (id)init;

@end

