//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor
{
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x00000000000abe6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000abdef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000abda4
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x00000000000abd92
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000abd80
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x00000000000abd6e
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000abd5c
- (id)sampleBuffer;	// IMP=0x00000000000abd4b
- (void)setSampleBuffer:(id)arg1;	// IMP=0x00000000000abd0d
- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000abcfd
- (void)dealloc;	// IMP=0x00000000000abcbb
- (id)init;	// IMP=0x00000000000abc7b

@end

