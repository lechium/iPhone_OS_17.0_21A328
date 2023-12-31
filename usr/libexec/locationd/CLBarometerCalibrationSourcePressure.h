//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBarometerCalibrationSourcePressure
{
    struct unique_ptr<CLMotionNotifier::SiloDispatcher<CLBarometerCalibration_Types::CMKFFilteredPressureSample>, std::default_delete<CLMotionNotifier::SiloDispatcher<CLBarometerCalibration_Types::CMKFFilteredPressureSample>>> _kfFilteredPressureDispatcher;	// 32 = 0x20
    double _lastPressureBufferTimestamp;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0020000000ed8f6b
- (void).cxx_destruct;	// IMP=0x0010000000ed8f43
- (void)onKFFilteredPressure:(const struct CMKFFilteredPressureSample *)arg1;	// IMP=0x0010000000ed8a45
- (void)disableSource;	// IMP=0x0010000000ed89f5
- (void)enableSource;	// IMP=0x0010000000ed899d
- (void)dealloc;	// IMP=0x0010000000ed894e
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000ed8860

@end

