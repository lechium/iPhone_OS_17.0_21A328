//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface VCPDataCompressor : NSObject
{
    NSMutableData *_scratchData;	// 8 = 0x8
    NSMutableData *_resultData;	// 16 = 0x10
}

+ (id)compressor;	// IMP=0x0060000000089555
- (void).cxx_destruct;	// IMP=0x0000000000089671
- (id)compressData:(id)arg1;	// IMP=0x000000000008956f
- (id)init;	// IMP=0x000000000008949e

@end

