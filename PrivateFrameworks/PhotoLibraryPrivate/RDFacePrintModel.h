//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSString, RDFacePrintTable;

@interface RDFacePrintModel : RDModel
{
}

+ (Class)tableClass;
@property(retain, nonatomic) NSData *faceprint;
@property(nonatomic) long long faceId;
@property(retain, nonatomic) NSString *version;
@property(readonly, nonatomic) RDFacePrintTable *table;

@end

