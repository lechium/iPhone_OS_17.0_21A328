//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CLAvengerReconciler, NSString;
@protocol CLAvengerScannerClientControllerPowerAssertionDelegateProtocol, CLAvengerScannerClientDelegateProtocol, OS_dispatch_queue;

@interface CLAvengerScannerClientController : NSObject
{
    _Bool _centralManagerPoweredOn;	// 8 = 0x8
    _Bool _optedIn;	// 9 = 0x9
    _Bool _aggressiveToAggressiveLongUpgradeRequested;	// 10 = 0xa
    _Bool _bomScanEnabled;	// 11 = 0xb
    unsigned int _currentUseCase;	// 12 = 0xc
    id <CLAvengerScannerClientDelegateProtocol> _delegate;	// 16 = 0x10
    CBCentralManager *_centralManager;	// 24 = 0x18
    CLAvengerReconciler *_reconciler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <CLAvengerScannerClientControllerPowerAssertionDelegateProtocol> _powerAssertionDelegate;	// 48 = 0x30
    NSString *_clientIdentifier;	// 56 = 0x38
}

+ (_Bool)shouldHoldPowerAssertionForScan:(unsigned int)arg1;	// IMP=0x0020000000ef1d73
+ (_Bool)isDefaultScanType:(unsigned int)arg1;	// IMP=0x0010000000ef17f8
- (void).cxx_destruct;	// IMP=0x0020000000ef51f1
@property(nonatomic) _Bool bomScanEnabled; // @synthesize bomScanEnabled=_bomScanEnabled;
@property(nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) _Bool aggressiveToAggressiveLongUpgradeRequested; // @synthesize aggressiveToAggressiveLongUpgradeRequested=_aggressiveToAggressiveLongUpgradeRequested;
@property(nonatomic) __weak id <CLAvengerScannerClientControllerPowerAssertionDelegateProtocol> powerAssertionDelegate; // @synthesize powerAssertionDelegate=_powerAssertionDelegate;
@property(nonatomic) _Bool optedIn; // @synthesize optedIn=_optedIn;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) CLAvengerReconciler *reconciler; // @synthesize reconciler=_reconciler;
@property(nonatomic) _Bool centralManagerPoweredOn; // @synthesize centralManagerPoweredOn=_centralManagerPoweredOn;
@property(nonatomic) unsigned int currentUseCase; // @synthesize currentUseCase=_currentUseCase;
@property(nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) __weak id <CLAvengerScannerClientDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)initializeClientRequestsViewsWithZeroValues:(id)arg1;	// IMP=0x0010000000ef4f18
- (void)submitClientRequestsEvent:(id)arg1 client:(id)arg2 scanType:(id)arg3;	// IMP=0x0010000000ef4cfa
- (_Bool)performNotOptedInBOMScan;	// IMP=0x0010000000ef4c5a
- (_Bool)poweredOn;	// IMP=0x0010000000ef4c48
- (_Bool)getOptedIn;	// IMP=0x0010000000ef4bf9
- (unsigned int)defaultUseCase;	// IMP=0x0010000000ef4baf
- (_Bool)isScanning;	// IMP=0x0010000000ef4b98
- (_Bool)stopBTFindingScan;	// IMP=0x0010000000ef4a3b
- (_Bool)startBTFindingScan;	// IMP=0x0010000000ef48c7
- (_Bool)performTemporaryHawkeyeLowEnergyScan;	// IMP=0x0010000000ef4753
- (_Bool)stopTemporaryLongAggressiveScan;	// IMP=0x0010000000ef4375
- (_Bool)performTemporaryLongAggressiveScan;	// IMP=0x0010000000ef41e6
- (_Bool)performTemporaryAggressiveScan;	// IMP=0x0010000000ef4072
- (void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2;	// IMP=0x0010000000ef3ee0
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0010000000ef3bc0
- (void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;	// IMP=0x0010000000ef38f4
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0010000000ef3648
- (id)parseAndNotifyDelegateOnDiscoveredPeripheral:(id)arg1 RSSI:(id)arg2;	// IMP=0x0010000000ef3473
- (void)startScanningWithUseCase:(unsigned int)arg1 isScanUpgrade:(_Bool)arg2;	// IMP=0x0010000000ef2d1f
- (void)startScanningWithUseCase:(unsigned int)arg1;	// IMP=0x0010000000ef2d0b
- (void)scanCompletedWithError:(id)arg1 totalRXTime:(id)arg2;	// IMP=0x0000000000ef266c
- (void)stopScan;	// IMP=0x0010000000ef1d95
- (_Bool)isLegacyAggressiveOrDefaultScanning;	// IMP=0x0010000000ef1d3a
- (_Bool)isDefaultScanning;	// IMP=0x0010000000ef1d1b
- (_Bool)isAggressiveLongScanning;	// IMP=0x0010000000ef1d0b
- (_Bool)isLegacyAggressiveScanning;	// IMP=0x0010000000ef1cfb
- (_Bool)isAggressiveScanning;	// IMP=0x0010000000ef1ce7
- (void)dealloc;	// IMP=0x0010000000ef1b7b
- (id)initWithDelegate:(id)arg1 centralManager:(id)arg2 optedIn:(_Bool)arg3 reconciler:(id)arg4 queue:(id)arg5 powerAssertionDelegate:(id)arg6;	// IMP=0x0010000000ef1816

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

