//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLContextManagerElevationProfile, CLMeanSeaLevelPressureData, NSMutableArray;
@protocol CLBarometerCalibrationContextClient, CLIntersiloUniverse;

@interface CLMeanSeaLevelPressureEstimator : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLBarometerCalibrationContextClient> _delegate;	// 16 = 0x10
    void *_dataBuffers;	// 24 = 0x18
    NSMutableArray *_meanSeaLevelPressureArray;	// 32 = 0x20
    NSMutableArray *_increasedUncertaintyDueToAltitudeArray;	// 40 = 0x28
    CLContextManagerElevationProfile *_elevationProfileContextManager;	// 48 = 0x30
    CLMeanSeaLevelPressureData *_currentEstimateMslp;	// 56 = 0x38
    CLMeanSeaLevelPressureData *_inVisitRebasedMslp;	// 64 = 0x40
    unsigned char _cumulativeNumber;	// 72 = 0x48
    double _cumulativeTimestamp;	// 80 = 0x50
    double _cumulativeStartTime;	// 88 = 0x58
    double _lastTimestampSavedMslpForRecovery;	// 96 = 0x60
    double _cumulativeUncertainty;	// 104 = 0x68
    double _cumulativeMeanSeaLevelPressure;	// 112 = 0x70
    float _gpMinVerticalScale;	// 120 = 0x78
    _Bool _logInitialHistoricalMeanSeaLevelPressure;	// 124 = 0x7c
    double _rateToRefreshHistoricalMeanSeaLevelPressure;	// 128 = 0x80
    double _gpHorizontalInVisitScale;	// 136 = 0x88
    double _gpHorizontalOutVisitScale;	// 144 = 0x90
    double _cumulativePressureMeasurement;	// 152 = 0x98
    struct unique_ptr<CLMotionNotifier::SiloDispatcher<CLBarometerCalibration_Types::CMMeanSeaLevelPressure>, std::default_delete<CLMotionNotifier::SiloDispatcher<CLBarometerCalibration_Types::CMMeanSeaLevelPressure>>> _mslpDispatcher;	// 160 = 0xa0
    _Bool _inVisitStatus;	// 168 = 0xa8
    double _lastRefreshTimestamp;	// 176 = 0xb0
    double _exitVisitTimestamp;	// 184 = 0xb8
}

- (id).cxx_construct;	// IMP=0x0020000000eaf348
- (void).cxx_destruct;	// IMP=0x0010000000eaf321
@property(nonatomic) _Bool inVisitStatus; // @synthesize inVisitStatus=_inVisitStatus;
@property(nonatomic) double cumulativeStartTime; // @synthesize cumulativeStartTime=_cumulativeStartTime;
@property(nonatomic) double exitVisitTimestamp; // @synthesize exitVisitTimestamp=_exitVisitTimestamp;
- (void);	// IMP=0x0010000000eaf2c9
@property(nonatomic) double lastRefreshTimestamp; // @synthesize lastRefreshTimestamp=_lastRefreshTimestamp;
- (void)retrieveMeanSeaLevelPressureEstimatorState;	// IMP=0x0010000000eae722
- (void)saveInVisitStateToPlist;	// IMP=0x0010000000eae4da
- (void)saveInVisitRebasedMslpToPlist;	// IMP=0x0010000000eae14b
- (void)saveMeanSeaLevelPressureArrayToPlist;	// IMP=0x0010000000eadc1b
- (void)clearMeanSeaLevelPressureArrayInPlist;	// IMP=0x0010000000eada0f
- (void)clearInVisitRebasedMslpInPlist;	// IMP=0x0010000000ead81c
- (void)resetInVisitRebasedMslp;	// IMP=0x0010000000ead62c
- (void)onMslp:(const struct CMMeanSeaLevelPressure *)arg1;	// IMP=0x0010000000ead3bf
- (void)writeInitialHistoricalMeanSeaLevelPressureToMslwithTimestamp:(double)arg1;	// IMP=0x0010000000eacf0d
- (void)updateHistoricalMeanSeaLevelPressureArray:(id)arg1 withRebaseTag:(_Bool)arg2;	// IMP=0x0010000000eac598
- (void)getLastHistoricalMeanSeaLevelPressureData:(double *)arg1;	// IMP=0x0010000000eac4da
- (void)updateUncertinatyAndSendCurrentEstimateMeanSeaLevelPressure;	// IMP=0x0010000000eac0c5
- (void)getAndSendCurrentEstimateMeanSeaLevelPressure;	// IMP=0x0010000000eac07d
- (void)refreshHistoricalMeanSeaLevelPressureWithStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x0010000000eab6a2
- (void)getMslpDriftRate:(double *)arg1;	// IMP=0x0010000000eab5f1
- (_Bool)getLastPressureSample:(double *)arg1;	// IMP=0x0010000000eab2e0
- (void)gaussianProcess:(id)arg1;	// IMP=0x0010000000ea9162
- (id)getEstimatedMeanSeaLevelPressure;	// IMP=0x0010000000ea8ed5
- (void)printMeanSeaLevelPressureElement:(id)arg1 withPrePhrase:(basic_string_d1f930f6)arg2;	// IMP=0x0010000000ea8bd0
- (void)printMeanSeaLevelPressureArray:(id)arg1 withPrePhrase:(basic_string_d1f930f6)arg2;	// IMP=0x0010000000ea7ddf
- (void)dealloc;	// IMP=0x0010000000ea7d3e
- (id)initWithContextManager:(id)arg1 andUniverse:(id)arg2 andDelegate:(id)arg3 andBuffers:(void *)arg4;	// IMP=0x0010000000ea78b0

@end

