//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ESDMetafileBlipContext
{
    unsigned int mCb;	// 28 = 0x1c
    unsigned int defaultHeaderSize;	// 32 = 0x20
}

@property unsigned int defaultHeaderSize; // @synthesize defaultHeaderSize;
- (_Bool)loadDelayedNode:(id)arg1;	// IMP=0x00000000000f5c48
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 uncompressed:(unsigned int)arg3 stream:(struct SsrwOOStream *)arg4 streamID:(unsigned int)arg5;	// IMP=0x00000000000df76b

@end

