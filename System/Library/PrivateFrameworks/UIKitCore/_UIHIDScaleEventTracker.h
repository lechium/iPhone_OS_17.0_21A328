//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIHIDScaleEventTracker : NSObject
{
    double _scaleZ;	// 8 = 0x8
    unsigned long long _compositePhase;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long compositePhase; // @synthesize compositePhase=_compositePhase;
@property(readonly, nonatomic) double scaleZ; // @synthesize scaleZ=_scaleZ;
- (void)_setCompositePhase:(unsigned long long)arg1 withEvent:(struct __IOHIDEvent *)arg2;	// IMP=0x0000000001096e6e
- (void)reset;	// IMP=0x0000000001096e61
- (void)updateWithHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000001096d18

@end

