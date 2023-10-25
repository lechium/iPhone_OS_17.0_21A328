//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBarometerCalibrationSourceSubmersionState
{
    struct unique_ptr<CLMotionNotifier::SiloDispatcher<CLWaterSubmersion_Types::CMSubmersionState>, std::default_delete<CLMotionNotifier::SiloDispatcher<CLWaterSubmersion_Types::CMSubmersionState>>> _submersionStateDispatcher;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00200000009ef522
- (void).cxx_destruct;	// IMP=0x00100000009ef4fa
- (void)onSubmersionState:(const struct CMSubmersionState *)arg1;	// IMP=0x00100000009ef215
- (void)disableSource;	// IMP=0x00100000009ef1c5
- (void)enableSource;	// IMP=0x00100000009eeff8
- (void)dealloc;	// IMP=0x00100000009eefa9
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000009eeed0

@end
