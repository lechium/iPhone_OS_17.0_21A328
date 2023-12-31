//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventHitTestLayerInformation, BKSHIDTouchRoutingPolicy, BKSWindowServerHitTestSecurityAnalysis, NSArray, NSMutableSet, NSString;

@interface BKTouchContact : NSObject
{
    long long _pathIndex;	// 8 = 0x8
    unsigned int _touchIdentifier;	// 16 = 0x10
    unsigned int _userIdentifier;	// 20 = 0x14
    unsigned int _slotID;	// 24 = 0x18
    long long _presence;	// 32 = 0x20
    long long _previousPresence;	// 40 = 0x28
    long long _hitTestPolicy;	// 48 = 0x30
    unsigned int _transducerType;	// 56 = 0x38
    struct CGRect _hitTestRegion;	// 64 = 0x40
    struct CGRect _exclusiveHitTestRegion;	// 96 = 0x60
    struct CGPoint _normalLocation;	// 128 = 0x80
    double _positionZ;	// 144 = 0x90
    struct CGPoint _offset;	// 152 = 0x98
    struct BKPathZGradientInfo _zGradient;	// 168 = 0xa8
    struct BKPointTriple _denormalizedLocation;	// 192 = 0xc0
    BKSHIDTouchRoutingPolicy *_routingPolicy;	// 248 = 0xf8
    BKSHIDEventHitTestLayerInformation *_hitTestInformationAtDown;	// 256 = 0x100
    BKSWindowServerHitTestSecurityAnalysis *_hitTestSecurityAnalysis;	// 264 = 0x108
    NSMutableSet *_destinations;	// 272 = 0x110
    NSArray *_hostingChain;	// 280 = 0x118
    _Bool _touchDetached;	// 288 = 0x120
    _Bool _transferred;	// 289 = 0x121
    _Bool _tapToWake;	// 290 = 0x122
}

- (void).cxx_destruct;	// IMP=0x002000000008a514
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000008a322
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008a2b6
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x001000000008a208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

