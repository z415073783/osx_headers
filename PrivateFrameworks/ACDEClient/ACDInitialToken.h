//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ACDEClient/ACMExternalInitialToken.h>

#import "ACFInitialTokenProtocol.h"

@class ACFPrincipal, NSData, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface ACDInitialToken : ACMExternalInitialToken <ACFInitialTokenProtocol>
{
    NSString *_currentUserKey;
    NSData *_initializationVector;
    NSString *_oldUserKey;
    NSData *_randomKey;
    NSString *_tokenVersion;
}

@property(retain) NSString *tokenVersion; // @synthesize tokenVersion=_tokenVersion;
@property(retain, nonatomic) NSData *randomKey; // @synthesize randomKey=_randomKey;
@property(retain) NSString *oldUserKey; // @synthesize oldUserKey=_oldUserKey;
@property(retain, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
@property(retain) NSString *currentUserKey; // @synthesize currentUserKey=_currentUserKey;

// Remaining properties
@property(retain) NSNumber *appID;
@property(retain) NSString *appIDKey;
@property(retain) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) NSString *dsKeyVersion;
@property(retain) NSString *encryptionHash;
@property(readonly) unsigned long long hash;
@property(retain) NSString *nonce;
@property(readonly, nonatomic) NSMutableDictionary *parametersDictionary;
@property(retain) ACFPrincipal *principal;
@property(retain) id <ACFTicketRequestProtocol> request;
@property(retain) NSString *sessionToken;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *tokenSourceString;

@end
