//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLWifiServiceAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000027cff6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000027cfdd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000027cf80
- (_Bool)syncgetSetAutoJoin:(_Bool)arg1;	// IMP=0x002000000027e04c
- (void)setBackgroundExitScanCount:(int)arg1;	// IMP=0x001000000027e034
- (void)setWifiPower:(_Bool)arg1;	// IMP=0x001000000027dfe4
- (_Bool)syncgetSetAllowBeingRanged:(const void *)arg1 enable:(_Bool)arg2;	// IMP=0x001000000027dfc6
- (_Bool)syncgetStartRangingWithPeers:(const void *)arg1 andTimeout:(double)arg2;	// IMP=0x001000000027dfa9
- (_Bool)syncgetStartScanWithParameters:(CDUnknownBlockType)arg1;	// IMP=0x001000000027deda
- (_Bool)syncgetStartScanWithType:(BOOL)arg1 lowPriority:(_Bool)arg2 lowLatency:(_Bool)arg3 passive:(_Bool)arg4 requester:(const char *)arg5 channels:(const void *)arg6;	// IMP=0x001000000027de38
- (_Bool)syncgetStartScanWithType:(BOOL)arg1 lowPriority:(_Bool)arg2 passive:(_Bool)arg3 requester:(const char *)arg4;	// IMP=0x001000000027dd6e
- (void)clearExitAndEntryScanNetworks:(_Bool)arg1;	// IMP=0x001000000027dc90
- (_Bool)syncgetHostedNetwork:(void *)arg1;	// IMP=0x001000000027db3c
- (_Bool)syncgetAssociatedNetwork:(void *)arg1;	// IMP=0x001000000027d9c9
- (void)fetchScanResultWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d922
- (CDUnknownBlockType)syncgetBackgroundScanCacheResult;	// IMP=0x001000000027d881
- (CDUnknownBlockType)syncgetScanResult;	// IMP=0x001000000027d74f
- (CDUnknownBlockType)syncgetScanStats;	// IMP=0x001000000027d640
- (void)setScannerExitScanNetworks:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d5ea
- (void)setScannerEntryScanNetworks:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d594
- (void)setEntryScanNetworks:(CDUnknownBlockType)arg1 andExitScanNetworks:(CDUnknownBlockType)arg2;	// IMP=0x001000000027d40e
- (void)programEntryScanNetworks:(CDUnknownBlockType)arg1 andExitScanNetworks:(CDUnknownBlockType)arg2;	// IMP=0x001000000027d3a6
- (_Bool)syncgetIsSimulationEnabled;	// IMP=0x001000000027d388
- (_Bool)syncgetIsAvailable;	// IMP=0x001000000027d336
- (_Bool)syncgetIsWifiPoweredWithStatus:(_Bool *)arg1;	// IMP=0x001000000027d2f6
- (_Bool)syncgetIsWifiPowered;	// IMP=0x001000000027d2c4
- (_Bool)syncgetIsWifiTrackingAvailable;	// IMP=0x001000000027d29e
- (void)fetchIsWifiAvailableWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d257
- (_Bool)syncgetIsAssociated;	// IMP=0x001000000027d210
- (void)fetchIsAssociatedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d1ab
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d183
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000027d156
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d12e
- (void *)adaptee;	// IMP=0x001000000027d0fb
- (void)endService;	// IMP=0x001000000027d0e0
- (void)beginService;	// IMP=0x001000000027d08f
- (id)init;	// IMP=0x001000000027d052

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
