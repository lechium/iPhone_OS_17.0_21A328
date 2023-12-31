//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPCNNConvBlockVector
{
    CDUnknownFunctionPointerType CalculateDotProductOfChunk;	// 112 = 0x70
}

+ (_Bool)isFilterSizeSupported:(int)arg1;	// IMP=0x00600000000b13fd
- (int)forward;	// IMP=0x00000000000b2a22
- (int)chunkFourForward;	// IMP=0x00000000000b1f9f
- (int)straightForwardForChunkFour;	// IMP=0x00000000000b19d7
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;	// IMP=0x00000000000b14f3
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(_Bool)arg8;	// IMP=0x00000000000b140b

@end

