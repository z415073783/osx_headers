//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class NSArray;

@interface CSTableView : NSTableView
{
    struct _NSRange _highlightRange;
    unsigned long long _highlightColumn;
    unsigned long long _highlightRow;
    NSArray *_cs_AlternatingRowColours;
}

@property(retain) NSArray *cs_AlternatingRowColours; // @synthesize cs_AlternatingRowColours=_cs_AlternatingRowColours;
- (void).cxx_destruct;
- (void)findString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)_findPreviousOccurrence:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)_findNextOccurrence:(id)arg1 options:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1;
- (id)_alternatingRowBackgroundColors;
- (unsigned long long)highlightColumn;
- (struct _NSRange)highlightRange;
- (unsigned long long)highlightRow;
- (void)highlightRange:(struct _NSRange)arg1 column:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)accessibilityParameterizedAttributeNames;
- (void)accessibilitySetSelectedChildrenAttribute:(id)arg1;
- (BOOL)accessibilityIsSelectedChildrenAttributeSettable;
- (void)accessibilitySetSelectedRowsAttribute:(id)arg1;
- (void)_accessibilitySelectRowsFromAccessibilityRows:(id)arg1;
- (BOOL)accessibilityIsSelectedRowsAttributeSettable;
- (id)accessibilitySelectedRowsAttribute;
- (BOOL)accessibilityIsVisibleRowsAttributeSettable;
- (id)accessibilityVisibleRowsAttribute;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)accessibilityAttributeNames;

@end
