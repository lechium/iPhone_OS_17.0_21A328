//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLSerializablePredictedWalkDistanceBout : NSObject
{
    struct CLPredictedWalkDistanceBoutEntry _bout;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000c15617
- (id).cxx_construct;	// IMP=0x0020000000c158be
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000c1573d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000c1561f
- (void)getPredictedWalkDistanceBout:(struct CLPredictedWalkDistanceBoutEntry *)arg1;	// IMP=0x0010000000c155d2
- (id)initWithPredictedWalkDistanceBout:(const struct CLPredictedWalkDistanceBoutEntry *)arg1;	// IMP=0x0010000000c1555a

@end

