//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (HKUUID)
+ (id)hk_dataWithHexString:(id)arg1;	// IMP=0x00100000001469b5
+ (id)hk_randomDataOfLength:(long long)arg1;	// IMP=0x001000000014685c
+ (id)hk_nilDataMD5;	// IMP=0x00100000001466ae
+ (id)hk_dataWithSHA256Fingerprint:(id)arg1 error:(out id *)arg2;	// IMP=0x001000000014642c
- (id)hk_dataForAllUUIDs;	// IMP=0x001000000006d0e2
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000006cdca
- (unsigned long long)hk_countOfUUIDs;	// IMP=0x001000000006cda5
- (void)hk_enumerateUUIDBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006cd12
- (void)hk_enumerateUUIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000158eb
- (id)hk_hexString;	// IMP=0x0010000000146b12
- (id)hk_SHA256;	// IMP=0x00100000001467bc
- (id)hk_MD5;	// IMP=0x001000000014671c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
