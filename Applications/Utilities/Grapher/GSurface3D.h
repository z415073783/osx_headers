//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSurface.h"

@interface GSurface3D : GSurface
{
    id mGLMesh;
}

+ (id)defaultAttributes;
- (void)projectWithColor:(id)arg1 linesOnly:(BOOL)arg2;
- (void)addItemsToContextualMenu:(id)arg1;
- (void)frameLowerLimitCoord:(double *)arg1 kind:(int *)arg2 upperLimitCoord:(double *)arg3 kind:(int *)arg4;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (BOOL)selectable;
- (void)updateSelf;
- (void)glDrawContent:(BOOL)arg1;
- (void)updateAttributeSelf;
- (void)endSurface;
- (void)endMesh;
- (void)addFaceWithVertices:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)vertexWithPoint:(double [3])arg1 indexT:(unsigned long long)arg2 indexU:(unsigned long long)arg3;
- (void)startMesh:(unsigned long long)arg1 by:(unsigned long long)arg2;
- (void)startSurface;
- (void)dealloc;
- (void)awake;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

