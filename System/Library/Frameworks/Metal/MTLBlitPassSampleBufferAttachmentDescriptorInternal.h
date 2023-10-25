//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLBlitPassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLBlitPassSampleBufferAttachmentDescriptorInternal : MTLBlitPassSampleBufferAttachmentDescriptor
{
    struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x000000000012b2b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012b239
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012b1ee
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x000000000012b1dc
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000012b1ca
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x000000000012b1b8
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000012b1a6
- (id)sampleBuffer;	// IMP=0x000000000012b195
- (void)setSampleBuffer:(id)arg1;	// IMP=0x000000000012b157
- (const struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000012b147
- (void)dealloc;	// IMP=0x000000000012b105
- (id)init;	// IMP=0x000000000012b0c5

@end
