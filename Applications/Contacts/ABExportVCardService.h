//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABMainWindowViewModel, NSWindow;

@interface ABExportVCardService : NSObject
{
    ABMainWindowViewModel *_mainWindowViewModel;
    NSWindow *_window;
}

- (void)exportVCardsWithContacts:(id)arg1 suggestedFilename:(id)arg2;
- (void)dealloc;
- (id)initWithMainWindowViewModel:(id)arg1 window:(id)arg2;

@end
