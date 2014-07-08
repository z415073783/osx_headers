//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSDocument, NSPanel, NSTextField;

@interface Inspector : NSObject
{
    NSTextField *widthText;
    NSTextField *heightText;
    NSTextField *depthText;
    NSButton *alphaSwitch;
    NSPanel *inspectorPanel;
    NSDocument *lastDocument;
}

- (BOOL)windowShouldClose:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)showPanel;
- (id)inspectorPanel;
- (void)_setInspectedImageRep:(id)arg1;

@end
