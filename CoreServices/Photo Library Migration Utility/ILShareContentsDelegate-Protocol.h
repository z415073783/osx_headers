//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IP_ILPhotoShare, NSDictionary, NSString;

@protocol ILShareContentsDelegate
- (NSDictionary *)persistentDictionaryForShare:(IP_ILPhotoShare *)arg1;
- (void)setPersistentDictionary:(NSDictionary *)arg1 forShare:(IP_ILPhotoShare *)arg2;
- (NSString *)galleryName;
@end
