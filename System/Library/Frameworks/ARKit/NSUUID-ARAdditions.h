//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (ARAdditions)
+ (id)ar_UUIDWithCFUUIDRef:(struct __CFUUID *)arg1;	// IMP=0x0060000000032e8c
+ (id)ar_UUIDWithIntegerValue:(unsigned long long)arg1;	// IMP=0x0060000000032e25
+ (id)ar_zeroUUID;	// IMP=0x0060000000032dc2
+ (id)ar_UUIDWithData:(id)arg1;	// IMP=0x0060000000032cfc
+ (id)ar_UUIDWithCVPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0060000000032c44
- (struct __CFUUID *)ar_createCFUUIDRef;	// IMP=0x0010000000032f25
- (unsigned long long)ar_integerValue;	// IMP=0x0010000000032ed5
@end
