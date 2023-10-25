//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, VCVideoStreamRateControlProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRateController : NSObject
{
    id <VCVideoStreamRateControlProtocol> _rateControl;	// 8 = 0x8
    int _algorithm;	// 16 = 0x10
    unsigned short _maxTierIndex;	// 20 = 0x14
    unsigned short _minTierIndex;	// 22 = 0x16
    unsigned short _operatingTierIndex;	// 24 = 0x18
    unsigned int _minBitrate;	// 28 = 0x1c
    unsigned int _maxBitrate;	// 32 = 0x20
    unsigned int _targetBitrate;	// 36 = 0x24
    double _rateControlTime;	// 40 = 0x28
    double _rateControlInterval;	// 48 = 0x30
    unsigned int _previousRTPTimestamp;	// 56 = 0x38
    unsigned int _averageTargetBitrate;	// 60 = 0x3c
    unsigned long long _accumulatedTargetDataSize;	// 64 = 0x40
    double _totalTime;	// 72 = 0x48
    double _videoFrozenDuration;	// 80 = 0x50
    _Bool _didVideoStall;	// 88 = 0x58
    void *_logDump;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_videoStreamRateControllerQueue;	// 104 = 0x68
}

@property(readonly, nonatomic) unsigned int maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(readonly, nonatomic) unsigned int minBitrate; // @synthesize minBitrate=_minBitrate;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
- (id)className;	// IMP=0x000000000034115d
- (void)releaseLogDumpFile;	// IMP=0x0000000000341094
- (void)createLogDumpFile:(unsigned int)arg1;	// IMP=0x0000000000340fec
- (void)updateAverageTargetBitrate:(unsigned int)arg1 interval:(double)arg2;	// IMP=0x0000000000340f48
- (void)setOperatingTierIndexWithBitrate:(unsigned int)arg1;	// IMP=0x0000000000340d3e
- (unsigned short)maxTierIndex:(unsigned int)arg1;	// IMP=0x0000000000340cbb
- (unsigned short)minTierIndex:(unsigned int)arg1;	// IMP=0x0000000000340c2f
@property(readonly, nonatomic) double nowrdAcc;
@property(readonly, nonatomic) double nowrdShort;
@property(readonly, nonatomic) double nowrd;
@property(readonly, nonatomic) double owrd;
- (void)updateVideoStall:(_Bool)arg1 withStallDuration:(unsigned int)arg2;	// IMP=0x0000000000340b34
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;	// IMP=0x0000000000340a4d
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingBitrate:(unsigned int)arg4 averageReceivedBitrate:(unsigned int)arg5;	// IMP=0x00000000003407b0
- (void)setRateControlInterval:(double)arg1;	// IMP=0x000000000034071e
- (void)setMaxTargetBitrate:(unsigned int)arg1 minTargetBitrate:(unsigned int)arg2;	// IMP=0x0000000000340623
- (void)dealloc;	// IMP=0x00000000003405af
- (id)initWithDumpID:(unsigned int)arg1;	// IMP=0x000000000034040e

@end
