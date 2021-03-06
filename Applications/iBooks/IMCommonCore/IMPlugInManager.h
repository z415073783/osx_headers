//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable;

@interface IMPlugInManager : NSObject
{
    NSArray *_pluginDescriptors;
    NSMapTable *_wrPlugInInstances;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)enumeratePluginInstancesUsingBlock:(CDUnknownBlockType)arg1;
- (id)plugInInstancesPassingTest:(CDUnknownBlockType)arg1;
- (id)existingInstanceForPlugInInstanceDescriptor:(id)arg1;
- (id)createObjectForPlugInInstanceDescriptor:(id)arg1;
- (id)createObjectForPlugInDescriptor:(id)arg1 instanceDescription:(id)arg2;
- (id)createPlugInInstanceDescriptorForPlugInDescriptor:(id)arg1 instanceDescription:(id)arg2;
- (id)createObjectForIdentifier:(id)arg1 instanceDescription:(id)arg2;
- (id)plugInDescriptorsPassingTest:(CDUnknownBlockType)arg1;
- (id)plugInDescriptorForIdentifier:(id)arg1;
- (void)scanForPlugInDesciptors;
- (id)pluginDescriptors;
- (id)init;

@end

