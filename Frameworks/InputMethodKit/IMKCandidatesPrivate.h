//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKCandidate, IMKCandidates, IMKServer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IMKCandidatesPrivate : NSObject
{
    id _candidateController;
    unsigned long long _candidatePanelType;
    IMKServer *_server;
    NSArray *_selectionKeys;
    struct __TISInputSource *_inputSource;
    BOOL _dismissesAutomatically;
    NSDictionary *_attributes;
    long long _lastCandidateCallback;
    BOOL _notifyCandidateObjectOfAttributeChange;
    BOOL _selectionKeysSet;
    unsigned long long _lastHint;
    BOOL _needToNotifyClient;
    NSMutableDictionary *candidateDictionary;
    struct __CCWObject *ccwObject;
    NSString *layoutTag;
    NSMutableDictionary *layoutCacheDictionary;
    IMKCandidate *parentCandidate;
    IMKCandidates *containerCandidate;
    NSMutableArray *childCandidates;
    id delegate;
    BOOL needToSyncAttributes;
    long long theCCWListType;
    IMKCandidates *parentCandidates;
    BOOL candidatesUseCCWDictionaries;
    BOOL candidatesAreAttributedStrings;
    NSMutableArray *candidateOrderArray;
    unsigned long long pendingSelectionIdentifier;
    BOOL showingAnnotationDoNotCallbackToIM;
    struct CGPoint lastTopLeft;
    long long currentSelection;
    BOOL showingLineSelectors;
    BOOL showingColumnSelectors;
    NSArray *buttonList;
    NSArray *data;
    CDUnknownBlockType buttonCallback;
    id buttonObject;
    double fontSize;
    long long lastCCWWindowLeft;
    long long lastCCWWindowTop;
    long long lastCCWWindowWidth;
    long long lastCCWWindowHeight;
}

@property(nonatomic) long long lastCCWWindowHeight; // @synthesize lastCCWWindowHeight;
@property(nonatomic) long long lastCCWWindowWidth; // @synthesize lastCCWWindowWidth;
@property(nonatomic) long long lastCCWWindowTop; // @synthesize lastCCWWindowTop;
@property(nonatomic) long long lastCCWWindowLeft; // @synthesize lastCCWWindowLeft;
@property(nonatomic) double fontSize; // @synthesize fontSize;
@property(retain, nonatomic) id buttonObject; // @synthesize buttonObject;
@property(retain, nonatomic) NSArray *data; // @synthesize data;
@property(retain, nonatomic) NSArray *buttonList; // @synthesize buttonList;
@property(nonatomic) BOOL showingColumnSelectors; // @synthesize showingColumnSelectors;
@property(nonatomic) BOOL showingLineSelectors; // @synthesize showingLineSelectors;
@property(nonatomic) long long currentSelection; // @synthesize currentSelection;
@property(nonatomic) struct CGPoint lastTopLeft; // @synthesize lastTopLeft;
@property BOOL showingAnnotationDoNotCallbackToIM; // @synthesize showingAnnotationDoNotCallbackToIM;
@property(nonatomic) unsigned long long pendingSelectionIdentifier; // @synthesize pendingSelectionIdentifier;
@property(nonatomic) BOOL candidatesAreAttributedStrings; // @synthesize candidatesAreAttributedStrings;
@property(retain, nonatomic) NSMutableArray *candidateOrderArray; // @synthesize candidateOrderArray;
@property(nonatomic) BOOL candidatesUseCCWDictionaries; // @synthesize candidatesUseCCWDictionaries;
@property(retain, nonatomic) IMKCandidates *parentCandidates; // @synthesize parentCandidates;
@property(nonatomic) long long theCCWListType; // @synthesize theCCWListType;
@property(nonatomic) IMKCandidates *containerCandidate; // @synthesize containerCandidate;
@property(nonatomic) BOOL needToSyncAttributes; // @synthesize needToSyncAttributes;
@property(retain, nonatomic) IMKServer *_server; // @synthesize _server;
@property(retain, nonatomic) NSMutableArray *childCandidates; // @synthesize childCandidates;
@property(retain, nonatomic) NSMutableDictionary *layoutCacheDictionary; // @synthesize layoutCacheDictionary;
@property(retain, nonatomic) NSString *layoutTag; // @synthesize layoutTag;
@property(retain, nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic) IMKCandidate *parentCandidate; // @synthesize parentCandidate;
@property(nonatomic) struct __CCWObject *ccwObject; // @synthesize ccwObject;
@property(retain, nonatomic) NSMutableDictionary *candidateDictionary; // @synthesize candidateDictionary;
@property(nonatomic) unsigned long long _candidatePanelType; // @synthesize _candidatePanelType;
@property BOOL _needToNotifyClient; // @synthesize _needToNotifyClient;
- (BOOL)getRows:(long long *)arg1 andColums:(long long *)arg2;
- (BOOL)removeSubCandidatesForCandidate:(long long)arg1;
- (void)removeAllSubCandidates;
- (id)candidateForIndex:(long long)arg1;
- (id)synchronizeLayoutDictionary:(id)arg1 withAttributes:(id)arg2 didChange:(char *)arg3;
- (id)determineLayoutTag;
- (BOOL)selectionKeysSet;
- (void)setSelectionKeysSet:(BOOL)arg1;
- (BOOL)notifyCandidateObjectOfAttributeChange;
- (void)setNotifyCandidateObjectOfAttributeChange:(BOOL)arg1;
- (struct __TISInputSource *)inputSource;
- (struct __TISInputSource *)findUSKeyboardLayout;
- (void)setInputSource:(struct __TISInputSource *)arg1;
- (id)selectionKeys;
- (void)setSelectionKeys:(id)arg1;
- (void)setAttributes:(id)arg1;
@property(retain, nonatomic) NSDictionary *_attributes; // @dynamic _attributes;
- (void)dealloc;
- (void)reInitPanel:(unsigned long long)arg1;
- (id)initWithServer:(id)arg1 panelType:(unsigned long long)arg2;
- (void)calculateWindowBounds:(struct CGRect)arg1 newTopLeft:(struct CGPoint *)arg2 candidateWindow:(struct __CCWObject *)arg3;
- (void)buttonPress:(struct __CFString *)arg1 value:(long long)arg2 candidateWindow:(struct __CCWObject *)arg3;
- (void)cellDeselected:(long long)arg1 candidateWindow:(struct __CCWObject *)arg2;
- (void)cellSelected:(long long)arg1 withMouse:(BOOL)arg2 doubleClicked:(BOOL)arg3 candidateWindow:(struct __CCWObject *)arg4;
- (void)prefFlightCellDrawingIdentifier:(long long)arg1 candidateWindow:(struct __CCWObject *)arg2;
- (void)drawCellItem:(long long)arg1 itemIndex:(long long)arg2 context:(struct CGContext *)arg3 rect:(struct CGRect)arg4;
- (struct __CFString *)getStringForIdentifier:(long long)arg1 index:(long long)arg2 candidateWindow:(struct __CCWObject *)arg3;
- (id)_truncateString:(id)arg1;
- (long long)candidateIDOffset:(long long)arg1 from:(long long)arg2;
- (unsigned long long)indexForCandidateID:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType buttonCallback; // @dynamic buttonCallback;

@end
