//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBDiscovery, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RPNearbyInfoV2Discovery : NSObject
{
    int _discoveryType;	// 8 = 0x8
    unsigned int _useCase;	// 12 = 0xc
    NSMutableArray *_devices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CDUnknownBlockType _deviceFoundHandler;	// 32 = 0x20
    CDUnknownBlockType _deviceLostHandler;	// 40 = 0x28
    CBDiscovery *_discovery;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000678d9
@property(retain, nonatomic) CBDiscovery *discovery; // @synthesize discovery=_discovery;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int useCase; // @synthesize useCase=_useCase;
@property(nonatomic) int discoveryType; // @synthesize discoveryType=_discoveryType;
// Error: Property attributes should begin with the type ('T') attribute, property name: devices
// Property attributes: (null)

- (id)description;	// IMP=0x001000000006776f
- (void)_deviceLost:(id)arg1;	// IMP=0x0010000000067601
- (void)_deviceFound:(id)arg1;	// IMP=0x0010000000067466
- (void)invalidate;	// IMP=0x00100000000673a8
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000668e2
- (id)init;	// IMP=0x001000000006686c

@end

