//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDCloudLegacyHomeDataRecord
{
}

+ (id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2;	// IMP=0x0060000000a93452
- (unsigned long long)objectEncoding;	// IMP=0x0000000000a93447
- (void)clearData;	// IMP=0x0000000000a933b4
@property(retain, nonatomic) NSData *dataVersion2;
- (void)setData:(id)arg1;	// IMP=0x0000000000a93188
- (id)data;	// IMP=0x0000000000a93131
- (id)recordType;	// IMP=0x0000000000a93112
- (_Bool)encodeObjectChange:(id)arg1;	// IMP=0x0000000000a9295f
- (id)extractObjectChange;	// IMP=0x0000000000a91e3a

@end

