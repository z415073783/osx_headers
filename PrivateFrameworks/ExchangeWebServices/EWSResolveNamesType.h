//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray, NSString;

@interface EWSResolveNamesType : EWSBaseRequestType
{
    NSArray *_ParentFolderIds;
    NSString *_UnresolvedEntry;
    BOOL _ReturnFullContactData;
    int _SearchScope;
}

+ (id)definition;
@property int SearchScope; // @synthesize SearchScope=_SearchScope;
@property BOOL ReturnFullContactData; // @synthesize ReturnFullContactData=_ReturnFullContactData;
@property(copy) NSString *UnresolvedEntry; // @synthesize UnresolvedEntry=_UnresolvedEntry;
@property(copy) NSArray *ParentFolderIds; // @synthesize ParentFolderIds=_ParentFolderIds;
- (void)dealloc;
- (id)init;

@end

