//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface AMImageRegistry : NSObject
{
    NSCache *_imageCache;
}

+ (id)resizeImage;
+ (id)warningImage;
+ (id)errorImage;
+ (id)successImage;
+ (id)progressImage;
+ (id)sharedImageRegistry;
- (id)imageFromAutomatorApplicationNamed:(id)arg1 size:(int)arg2;
- (id)imageFromFrameworkNamed:(id)arg1 type:(id)arg2 size:(int)arg3;
- (id)imageFromSystemNamed:(id)arg1 size:(int)arg2;
- (id)iconForFileType:(id)arg1 size:(int)arg2;
- (id)iconForApplicationWithIdentifier:(id)arg1 size:(int)arg2;
- (id)iconForApplicationName:(id)arg1 size:(int)arg2;
- (id)_bundleIdentifierForApplicationNamed:(id)arg1;
- (id)imageForURL:(id)arg1 size:(int)arg2;
- (id)_imageForKey:(id)arg1 size:(int)arg2 generatorBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

