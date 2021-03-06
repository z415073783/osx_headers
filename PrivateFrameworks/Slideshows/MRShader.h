//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRContext, NSDictionary, NSMutableDictionary, NSString;

@interface MRShader : NSObject
{
    NSString *mShaderID;
    NSString *mShaderKey;
    NSDictionary *mDescription;
    MRContext *mContext;
    unsigned int mProgram;
    unsigned int mVertexShader;
    unsigned int mFragmentShader;
    MRContext *mUseContext;
    float mModelViewProjectionMatrix[16];
    float mNormal[3];
    float mTextureMatrix[4][16];
    float mForeColor[4];
    int mModelViewProjectionMatrixLocation;
    int mNormalLocation;
    int mTextureMatrixLocation[4];
    int mForeColorLocation;
    NSMutableDictionary *mUniformLocations;
    NSMutableDictionary *mUniforms;
    NSMutableDictionary *mAttributeLocations;
    BOOL mTextureUnitsAreBound;
}

@property BOOL textureUnitsAreBound; // @synthesize textureUnitsAreBound=mTextureUnitsAreBound;
@property(readonly, nonatomic) unsigned int program; // @synthesize program=mProgram;
@property(readonly) NSString *shaderKey; // @synthesize shaderKey=mShaderKey;
@property(readonly) NSString *shaderID; // @synthesize shaderID=mShaderID;
- (int)locationForAttribute:(id)arg1;
- (void)setUniform:(id)arg1 forKey:(id)arg2;
- (void)setUniformMat4:(float [16])arg1 forKey:(id)arg2;
- (void)setUniformMat3:(float [16])arg1 forKey:(id)arg2;
- (void)setUniformVec4:(float)arg1:(float)arg2:(float)arg3:(float)arg4 forKey:(id)arg5;
- (void)setUniformVec3:(float)arg1:(float)arg2:(float)arg3 forKey:(id)arg4;
- (void)setUniformVec2:(float)arg1:(float)arg2 forKey:(id)arg3;
- (void)setUniformFloat:(float)arg1 forKey:(id)arg2;
- (void)setUniformInt:(int)arg1 forKey:(id)arg2;
- (int)_locationForUniform:(id)arg1;
- (void)setForeColor:(const float *)arg1;
- (BOOL)caresAboutForeColor;
- (void)setTextureMatrix:(float [16])arg1 onTextureUnit:(unsigned long long)arg2;
- (void)setNormal:(float)arg1:(float)arg2:(float)arg3;
- (BOOL)caresAboutNormal;
- (void)setModelViewProjectionMatrix:(float [16])arg1;
@property(retain) MRContext *useContext;
- (void)dealloc;
- (id)initWithShaderID:(id)arg1 shaderKey:(id)arg2 description:(id)arg3 vertexShader:(unsigned int)arg4 andFragmentShader:(unsigned int)arg5 inContext:(id)arg6;

@end

