//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPluginInstallerController.h"

@class AMDocument, AMWorkflowMetaData, AMWorkflowPersonality, NSURL;

__attribute__((visibility("hidden")))
@interface AMWorkflowPersonalityInstallerController : AMPluginInstallerController
{
    AMDocument *_pluginDocument;
}

@property(retain) AMDocument *pluginDocument; // @synthesize pluginDocument=_pluginDocument;
@property(readonly) AMWorkflowMetaData *_workflowMetaData;
@property(readonly) AMWorkflowPersonality *_workflowPersonality;
- (BOOL)_shouldShowThirdButton;
@property(readonly) NSURL *_workflowURL;
- (id)_iconImage;
- (BOOL)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)arg1 error:(id *)arg2;
- (BOOL)_pluginIsInstallableReturningError:(id *)arg1;
- (id)_pluginURL;
- (id)_pluginLibrarySubPath;
- (id)_installationInfoString;
- (id)_accessoryVieWNibName;
- (id)_pluginTypeName;
- (id)_unlocalizedPluginTypeNameComponent;
- (id)_completedInstallationInfoString;
- (id)initWithPluginDocument:(id)arg1;
- (void)dealloc;

@end

