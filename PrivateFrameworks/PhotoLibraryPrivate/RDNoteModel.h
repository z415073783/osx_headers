//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSDate, NSString, RDNoteTable;

@interface RDNoteModel : RDModel
{
}

+ (Class)tableClass;
@property(retain, nonatomic) NSData *data;
@property(retain, nonatomic) NSDate *createDate;
@property(retain, nonatomic) NSString *note;
@property(retain, nonatomic) NSString *propertyKey;
@property(retain, nonatomic) NSString *attachedToUuid;
@property(nonatomic) long long attachedToClassType;
@property(readonly, nonatomic) RDNoteTable *table;

@end

