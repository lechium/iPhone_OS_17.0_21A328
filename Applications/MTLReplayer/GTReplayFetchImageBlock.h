//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GTReplayFetchImageBlock
{
    unsigned int _index;	// 8 = 0x8
    CDUnion_afa92939 _dispatchUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000003c40
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003cf3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003c48

@end
