//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDevice, BKDeviceDescriptor, NSString, _LAAuthenticationBiometricMethodShim;

__attribute__((visibility("hidden")))
@interface _LABKDevice : NSObject
{
    BKDevice *__BKDevice;	// 8 = 0x8
    BKDeviceDescriptor *_descriptor;	// 16 = 0x10
    _LAAuthenticationBiometricMethodShim *_shim;	// 24 = 0x18
}

+ (id)deviceWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028b86
- (void).cxx_destruct;	// IMP=0x0000000000029214
@property(readonly, nonatomic) _LAAuthenticationBiometricMethodShim *shim; // @synthesize shim=_shim;
@property(readonly, nonatomic) BKDeviceDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) BKDevice *_BKDevice; // @synthesize _BKDevice=__BKDevice;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000002919f
- (id)createPresenceDetectOperationWithError:(id *)arg1;	// IMP=0x00000000000290cf
- (id)createMatchOperationWithError:(id *)arg1;	// IMP=0x0000000000028fff
- (_Bool)extendedBioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000028e18
- (_Bool)bioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000028d64
- (id)identitiesWithError:(id *)arg1;	// IMP=0x0000000000028c49
- (id)initWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000288be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
