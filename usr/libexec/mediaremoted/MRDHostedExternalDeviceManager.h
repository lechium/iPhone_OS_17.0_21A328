//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol MRDHostedExternalDeviceManagerDelegate;

@interface MRDHostedExternalDeviceManager : NSObject
{
    NSMutableArray *_hostedExternalDeviceGraveyard;	// 8 = 0x8
    NSMutableDictionary *_hostedExternalDeviceMap;	// 16 = 0x10
    id <MRDHostedExternalDeviceManagerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000011f0a3
@property(nonatomic) __weak id <MRDHostedExternalDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x001000000011ed7f
- (void)_tombstoneHostedExternalDevice:(id)arg1 error:(id)arg2;	// IMP=0x001000000011eba6
- (void)_removeExternalDeviceWithOutputDeviceUID:(id)arg1 error:(id)arg2;	// IMP=0x001000000011e83b
- (void)_removeExternalDeviceWithEndpointIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x001000000011e702
- (void)disconnectUndiscoverableEndpoints:(id)arg1;	// IMP=0x001000000011e2a5
- (_Bool)isDirectConnectedToOutputDeviceUID:(id)arg1;	// IMP=0x001000000011e169
- (id)hostedExternalDeviceForEndpointIdentifier:(id)arg1;	// IMP=0x001000000011e0dd
- (void)addHostedExternalDevice:(id)arg1 endpoint:(id)arg2;	// IMP=0x001000000011df71
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
- (id)init;	// IMP=0x001000000011de85

@end
