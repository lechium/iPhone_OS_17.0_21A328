//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface OADCustomDash
{
    NSArray *mStops;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x006000000016279d
- (void).cxx_destruct;	// IMP=0x000000000031c7b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031c732
- (unsigned long long)hash;	// IMP=0x000000000031c70c
- (_Bool)areStopsOverridden;	// IMP=0x000000000031c6e5
- (void)setStops:(id)arg1;	// IMP=0x000000000016287b
- (id)stops;	// IMP=0x000000000031c69b
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000031c4d0
- (_Bool)isAnythingOverridden;	// IMP=0x000000000031c487
- (id)initWithDefaults;	// IMP=0x00000000001627cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031c3dc

@end

