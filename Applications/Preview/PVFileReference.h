//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PVFileReference : NSObject
{
    struct AliasRecord **_fileAlias;
}

- (id)originalPath;
- (BOOL)targetIsOnNetworkVolume;
- (void)setFilePath:(id)arg1;
- (id)filePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end

