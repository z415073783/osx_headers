//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDFacePrintTable : RDTable
{
    LiKeyPath *_versionKeyPath;
    LiKeyPath *_faceIdKeyPath;
    LiKeyPath *_faceprintKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *faceprintKeyPath; // @synthesize faceprintKeyPath=_faceprintKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceIdKeyPath; // @synthesize faceIdKeyPath=_faceIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionKeyPath; // @synthesize versionKeyPath=_versionKeyPath;
- (void).cxx_destruct;
- (id)defaultLoadPropertyPaths;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPaths;
- (unsigned long long *)faultedKeyPath;
- (unsigned long long *)faultedModelKeyPath;

@end
