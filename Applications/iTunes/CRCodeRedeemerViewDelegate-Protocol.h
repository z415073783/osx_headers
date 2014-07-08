//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRCodeRedeemerView, NSArray, NSError;

@protocol CRCodeRedeemerViewDelegate <NSObject>
- (void)codeRedeemerViewCameraDidStart:(CRCodeRedeemerView *)arg1;
- (void)codeRedeemerViewDidFindBox:(CRCodeRedeemerView *)arg1;
- (void)codeRedeemerViewDidFadeStatus:(CRCodeRedeemerView *)arg1;
- (void)codeRedeemerViewWillFadeStatus:(CRCodeRedeemerView *)arg1;
- (void)codeRedeemerView:(CRCodeRedeemerView *)arg1 didFailWithError:(NSError *)arg2;
- (void)codeRedeemerView:(CRCodeRedeemerView *)arg1 didSucceedWithCodes:(NSArray *)arg2;

@optional
- (void)codeRedeemerView:(CRCodeRedeemerView *)arg1 willRecognizeCodes:(NSArray *)arg2;
@end
