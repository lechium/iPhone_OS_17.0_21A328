//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9Coherence15CRStringEncoder : NSObject
{
    MISSING_TYPE *sequence;	// 0 = 0x0
    MISSING_TYPE *subsequence;	// 4325760 = 0x420180
    MISSING_TYPE *encoder;	// 11933 = 0x2e9d
}

- (void).cxx_destruct;	// IMP=0x000000000014d020
- (id)init;	// IMP=0x000000000014cfa0
- (void)setFromAddedByVersion:(id)arg1;	// IMP=0x000000000014cf50
- (void)setFromVersion:(id)arg1;	// IMP=0x000000000014cde0
- (void)setWithAddedByVersion:(id)arg1;	// IMP=0x000000000014cd70
- (void)setWithVersion:(id)arg1;	// IMP=0x000000000014cc10
- (_Bool)setStorage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014cbd0
- (void)finishSubstring;	// IMP=0x000000000014ca00
- (void)addChildWithId:(unsigned int)arg1;	// IMP=0x000000000014c700
- (void)setWithContentOptions:(long long)arg1;	// IMP=0x000000000014c500
- (void)setWithLength:(unsigned int)arg1;	// IMP=0x000000000014c320
- (void)addRemovedAddedById:(id)arg1 clock:(unsigned int)arg2;	// IMP=0x000000000014c270
- (void)addAddedById:(id)arg1 clock:(unsigned int)arg2;	// IMP=0x000000000014bf90
- (void)setCharWithId:(id)arg1 clock:(unsigned int)arg2;	// IMP=0x000000000014bf50

@end
