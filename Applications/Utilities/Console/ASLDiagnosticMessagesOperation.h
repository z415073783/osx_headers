//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASLOperation.h"

@interface ASLDiagnosticMessagesOperation : ASLOperation
{
    struct __asl_object_s *_store;
}

- (void)close;
- (unsigned int)match;
- (unsigned int)open;
- (struct __asl_object_s *)createQuery;

@end
