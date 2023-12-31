//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADDashStop : NSObject
{
    float mDash;	// 8 = 0x8
    float mSpace;	// 12 = 0xc
}

+ (void)addStopWithDash:(float)arg1 space:(float)arg2 toArray:(id)arg3;	// IMP=0x001000000031c33f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031c2bb
- (unsigned long long)hash;	// IMP=0x000000000031c26a
- (float)space;	// IMP=0x000000000016290c
- (float)dash;	// IMP=0x0000000000162901
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031c219
- (id)initWithDash:(float)arg1 space:(float)arg2;	// IMP=0x00000000001628af

@end

