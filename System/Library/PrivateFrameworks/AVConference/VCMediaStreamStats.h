//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaStreamStats : NSObject
{
    struct tagHANDLE *_summerHandle;	// 8 = 0x8
    double _lastRecordingTime;	// 16 = 0x10
    unsigned int _maxBitrateKbps;	// 24 = 0x18
    unsigned int _minBitrateKbps;	// 28 = 0x1c
    double _maxFramerate;	// 32 = 0x20
    double _minFramerate;	// 40 = 0x28
    unsigned short _maxFrameDurationMillis;	// 48 = 0x30
}

@property(nonatomic) unsigned short maxFrameDurationMillis; // @synthesize maxFrameDurationMillis=_maxFrameDurationMillis;
@property(nonatomic) double maxFramerate; // @synthesize maxFramerate=_maxFramerate;
@property(nonatomic) double minFramerate; // @synthesize minFramerate=_minFramerate;
@property(nonatomic) unsigned int maxBitrateKbps; // @synthesize maxBitrateKbps=_maxBitrateKbps;
@property(nonatomic) unsigned int minBitrateKbps; // @synthesize minBitrateKbps=_minBitrateKbps;
- (unsigned int)getBitrateKbpsSinceTime:(double)arg1;	// IMP=0x00000000001998ac
- (double)getFramerateSinceTime:(double)arg1;	// IMP=0x0000000000199837
- (void)updateMinMaxSinceTime:(double)arg1;	// IMP=0x00000000001997d4
@property(readonly, nonatomic) unsigned int bitrateKbps;
@property(readonly, nonatomic) double framerate;
- (void)recordDataWithSize:(double)arg1 atTime:(double)arg2;	// IMP=0x000000000019971d
- (void)dealloc;	// IMP=0x00000000001996b6
- (id)init;	// IMP=0x00000000001995df

@end
