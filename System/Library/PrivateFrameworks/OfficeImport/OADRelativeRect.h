//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADRelativeRect : NSObject
{
    float mLeft;	// 8 = 0x8
    float mTop;	// 12 = 0xc
    float mRight;	// 16 = 0x10
    float mBottom;	// 20 = 0x14
}

- (id)description;	// IMP=0x0000000000303e78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d8420
- (unsigned long long)hash;	// IMP=0x0000000000162b83
- (void)setBottom:(float)arg1;	// IMP=0x000000000010d528
- (float)bottom;	// IMP=0x00000000000b13ef
- (void)setRight:(float)arg1;	// IMP=0x0000000000104036
- (float)right;	// IMP=0x00000000000b13d9
- (void)setTop:(float)arg1;	// IMP=0x000000000010d500
- (float)top;	// IMP=0x00000000000b13e4
- (void)setLeft:(float)arg1;	// IMP=0x000000000010400e
- (float)left;	// IMP=0x00000000000b13ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001db3be
- (id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4;	// IMP=0x000000000002616a
- (id)init;	// IMP=0x0000000000103fd3

@end

