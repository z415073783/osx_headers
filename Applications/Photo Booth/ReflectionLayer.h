//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAOpenGLLayer.h"

@class NSImage, NSString;

@interface ReflectionLayer : CAOpenGLLayer
{
    BOOL _visible;
    NSImage *_maskImage;
    NSString *_identifier;
    NSString *_alignmentMode;
    unsigned int _programID;
}

@property(retain) NSString *alignmentMode; // @synthesize alignmentMode=_alignmentMode;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)setupShaders;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (void)releaseCGLContext:(struct _CGLContextObject *)arg1;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (struct _CGLContextObject *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (id)renderingContext;
- (void)_newFrameReady:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
@property(retain) NSImage *maskImage;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 maskImage:(id)arg2 alignmentMode:(id)arg3;

@end
