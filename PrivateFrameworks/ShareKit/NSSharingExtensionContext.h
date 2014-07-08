//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

@class NSDictionary, NSMutableDictionary, NSProgress;

@interface NSSharingExtensionContext : NSExtensionContext
{
    NSMutableDictionary *_parameters;
    NSProgress *_progress;
    unsigned long long _status;
    NSDictionary *_options;
    id <SHKHostExtensionContextProtocol> _host;
}

+ (void)assertBundleInformationIsComplete;
+ (void)load;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(retain) id <SHKHostExtensionContextProtocol> host; // @synthesize host=_host;
@property(retain) NSDictionary *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)setDisplayState:(id)arg1;
- (id)displayState;
- (id)extensionItem;
- (void)stopProgressImmediately:(BOOL)arg1;
- (id)startProgress;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
- (void)serviceDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 items:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)closeServiceWindowWithSuccess:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)SHK_invalidate;
- (void)cancelServiceUI;
- (void)performService;
@property unsigned long long status; // @synthesize status=_status;
- (id)clientAppID;
- (id)serviceDictionary;
- (BOOL)sourceWindowIsFullscreen;
- (BOOL)hasSourceWindow;
- (struct CGRect)sourceWindowFrame;
- (long long)sharingContentScope;
- (BOOL)clientAppIsBackgroundOnly;
- (void)storeParameterValue:(id)arg1 forKey:(id)arg2;
- (id)parameters;
- (void)performServiceWithOptionsDictionaryData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSharingOptions:(id)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end
