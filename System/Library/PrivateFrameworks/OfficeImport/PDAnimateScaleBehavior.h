//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PDAnimateScaleBehavior
{
    struct CGPoint mTo;	// 184 = 0xb8
    struct CGPoint mFrom;	// 200 = 0xc8
    struct CGPoint mBy;	// 216 = 0xd8
    _Bool mHasTo;	// 232 = 0xe8
    _Bool mHasFrom;	// 233 = 0xe9
    _Bool mHasBy;	// 234 = 0xea
}

- (unsigned long long)hash;	// IMP=0x000000000043cc13
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043ca4f
- (void)setBy:(struct CGPoint)arg1;	// IMP=0x000000000022b789
- (struct CGPoint)by;	// IMP=0x000000000043ca37
- (_Bool)hasBy;	// IMP=0x000000000043ca27
- (void)setFrom:(struct CGPoint)arg1;	// IMP=0x000000000021e658
- (struct CGPoint)from;	// IMP=0x000000000043ca0f
- (_Bool)hasFrom;	// IMP=0x000000000043c9ff
- (void)setTo:(struct CGPoint)arg1;	// IMP=0x000000000021e67b
- (struct CGPoint)to;	// IMP=0x000000000043c9e7
- (_Bool)hasTo;	// IMP=0x000000000043c9d7
- (id)init;	// IMP=0x00000000001d54d4

@end

