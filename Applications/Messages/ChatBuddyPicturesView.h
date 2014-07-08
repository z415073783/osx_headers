//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSImage;

@interface ChatBuddyPicturesView : NSView
{
    NSArray *_monogramImages;
    NSImage *_defaultImage;
    double _pictureFrameAlpha;
    NSArray *_internalConstraints;
}

@property(retain) NSArray *internalConstraints; // @synthesize internalConstraints=_internalConstraints;
@property(nonatomic) double pictureFrameAlpha; // @synthesize pictureFrameAlpha=_pictureFrameAlpha;
@property(retain, nonatomic) NSImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) NSArray *monogramImages; // @synthesize monogramImages=_monogramImages;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setFrameSize:(struct CGSize)arg1;
- (CDStruct_d2b197d1)alignmentRectInsets;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_invalidateInternalConstraints;
- (void)_commonChatBuddyPicturewViewInit;
@property(readonly) double pictureScaling;
@property(readonly) struct CGRect overlappedArea;
@property(nonatomic) unsigned long long displayedPictureCount; // @dynamic displayedPictureCount;

@end
