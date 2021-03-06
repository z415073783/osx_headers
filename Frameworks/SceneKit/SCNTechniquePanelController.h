//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPopUpButton, SCNRenderTargetView, SCNTechniquePanel, SCNView;

__attribute__((visibility("hidden")))
@interface SCNTechniquePanelController : NSObject
{
    SCNView *_3dView;
    SCNTechniquePanel *_panel;
    NSPopUpButton *_passes;
    NSPopUpButton *_target;
    SCNRenderTargetView *_targetView;
}

- (void)reParsePasses;
- (void)selectTarget:(id)arg1;
- (struct __C3DTexture *)currentTexture;
- (void)selectPass:(id)arg1;
- (void)updateTargets;
- (void)setOpenGLContext:(id)arg1;
- (void)close:(id)arg1;
@property(retain) SCNView *view;
- (id)panel;
- (struct __C3DFXContext *)fxContext;
-     // Error parsing type: ^{__C3DRendererContext={__CFRuntimeBase=Q[4C]I}iI(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})IIIfI[3(C3DMatrix4x4=[16f][4])]^{__C3DTexture}^{__C3DStack}^vBBBBBI^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DRendererContextStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[16I]Ii^{__C3DBlendStates}^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^viii}{?=[5I][5i][7{?=iII}][7I]^?^?^?^?^?^?^?^?^?^?}^{__C3DArray}II^{__CFArray}^{__C3DArray}I}16@0:8, name: rendererContext
- (struct __C3DEngineContext *)context;
- (void)techniquesDidUpdate:(id)arg1;
- (void)sceneDidChange;
- (void)dealloc;
- (id)init;

@end

