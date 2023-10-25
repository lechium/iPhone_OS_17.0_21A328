//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingUniformsCacheKey : NSObject
{
    unsigned long long _hashValue;	// 8 = 0x8
}

+ (id)keyForRing:(id)arg1 context:(id)arg2;	// IMP=0x0060000000014ff7
@property(readonly, nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001514b
- (unsigned long long)hash;	// IMP=0x0000000000015141
- (id)initWithRing:(id)arg1 context:(id)arg2;	// IMP=0x0000000000015069

@end
