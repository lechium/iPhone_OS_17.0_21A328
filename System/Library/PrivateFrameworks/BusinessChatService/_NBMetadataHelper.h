//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface _NBMetadataHelper : NSObject
{
    NSCache *_metadataCache;	// 8 = 0x8
}

+ (id)jsonObjectFromZippedDataWithBytes:(char *)arg1 compressedLength:(unsigned long long)arg2 expandedLength:(unsigned long long)arg3;	// IMP=0x006000000000c56f
+ (_Bool)hasValue:(id)arg1;	// IMP=0x006000000000c52d
+ (id)countryCodeFromRegionCode:(id)arg1;	// IMP=0x006000000000c258
+ (id)regionCodeFromCountryCode:(id)arg1;	// IMP=0x006000000000c16b
+ (id)CN2CCodeMap;	// IMP=0x006000000000bce0
+ (id)CCode2CNMap;	// IMP=0x006000000000b9db
+ (id)phoneNumberDataMap;	// IMP=0x006000000000b934
- (void).cxx_destruct;	// IMP=0x000000000000c698
@property(retain, nonatomic) NSCache *metadataCache; // @synthesize metadataCache=_metadataCache;
- (id)getMetadataForNonGeographicalRegion:(id)arg1;	// IMP=0x000000000000c4cb
- (id)getMetadataForRegion:(id)arg1;	// IMP=0x000000000000c2d2
- (id)getAllMetadata;	// IMP=0x000000000000bd37
- (id)init;	// IMP=0x000000000000b8de

@end
