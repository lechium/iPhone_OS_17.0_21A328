//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLArgumentEncoder;

__attribute__((visibility("hidden")))
@interface MTLGPUDebugPipelineStateInfoEncoder : NSObject
{
    id <MTLArgumentEncoder> _argumentEncoder;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x0000000000069898
@property(readonly, nonatomic) unsigned long long encodedLength;
- (void)setComputePipelineState:(id)arg1;	// IMP=0x000000000006969d
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x0000000000069443
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x00000000000693e1
- (id)initWithDevice:(id)arg1;	// IMP=0x0000000000068e7e

@end

