//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFastIndexSet : NSObject
{
    struct variant<_UIBitSet<256>, _UISmallVector<unsigned short, 16>, std::vector<unsigned long>> _inOutIndexes;	// 16 = 0x10
}

+ (id)indexSet;	// IMP=0x0010000000777bb4
- (id).cxx_construct;	// IMP=0x000000000077a182
- (void).cxx_destruct;	// IMP=0x000000000077a14c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000779a49
- (unsigned long long)hash;	// IMP=0x00000000007798ff
- (id)description;	// IMP=0x0000000000779474
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000779116
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000077910b

@end

