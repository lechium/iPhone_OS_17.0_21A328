//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface COMTAlarmReadAction
{
    NSArray *_targetIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000027bac
- (void).cxx_destruct;	// IMP=0x0000000000027bd0
@property(readonly, copy, nonatomic) NSArray *targetIdentifiers; // @synthesize targetIdentifiers=_targetIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027bb4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027b11
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027a50
- (id)initWithTargetIdentifiers:(id)arg1;	// IMP=0x00000000000279d6

@end

