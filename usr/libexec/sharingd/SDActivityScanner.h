//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSContinuity, NSMutableDictionary, NSObject, NSString, SDStatusMonitor;
@protocol OS_dispatch_source, OS_os_transaction;

@interface SDActivityScanner
{
    unsigned long long _stateHandle;	// 8 = 0x8
    unsigned char _versionByte;	// 16 = 0x10
    SDStatusMonitor *_monitor;	// 24 = 0x18
    IDSContinuity *_continuity;	// 32 = 0x20
    unsigned long long _scanTypes;	// 40 = 0x28
    _Bool _scannerEnabled;	// 48 = 0x30
    _Bool _isScanning;	// 49 = 0x31
    NSObject<OS_os_transaction> *_scanningTransaction;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_stopScanLostDeviceTimer;	// 64 = 0x40
    NSMutableDictionary *_deviceIdentifierToDeviceRecord;	// 72 = 0x48
    NSMutableDictionary *_deviceIdentifierToLostDeviceTimers;	// 80 = 0x50
}

+ (id)sharedScanner;	// IMP=0x00200000001ced10
- (void).cxx_destruct;	// IMP=0x00200000001d252e
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001d2310
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x00100000001d21eb
- (void)didLosePeerTimer:(id)arg1;	// IMP=0x00100000001d2144
- (void)lostAllDevices;	// IMP=0x00100000001d1f5a
- (void)didLosePeer:(id)arg1;	// IMP=0x00100000001d1c6e
- (void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;	// IMP=0x00100000001d1b89
- (void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 withError:(id)arg3;	// IMP=0x00100000001d1a22
- (void)continuity:(id)arg1 didStopScanningForType:(long long)arg2;	// IMP=0x00100000001d1934
- (void)continuity:(id)arg1 didStartScanningForType:(long long)arg2;	// IMP=0x00100000001d1860
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x00100000001d15ba
- (void)consoleUserChanged:(id)arg1;	// IMP=0x00100000001d14bb
- (void)systemHasPoweredOn:(id)arg1;	// IMP=0x00100000001d13f6
- (void)systemWillSleep:(id)arg1;	// IMP=0x00100000001d134d
- (void)resetStateRequested:(id)arg1;	// IMP=0x00100000001d133b
- (void)removeObservers;	// IMP=0x00100000001d12e8
- (void)addObservers;	// IMP=0x00100000001d121f
- (id)state;	// IMP=0x00100000001d0ff5
- (struct os_state_data_s *)dumpState;	// IMP=0x00100000001d0c58
- (void)initializeStateCaptureBlock;	// IMP=0x00100000001d0be7
- (void)connectionInvalidated:(id)arg1;	// IMP=0x00100000001d0b4e
- (void)connectionEstablished:(id)arg1;	// IMP=0x00100000001d08cd
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000001d08c5
- (id)remoteObjectInterface;	// IMP=0x00100000001d074a
- (id)exportedInterface;	// IMP=0x00100000001d072a
- (id)machServiceName;	// IMP=0x00100000001d071d
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d070b
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d06f9
- (void)handleNewAdvertisementDevice:(id)arg1 data:(id)arg2 receivedViaScanning:(_Bool)arg3 withSuccessHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001cffd8
- (void)nearbyServiceDevicesChanged:(id)arg1;	// IMP=0x00100000001cfda0
- (void)activityServiceDevicesChanged:(id)arg1;	// IMP=0x00100000001cf848
- (void)_createOSTransactionIfNeeded;	// IMP=0x00100000001cf80d
- (_Bool)restart;	// IMP=0x00100000001cefa8
- (void)stop;	// IMP=0x00100000001cef65
- (void)start;	// IMP=0x00100000001cef48
- (_Bool)shouldBoostScan;	// IMP=0x00100000001cef33
- (_Bool)shouldScanForCopyPaste;	// IMP=0x00100000001cef1f
- (_Bool)shouldScanForHandoff;	// IMP=0x00100000001cef0d
- (id)init;	// IMP=0x00100000001cedb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

