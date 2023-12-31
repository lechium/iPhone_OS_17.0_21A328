//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BiasEstimatorFeatures, BiasEstimatorOutputs;

__attribute__((visibility("hidden")))
@interface UWBSignalFeatures : NSObject
{
    BiasEstimatorFeatures *_inputFeatures;	// 8 = 0x8
    BiasEstimatorOutputs *_outputs;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001078c
- (void).cxx_destruct;	// IMP=0x0000000000010e30
@property(copy, nonatomic) BiasEstimatorOutputs *outputs; // @synthesize outputs=_outputs;
@property(copy, nonatomic) BiasEstimatorFeatures *inputFeatures; // @synthesize inputFeatures=_inputFeatures;
- (id)orderedBiasEstimatorFeatutes;	// IMP=0x0000000000010d41
- (unsigned long long)hash;	// IMP=0x0000000000010d02
- (id)description;	// IMP=0x0000000000010c3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010ad9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001099e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010929
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000108e1
- (id)initWithUWBSignalFeatures:(id)arg1;	// IMP=0x0000000000010794

@end

