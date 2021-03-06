//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "BKAccessibilityActionTextFieldCellDelegate.h"
#import "BKAccessibilityTableViewCell.h"

@class NSString;

@interface BKAccessibilityPlatformTOCOutlineCellView : NSTableCellView <BKAccessibilityActionTextFieldCellDelegate, BKAccessibilityTableViewCell>
{
    id _bkaxDelegate;
}

- (void).cxx_destruct;
- (id)_bkaxTextFieldCell;
- (void)bkaxLoadAccessibilityInformation;
- (void)awakeFromNib;
- (BOOL)bkaxCellActionIsEnabled;
- (void)bkaxPressActionForTextFieldCell:(id)arg1;
@property(nonatomic, setter=bkaxSetDelegate:) id <BKAccessibilityTableViewDelegate> bkaxDelegate;

// Remaining properties
@property(getter=isAccessibilityElement) BOOL accessibilityElement;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

