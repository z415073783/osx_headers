//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPDefinitionTableColumn.h"

@class EQFieldCell, NSCell;

@interface CPDefinitionEquationTableColumn : CPDefinitionTableColumn
{
    NSCell *mTextCell;
    EQFieldCell *mEquationFieldCell;
}

- (id)dataCellForRow:(long long)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end
