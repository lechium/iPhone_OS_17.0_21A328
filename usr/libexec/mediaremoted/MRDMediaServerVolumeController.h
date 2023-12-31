//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MRDMediaServerVolumeController
{
    _Bool;	// 8 = 0x8
    float _volumeValue;	// 12 = 0xc
    _Bool _isMutedValue;	// 16 = 0x10
    unsigned int _capabilitiesValue;	// 20 = 0x14
}

- (unsigned int)pbsVolumeControlCapabilities;	// IMP=0x0020000000123a75
- (_Bool)_platformHasNativeMuteSupport;	// IMP=0x0010000000123a6d
- (void)_postVolumeControlCapabilitiesDidChange:(unsigned int)arg1;	// IMP=0x00100000001239d0
- (void)_postIsMutedDidChange:(_Bool)arg1;	// IMP=0x0010000000123933
- (void)_postVolumeDidChange:(float)arg1;	// IMP=0x0010000000123893
- (void)_updateCapabilitiesValueCache;	// IMP=0x0010000000123752
- (void)_updateIsMutedValueCache;	// IMP=0x0010000000123690
- (void)_updateVolumeValueCache;	// IMP=0x0010000000123656
- (float)_volumeFromAVController;	// IMP=0x00100000001235bc
- (void)_reloadVolumeDataWithReason:(id)arg1;	// IMP=0x00100000001234e0
- (void)_initVolumeDataIfNeccessary;	// IMP=0x00100000001234bd
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001233c1
- (void)_forceEnableCECVolumeNotification:(id)arg1;	// IMP=0x0010000000123372
- (void)_avSessionMediaServicesResetNotification:(id)arg1;	// IMP=0x001000000012329c
- (void)_currentRouteHasVolumeControlDidChangeNotification:(id)arg1;	// IMP=0x001000000012324d
- (void)_systemMuteDidChange:(id)arg1;	// IMP=0x00100000001231fe
- (void)_systemVolumeDidChange:(id)arg1;	// IMP=0x0010000000123133
- (void)_tearDownNotifications;	// IMP=0x001000000012302e
- (void)_setupNotifications;	// IMP=0x0010000000122c31
- (id)_mediaServerController;	// IMP=0x0010000000122c16
- (void)adjustVolume:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000122c10
- (void)setIsMuted:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0010000000122a97
- (void)adjustVolumeWithStepAmount:(float)arg1 error:(id *)arg2;	// IMP=0x0010000000122a79
- (void)setVolume:(float)arg1 error:(id *)arg2;	// IMP=0x00100000001228d6
- (_Bool)isMuted;	// IMP=0x00100000001228af
- (float)currentVolume;	// IMP=0x0010000000122886
- (unsigned int)capabilities;	// IMP=0x001000000012285f
- (id)debugDescription;	// IMP=0x001000000012270c
- (void)dealloc;	// IMP=0x0010000000122697
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x0010000000122524

@end

