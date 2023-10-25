//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumMeter
{
    unsigned short _audioSpectrumBinCount;	// 88 = 0x58
    struct _VCAudioPowerSpectrumMeterRealtimeContext _realtimeContext;	// 96 = 0x60
}

@property(readonly, nonatomic) void *realtimeContext;
- (void)unregisterAllStreams;	// IMP=0x00000000001536fd
- (void)releaseAudioPowerSpectrumForStreamToken:(id)arg1;	// IMP=0x000000000015358b
- (void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 powerSpectrumKey:(id)arg2 spectrumSource:(id)arg3;	// IMP=0x0000000000152fec
- (void)dealloc;	// IMP=0x000000000015286a
- (id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3;	// IMP=0x00000000001526e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
