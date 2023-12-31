//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CRCarKitMonitoringServiceAgent : NSObject
{
    NSMutableSet *_connections;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionsQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000392f9
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionsQueue; // @synthesize connectionsQueue=_connectionsQueue;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
- (void)_removeConnection:(id)arg1;	// IMP=0x001000000003913f
- (void)_addConnection:(id)arg1 forCertificateSerial:(id)arg2;	// IMP=0x0010000000039076
- (void)handleUpdatedVehicle:(id)arg1 enabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003898b
- (void)stopMonitoringCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003888b
- (void)startMonitoringCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003863a
- (_Bool)connection:(id)arg1 isMonitoringSerial:(id)arg2;	// IMP=0x0010000000038594
- (id)userInfoDictionaryForConnection:(id)arg1;	// IMP=0x0010000000038457
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000037f7b
- (id)init;	// IMP=0x0010000000037ecc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

