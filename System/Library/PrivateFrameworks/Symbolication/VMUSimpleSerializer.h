//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VMUSimpleSerializer
{
    void *_map;	// 40 = 0x28
    unsigned int _internCursor;	// 48 = 0x30
}

- (id)copyContiguousData;	// IMP=0x0000000000056afe
- (void)_serializeValues:(unsigned int *)arg1 count:(unsigned int)arg2;	// IMP=0x0000000000056acb
- (unsigned int)serializeNullTerminatedBytes:(const char *)arg1;	// IMP=0x00000000000569a5
- (unsigned int)serializeString:(id)arg1;	// IMP=0x0000000000056920
- (void)serialize64:(unsigned long long)arg1;	// IMP=0x00000000000568c4
- (void)serialize32:(unsigned int)arg1;	// IMP=0x0000000000056823
- (void)dealloc;	// IMP=0x0000000000056796
- (id)init;	// IMP=0x000000000005670c

@end
