//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSSet, NSString;

@interface _TtC8Freeform21CRLBoardItemSelection
{
    MISSING_TYPE *boardItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0040000000667460
- (id)init;	// IMP=0x0010000000667400
@property(nonatomic, readonly) NSString *description;
- (_Bool)containsKindOfClass:(Class)arg1;	// IMP=0x0010000000667170
- (id)infosOfClass:(Class)arg1;	// IMP=0x0010000000666d70
@property(nonatomic, readonly) long long itemCount;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000666630
- (id)initWithBoardItems:(id)arg1;	// IMP=0x00100000006664d0
@property(nonatomic, copy) NSSet *boardItems;

@end
