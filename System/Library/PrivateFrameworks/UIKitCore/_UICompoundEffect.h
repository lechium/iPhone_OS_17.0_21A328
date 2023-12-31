//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIVisualEffect.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICompoundEffect : UIVisualEffect
{
    NSArray *_effects;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000019b5d3
- (void).cxx_destruct;	// IMP=0x000000000019ba74
- (id)description;	// IMP=0x000000000019b9f5
- (long long)_expectedUsage;	// IMP=0x000000000019b91d
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x000000000019b7b6
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;	// IMP=0x000000000019b66f
- (id)_allEffects;	// IMP=0x000000000019b65a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019b5f8
- (unsigned long long)hash;	// IMP=0x000000000019b5db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019b556
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019b4ca
- (id)initWithEffects:(id)arg1;	// IMP=0x000000000019b262

@end

