//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLBeaconInternal, NSNumber, NSUUID;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding>
{
    CLBeaconInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6;
@property(readonly, nonatomic) long long rssi;
@property(readonly, nonatomic) double accuracy;
@property(readonly, nonatomic) long long proximity;
@property(readonly, copy, nonatomic) NSNumber *minor;
@property(readonly, copy, nonatomic) NSNumber *major;
@property(readonly, copy, nonatomic) NSUUID *proximityUUID;

@end

