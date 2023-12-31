//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, FMQueueSynchronizer, FMXPCServiceDescription, FMXPCSession, NSString;
@protocol OS_dispatch_queue, SPCBPeripheralManagementXPCProtocol;

__attribute__((visibility("hidden")))
@interface SPCBLeechScanner : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _isScanning;	// 9 = 0x9
    int _notifyToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    FMQueueSynchronizer *_queueSynchronizer;	// 24 = 0x18
    CBCentralManager *_centralManager;	// 32 = 0x20
    FMXPCServiceDescription *_serviceDescription;	// 40 = 0x28
    FMXPCSession *_session;	// 48 = 0x30
    id <SPCBPeripheralManagementXPCProtocol> _proxy;	// 56 = 0x38
}

+ (id)remoteInterface;	// IMP=0x0010000000028423
- (void).cxx_destruct;	// IMP=0x0000000000028743
@property(retain, nonatomic) id <SPCBPeripheralManagementXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property(nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) FMQueueSynchronizer *queueSynchronizer; // @synthesize queueSynchronizer=_queueSynchronizer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x00000000000284d0
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000000002848f
- (void)invalidationHandler:(id)arg1;	// IMP=0x0000000000028043
- (void)interruptionHandler:(id)arg1;	// IMP=0x0000000000027f9e
- (void)stopScanning;	// IMP=0x0000000000027ec2
- (void)startScanning;	// IMP=0x0000000000027d0c
- (void)handleStateChange:(unsigned long long)arg1;	// IMP=0x0000000000027872
- (id)init;	// IMP=0x000000000002753b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

