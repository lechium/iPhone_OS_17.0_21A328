//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (SBKAdditions)
+ (id)SBKStringByMD5HashingString:(id)arg1;	// IMP=0x0060000000002469
+ (id)SBKStringFromDigestData:(id)arg1;	// IMP=0x006000000000237c
- (id)SBKDataByDeflatingWithGZip;	// IMP=0x001000000000236a
- (id)SBKDataByInflatingWithGZip;	// IMP=0x0010000000002358
- (id)SBKDataByDeflatingWithNoZipHeader;	// IMP=0x0010000000002341
- (id)SBKDataByInflatingWithNoZipHeader;	// IMP=0x001000000000232f
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned long long)arg1;	// IMP=0x0010000000001fcb
- (id)_SBKDataByInflatingWithNoZipHeader;	// IMP=0x0010000000001de3
@end
