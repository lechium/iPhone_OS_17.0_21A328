//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FPNSURLBitVectorForBounce : NSObject
{
    struct __CFBitVector *_vector;	// 8 = 0x8
    int _bitCount;	// 16 = 0x10
}

@property(readonly, nonatomic) int bitCount; // @synthesize bitCount=_bitCount;
- (_Bool)foundAllAvailableBounceNumbers;	// IMP=0x0000000000047126
- (id)findNextAvailableBounceNumber;	// IMP=0x000000000004710f
- (id)findNextAvailableBounceNumberFromIndex:(int)arg1;	// IMP=0x00000000000470d2
- (void)markBounceNumberAsFound:(id)arg1;	// IMP=0x0000000000047054
- (id)init;	// IMP=0x0000000000046fe7

@end

