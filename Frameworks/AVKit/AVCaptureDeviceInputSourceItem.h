//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDevice, AVCaptureDeviceInputSource, NSString;

@interface AVCaptureDeviceInputSourceItem : NSObject
{
    BOOL _selected;
    BOOL _enabled;
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceInputSource *_inputSource;
    NSString *_mediaType;
}

@property(readonly) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly) AVCaptureDeviceInputSource *inputSource; // @synthesize inputSource=_inputSource;
@property(readonly) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property BOOL selected; // @synthesize selected=_selected;
@property BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *localizedName;
- (id)description;
- (id)init;
- (id)initWithDevice:(id)arg1 inputSource:(id)arg2 mediaType:(id)arg3;

@end

