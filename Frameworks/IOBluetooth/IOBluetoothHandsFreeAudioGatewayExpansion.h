//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IOBluetoothHandsFreeAudioGatewayExpansion : NSObject
{
    unsigned int _vendorID;
    unsigned int _productID;
    unsigned int _version;
    int _batteryLevel;
    BOOL _dockState;
}

@property BOOL dockState; // @synthesize dockState=_dockState;
@property int batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property unsigned int version; // @synthesize version=_version;
@property unsigned int productID; // @synthesize productID=_productID;
@property unsigned int vendorID; // @synthesize vendorID=_vendorID;

@end

