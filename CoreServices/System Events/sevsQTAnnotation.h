//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Element.h"

@class NSString;

@interface sevsQTAnnotation : Element
{
    NSString *_fullText;
}

+ (id)qtAnnotationsFromTrack:(id)arg1 withParent:(id)arg2;
+ (id)qtAnnotationsFromMovie:(id)arg1 withParent:(id)arg2;
+ (id)annotationWithValue:(id)arg1 forIdentifier:(unsigned int)arg2 parent:(id)arg3;
- (void)setFullText:(id)arg1;
- (id)fullText;
- (void)dealloc;
- (id)init;

@end
