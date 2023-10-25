//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BiasEstimatorOutputs : NSObject
{
    NSArray *_outProbabilities;	// 8 = 0x8
    double _rawRange;	// 16 = 0x10
    double _correctedRange;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000103a3
- (void).cxx_destruct;	// IMP=0x000000000001077c
@property(nonatomic) double correctedRange; // @synthesize correctedRange=_correctedRange;
@property(nonatomic) double rawRange; // @synthesize rawRange=_rawRange;
@property(copy, nonatomic) NSArray *outProbabilities; // @synthesize outProbabilities=_outProbabilities;
- (id)populateOrderedBiasEstimatorOutputs;	// IMP=0x0000000000010628
- (id)description;	// IMP=0x0000000000010488
- (unsigned long long)hash;	// IMP=0x00000000000103ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010219
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000100d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001003f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fff7
- (id)initWithBiasEstimatorOutputs:(id)arg1;	// IMP=0x000000000000fe69
- (id)initWithOuputProbabilities:(id)arg1 rawRange:(double)arg2 correctedRange:(double)arg3;	// IMP=0x000000000000fb63

@end
