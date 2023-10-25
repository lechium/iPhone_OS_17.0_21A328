//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedVector : NSObject
{
    double *_vector;	// 8 = 0x8
    unsigned long long _length;	// 16 = 0x10
}

+ (id)zeroCompatibleWithVector:(id)arg1;	// IMP=0x0010000001767cf7
+ (id)epsilonCompatibleWithVector:(id)arg1;	// IMP=0x0010000001767c81
+ (id)valueWithVector:(const double *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000001767998
+ (id)valueWithVectorMutator:(CDUnknownBlockType)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000001767938
@property(readonly, copy) NSString *debugDescription;
- (id)multiplyByVector:(id)arg1;	// IMP=0x00000000017680bb
- (id)multiplyByScalar:(double)arg1;	// IMP=0x0000000001768085
- (id)addVector:(id)arg1;	// IMP=0x000000000176804a
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_500c0369)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;	// IMP=0x0000000001767e09
- (void)reinitWithVector:(id)arg1;	// IMP=0x0000000001767de9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001767dbc
- (id)getValue;	// IMP=0x0000000001767c04
- (_Bool)isUndefined;	// IMP=0x0000000001767ba4
- (_Bool)isCompatibleWith:(id)arg1;	// IMP=0x0000000001767b93
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;	// IMP=0x0000000001767ae6
- (id)interpolateTo:(id)arg1 progress:(double)arg2;	// IMP=0x0000000001767abf
@property(readonly, nonatomic) const double *vector;
- (void)dealloc;	// IMP=0x0000000001767a7b
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x0000000001767a19

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
