//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (FCKVSCoding)
+ (id)readValueFromKeyValuePair:(id)arg1;	// IMP=0x001000000003bbf4
+ (int)keyValuePairType;	// IMP=0x001000000003bbe9
+ (id)fc_randomDataWithLength:(unsigned long long)arg1;	// IMP=0x0010000000282ac5
- (void)writeToKeyValuePair:(id)arg1;	// IMP=0x001000000003bc09
- (_Bool)fc_anefKeyIsValid:(id)arg1;	// IMP=0x00100000001bbe39
- (id)fc_anefDecryptWithKey:(id)arg1;	// IMP=0x00100000001bba09
- (id)fc_anefEncryptWithKey:(id)arg1;	// IMP=0x00100000001bb557
- (long long)fc_bigEndianCompareAsUnsignedInteger:(id)arg1;	// IMP=0x00100000002831e9
- (id)fc_URLSafeBase64EncodedStringWithOptions:(unsigned long long)arg1;	// IMP=0x00100000002830e3
- (id)fc_sha256;	// IMP=0x0010000000283028
- (id)fc_decryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;	// IMP=0x0010000000282daf
- (id)fc_encryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;	// IMP=0x0010000000282b36
- (_Bool)fc_isGzipped;	// IMP=0x0010000000282a57
- (id)fc_gzipDeflate;	// IMP=0x001000000028288a
- (id)fc_gzipInflate;	// IMP=0x001000000028268b
- (id)fc_zlibDeflate;	// IMP=0x00100000002824be
- (id)fc_zlibInflate;	// IMP=0x00100000002822bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
