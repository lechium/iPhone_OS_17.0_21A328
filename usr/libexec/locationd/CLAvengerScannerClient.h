//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CLAvengerReconciler, CLAvengerScannerClientController, NSString;
@protocol CLAvengerScannerClientDelegateProtocol, OS_dispatch_queue;

@interface CLAvengerScannerClient : NSObject
{
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertion;	// 8 = 0x8
    id <CLAvengerScannerClientDelegateProtocol> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *;	// 24 = 0x18
    CBCentralManager *_centralManager;	// 32 = 0x20
    CLAvengerScannerClientController *_controller;	// 40 = 0x28
    CLAvengerReconciler *_reconciler;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0020000000ef5b99
- (void).cxx_destruct;	// IMP=0x0010000000ef5b63
@property(nonatomic) CLAvengerReconciler *reconciler; // @synthesize reconciler=_reconciler;
@property(nonatomic) CLAvengerScannerClientController *controller; // @synthesize controller=_controller;
@property(nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CLAvengerScannerClientDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)releasePowerAssertion;	// IMP=0x0010000000ef5ab6
- (void)takePowerAssertion;	// IMP=0x0010000000ef59c1
- (_Bool)hasPowerAssertion;	// IMP=0x0010000000ef59b3
- (id)getPowerAssertionIdentifier;	// IMP=0x0010000000ef5975
- (void)onNotOptedInBOMScanEnded;	// IMP=0x0010000000ef5915
- (void)onUpdatedPowerState;	// IMP=0x0010000000ef58b5
- (void)onAdvertisementBufferEmptied;	// IMP=0x0010000000ef5855
- (void)onAggressiveScanEnded;	// IMP=0x0010000000ef57f5
- (void)onAggressiveScanStarted;	// IMP=0x0010000000ef5795
- (id)clientIdentifier;	// IMP=0x0010000000ef576a
- (void)onAvengerAdvertisement:(id)arg1 address:(id)arg2 advertisementData:(id)arg3 status:(unsigned char)arg4 rssi:(long long)arg5 reserved:(id)arg6 channel:(id)arg7 reconciledInformation:(id)arg8;	// IMP=0x0010000000ef5716
- (void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2;	// IMP=0x0010000000ef56d6
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0010000000ef56a5
- (void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;	// IMP=0x0010000000ef5665
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0010000000ef5601
- (_Bool)performNotOptedInBOMScan;	// IMP=0x0010000000ef55d6
- (_Bool)poweredOn;	// IMP=0x0010000000ef55ab
- (void)setOptedIn:(_Bool)arg1;	// IMP=0x0010000000ef557c
- (_Bool)getOptedIn;	// IMP=0x0010000000ef5551
- (_Bool)isScanning;	// IMP=0x0010000000ef5526
- (_Bool)stopBTFindingScan;	// IMP=0x0010000000ef54fb
- (_Bool)startBTFindingScan;	// IMP=0x0010000000ef54d0
- (_Bool)performTemporaryHawkeyeLowEnergyScan;	// IMP=0x0010000000ef54a5
- (_Bool)stopTemporaryLongAggressiveScan;	// IMP=0x0010000000ef547a
- (_Bool)performTemporaryLongAggressiveScan;	// IMP=0x0010000000ef544f
- (_Bool)performTemporaryAggressiveScan;	// IMP=0x0010000000ef5424
- (void)dealloc;	// IMP=0x0010000000ef53c0
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 optedIn:(_Bool)arg3;	// IMP=0x0010000000ef524b
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000ef5236

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
