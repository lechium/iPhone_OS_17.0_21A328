//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSUUID;

@interface _TtC8Freeform19CRLCommandSetLocked
{
    MISSING_TYPE *id;	// 1701667186 = 0x656d6172
    MISSING_TYPE *locked;	// 1866674035 = 0x6f432f73
}

- (void).cxx_destruct;	// IMP=0x00400000009c94d0
- (id)init;	// IMP=0x00100000009c9440
- (id)initWithBoardItem:(id)arg1 locked:(_Bool)arg2;	// IMP=0x00100000009c9220
- (id)initWithId:(id)arg1 locked:(_Bool)arg2;	// IMP=0x00100000009c9170
@property(nonatomic, readonly) _Bool locked; // @synthesize locked;
@property(nonatomic, readonly) NSUUID *id;

@end

