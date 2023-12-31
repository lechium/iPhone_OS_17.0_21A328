//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLBarometerCalibrationTrack;

@interface CLContextManagerBiasEstimationScheduler
{
    CLBarometerCalibrationTrack *_currentTrack;	// 40 = 0x28
    double _lastTrackEndTime;	// 48 = 0x30
    double _biasEstimationTrackDataBufferSizeSeconds;	// 56 = 0x38
    double _biasEstimationTrackPeriodSeconds;	// 64 = 0x40
    double _timeSinceLastTrackStart;	// 72 = 0x48
    double _waitPeriodSeconds;	// 80 = 0x50
    unsigned long long _currentSource;	// 88 = 0x58
    struct map<CLBarometerCalibration_Types::Source, double, std::less<CLBarometerCalibration_Types::Source>, std::allocator<std::pair<const CLBarometerCalibration_Types::Source, double>>> _trackLengthSecondsForSource;	// 96 = 0x60
    float _staleBiasTrackLength;	// 120 = 0x78
    float _maximumBiasAge;	// 124 = 0x7c
    double _lastWetStateTimestamp;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x0020000000afa715
- (void).cxx_destruct;	// IMP=0x0010000000afa6f8
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x0010000000afa53c
- (_Bool)isRefDataAvailableBetweenStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x0010000000afa236
- (void)sendTrackAndScheduleNextTick:(double)arg1;	// IMP=0x0010000000af98d0
- (void)stepCountElevationNotification:(union NotificationData)arg1;	// IMP=0x0010000000af9729
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x0010000000af91a5
- (_Bool)shouldStartNewTrack:(unsigned long long)arg1;	// IMP=0x0010000000af9195
- (double)getTrackLengthSecondsForSource:(unsigned long long)arg1;	// IMP=0x0010000000af915d
- (void)dealloc;	// IMP=0x0010000000af90e0
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0010000000af8da0

@end

