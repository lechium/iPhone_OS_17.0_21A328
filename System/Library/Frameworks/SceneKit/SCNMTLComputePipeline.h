//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState, MTLFunction;

__attribute__((visibility("hidden")))
@interface SCNMTLComputePipeline : NSObject
{
    id <MTLComputePipelineState> _state;	// 8 = 0x8
    id <MTLFunction> _computeFunction;	// 16 = 0x10
}

- (id)description;	// IMP=0x000000000011f918
- (void)dealloc;	// IMP=0x000000000011f8ce
- (id)init;	// IMP=0x000000000011f89f

@end

