//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKAnimateWarp : SKAction
{
    struct SKCAnimateMesh *_mycaction;	// 8 = 0x8
}

+ (id)animateWithWarps:(id)arg1 times:(id)arg2 restore:(_Bool)arg3;	// IMP=0x0060000000024b76
+ (id)animateWithWarps:(id)arg1 times:(id)arg2;	// IMP=0x0060000000024b4a
+ (id)warpTo:(id)arg1 duration:(double)arg2;	// IMP=0x00600000000249f2
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000248e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025659
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025337
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025268
- (id)init;	// IMP=0x00000000000248e8

@end

