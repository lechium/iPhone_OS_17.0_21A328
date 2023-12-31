//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessPredicateImpl.h"

__attribute__((visibility("hidden")))
@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl
{
    int _platform;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0060000000026893
@property(readonly, nonatomic) int platform; // @synthesize platform=_platform;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000268c5
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000002689b
- (id)description;	// IMP=0x000000000002680f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000267a6
- (unsigned long long)hash;	// IMP=0x0000000000026767
- (id)processPredicate;	// IMP=0x000000000002674b
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x000000000002671e
- (id)initWithPlatform:(int)arg1;	// IMP=0x00000000000266bc

@end

