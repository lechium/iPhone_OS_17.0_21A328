//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _VNUnspecifiedOperationPoints
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x008000000012490e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012444c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000124446
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001243fb
- (_Bool)getClassificationMetrics:(id *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001243ec
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000124384
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000124352
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000124320
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001242ee
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001242bc

@end

