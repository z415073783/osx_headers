//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProKit/NSProMenu.h>

__attribute__((visibility("hidden")))
@interface NSProStandardTintColorMenu : NSProMenu
{
    BOOL _updatingMenu;
    void *_proStandardTintColorMenuReserved1;
    void *_proStandardTintColorMenuReserved2;
    void *_proStandardTintColorMenuReserved3;
}

- (long long)indexOfItemWithTarget:(id)arg1 andAction:(SEL)arg2;
- (long long)indexOfItemWithSubmenu:(id)arg1;
- (long long)indexOfItemWithRepresentedObject:(id)arg1;
- (long long)indexOfItemWithTag:(long long)arg1;
- (long long)indexOfItemWithTitle:(id)arg1;
- (long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)itemArray;
- (void)_updateMenuWithStandardTintColorsForFont:(id)arg1;

@end

