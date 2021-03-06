//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SNode, SStoreFileOperator, VersionVector;

@interface DeepCopyContext : NSObject
{
    SStoreFileOperator *_srcObj;
    SStoreFileOperator *_dstObj;
    SNode *_dstRoot;
    unsigned long long _dstRootPrefixLen;
    NSString *_dstRootTempPath;
    NSMutableArray *_dstUpdateInfos;
    BOOL _done;
    BOOL _sawRoot;
    int _result;
    NSMutableArray *_srcInfos;
    VersionVector *_srcVV;
    char _tempBuff[1025];
    BOOL _visible;
}

@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) VersionVector *srcVV; // @synthesize srcVV=_srcVV;
@property(retain, nonatomic) SStoreFileOperator *srcObj; // @synthesize srcObj=_srcObj;
@property(nonatomic) BOOL sawRoot; // @synthesize sawRoot=_sawRoot;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *dstRootTempPath; // @synthesize dstRootTempPath=_dstRootTempPath;
@property(nonatomic) unsigned long long dstRootPrefixLen; // @synthesize dstRootPrefixLen=_dstRootPrefixLen;
@property(retain, nonatomic) SNode *dstRoot; // @synthesize dstRoot=_dstRoot;
@property(retain, nonatomic) SStoreFileOperator *dstObj; // @synthesize dstObj=_dstObj;
@property(nonatomic) BOOL done; // @synthesize done=_done;
- (void)deepCopyStatus:(struct __FSFileOperation *)arg1 currentItem:(const struct FSRef *)arg2 stage:(unsigned int)arg3 error:(int)arg4 status:(id)arg5;
- (BOOL)deepCopyShouldProcess:(const struct FSRef *)arg1;
- (void)deepCopyItemStatus:(const struct FSRef *)arg1 destRef:(const struct FSRef *)arg2 whichInfo:(unsigned int)arg3 catInfo:(const struct FSCatalogInfo *)arg4;
- (BOOL)deepCopyError:(int)arg1 sourceError:(BOOL)arg2 sourceRef:(const struct FSRef *)arg3;
- (void)copyComplete;
- (void)dealloc;
- (id)init;

@end

