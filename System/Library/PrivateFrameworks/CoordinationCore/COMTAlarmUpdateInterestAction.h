//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface COMTAlarmUpdateInterestAction
{
    NSArray *_targetIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000025f3a
- (void).cxx_destruct;	// IMP=0x0000000000025f53
@property(readonly, copy, nonatomic) NSArray *targetIdentifiers; // @synthesize targetIdentifiers=_targetIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025e9f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025dd9
- (id)initWithTargetIdentifiers:(id)arg1;	// IMP=0x0000000000025d5f

@end

