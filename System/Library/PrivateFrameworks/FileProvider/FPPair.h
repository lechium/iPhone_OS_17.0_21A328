//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FPPair : NSObject
{
    id _first;	// 8 = 0x8
    id _second;	// 16 = 0x10
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x00100000000aa53e
- (void).cxx_destruct;	// IMP=0x00000000000aa78c
@property(retain, nonatomic) id second; // @synthesize second=_second;
@property(retain, nonatomic) id first; // @synthesize first=_first;
- (id)description;	// IMP=0x00000000000aa708
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aa69c
- (_Bool)isEqualToPair:(id)arg1;	// IMP=0x00000000000aa630
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aa603
- (unsigned long long)hash;	// IMP=0x00000000000aa5c4

@end
