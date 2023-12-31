//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyZlibDataCompressor : NSObject
{
    struct z_stream_s _deflateStream;	// 8 = 0x8
    unsigned char _deflateBuffer[8192];	// 120 = 0x78
}

- (id)compressedDataForData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000053db
- (void)dealloc;	// IMP=0x00000000000053a1
- (id)initWithOptions:(long long)arg1;	// IMP=0x00000000000052ff
- (id)init;	// IMP=0x00000000000052e8

@end

