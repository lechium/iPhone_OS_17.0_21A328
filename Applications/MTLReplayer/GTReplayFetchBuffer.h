//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GTReplayFetchBuffer
{
    CDUnion_afa92939 _dispatchUID;	// 8 = 0x8
    unsigned long long _streamRef;	// 16 = 0x10
    struct GTRange _range;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000003880
@property(nonatomic) struct GTRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003972
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003888

@end

