//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GTReplayRaytraceRequest
{
    CDUnknownBlockType _streamHandler;	// 8 = 0x8
    unsigned long long _streamRef;	// 16 = 0x10
    CDUnion_afa92939 _dispatchUID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000007d5d
- (void).cxx_destruct;	// IMP=0x0000000000007f8b
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
@property(copy, nonatomic) CDUnknownBlockType streamHandler; // @synthesize streamHandler=_streamHandler;
- (id)description;	// IMP=0x0000000000007ea7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007e10
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007d65

@end

