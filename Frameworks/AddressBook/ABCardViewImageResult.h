//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSImage, NSString;

@interface ABCardViewImageResult : NSObject <NSCopying>
{
    NSImage *_image;
    NSString *_photoIdentifier;
    BOOL _placeholder;
}

@property(readonly, getter=isPlaceholder) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, copy) NSString *photoIdentifier; // @synthesize photoIdentifier=_photoIdentifier;
@property(readonly, retain) NSImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1 photoIdentifier:(id)arg2 isPlaceholder:(BOOL)arg3;

@end
