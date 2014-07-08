//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class NSImageView, NSTextField;

@interface AliasRowView : NSTableRowView
{
    BOOL _mouseDownInside;
    NSTextField *_label;
    NSImageView *_imageView;
    id <AliasRowViewDelegate> _delegate;
}

@property(nonatomic) BOOL mouseDownInside; // @synthesize mouseDownInside=_mouseDownInside;
@property(nonatomic) __weak id <AliasRowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak NSTextField *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
