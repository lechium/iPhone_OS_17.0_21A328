//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPCNNPoolingBlock
{
    int _px;	// 52 = 0x34
    int _py;	// 56 = 0x38
    int _chunk;	// 60 = 0x3c
}

+ (id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;	// IMP=0x006000000011503d
- (_Bool)useGPU;	// IMP=0x00000000001154f8
- (_Bool)supportGPU;	// IMP=0x00000000001154f0
- (int)forward;	// IMP=0x00000000001154e5
- (int)constructBlock:(id)arg1 context:(id)arg2;	// IMP=0x000000000011518b
- (id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;	// IMP=0x00000000001150ed

@end

