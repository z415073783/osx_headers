//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPPreviewController.h"

@class _MKPlaceViewController;

@interface SPLocationPreviewController : SPPreviewController
{
    _MKPlaceViewController *_placeViewController;
}

+ (id)sharedPreviewController;
@property(retain) _MKPlaceViewController *placeViewController; // @synthesize placeViewController=_placeViewController;
- (void).cxx_destruct;
- (id)view;
- (void)loadView;
- (void)setRepresentedObject:(id)arg1;
- (void)refresh:(id)arg1;
- (id)init;

@end
