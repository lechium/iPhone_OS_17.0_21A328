//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface VCPDataCompressor : NSObject
{
    NSMutableData *_scratchData;	// 8 = 0x8
    NSMutableData *_resultData;	// 16 = 0x10
}

+ (id)compressor;	// IMP=0x0040000000087a1e
- (void).cxx_destruct;	// IMP=0x0020000000087b3a
- (id)compressData:(id)arg1;	// IMP=0x0010000000087a38
- (id)init;	// IMP=0x0010000000087967

@end

