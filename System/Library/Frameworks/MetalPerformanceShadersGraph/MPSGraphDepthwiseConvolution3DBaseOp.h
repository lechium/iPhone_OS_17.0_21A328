//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class MPSGraphDepthwiseConvolution3DOpDescriptor;

@interface MPSGraphDepthwiseConvolution3DBaseOp : MPSGraphOperation
{
    MPSGraphDepthwiseConvolution3DOpDescriptor *_desc;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000ba6a1
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 descriptor:(id)arg4 name:(id)arg5;	// IMP=0x00000000000ba589

@end

