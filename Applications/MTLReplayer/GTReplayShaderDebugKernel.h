//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GTReplayShaderDebugKernel
{
    struct GTPoint3D _minThreadPositionInGrid;	// 40 = 0x28
    struct GTPoint3D _maxThreadPositionInGrid;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000005e9a
@property(nonatomic) struct GTPoint3D maxThreadPositionInGrid; // @synthesize maxThreadPositionInGrid=_maxThreadPositionInGrid;
@property(nonatomic) struct GTPoint3D minThreadPositionInGrid; // @synthesize minThreadPositionInGrid=_minThreadPositionInGrid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000005f73
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000005ea2

@end

