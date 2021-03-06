//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "WebPlugInViewFactory.h"

@class DOMElement, NSString, PersonIconView;

@interface PersonIconPlugin : NSView <WebPlugInViewFactory>
{
    PersonIconView *_view;
    DOMElement *_containingElement;
}

+ (id)plugInViewWithArguments:(id)arg1;
- (void)webPlugInSetIsSelected:(BOOL)arg1;
- (void)webPlugInDestroy;
- (void)webPlugInStop;
- (void)webPlugInStart;
- (void)webPlugInInitialize;
- (void)dealloc;
- (id)_imHandleFromArgumentsDictionary:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_containingElementChanged:(id)arg1;
- (id)initWithArguments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

