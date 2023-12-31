//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLElevationThresholdManager : NSObject
{
    multimap_22d98a7a _elevationThresholdMap;	// 8 = 0x8
    float _hysteresisBand;	// 32 = 0x20
    struct ElevationAlertCurrentBounds _currentElevationThreshold;	// 36 = 0x24
}

- (id).cxx_construct;	// IMP=0x00200000005213ad
- (void).cxx_destruct;	// IMP=0x001000000052139b
- (void)clearShouldAlert;	// IMP=0x001000000052135a
- (void)updateInitializedThresholdsWithAltitude:(float)arg1;	// IMP=0x00100000005212b9
- (_Bool)updateWithAltitude:(float)arg1 andAccuracy:(float)arg2 upperBound:(float *)arg3 lowerBound:(float *)arg4;	// IMP=0x0010000000521202
- (void)thresholdUpdated:(struct ThresholdClient *)arg1 initialized:(_Bool)arg2 above:(_Bool)arg3;	// IMP=0x00100000005211e8
- (void)initializeThresholdsGivenAltitude:(float)arg1 andAccuracy:(float)arg2;	// IMP=0x0010000000520eaa
- (multimap_22d98a7a)getElevationThresholdProxyMap;	// IMP=0x0010000000520e8e
- (_Bool)removeClient:(byref id)arg1;	// IMP=0x0010000000520c11
- (void)insertClient:(byref id)arg1 withThreshold:(float)arg2;	// IMP=0x0010000000520a2c
- (void)thresholdBoundsForElevation:(float)arg1 andAccuracy:(float)arg2 upperBound:(float *)arg3 lowerBound:(float *)arg4;	// IMP=0x00100000005206f3
- (id)init;	// IMP=0x001000000052068c

@end

