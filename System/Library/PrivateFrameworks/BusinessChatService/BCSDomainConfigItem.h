//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface BCSDomainConfigItem
{
    long long _domainShardCount;	// 8 = 0x8
    long long _filterShardCount;	// 16 = 0x10
    NSURL *_domainMegaShardURL;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000036bdb
+ (id)keysRequestedForCloudKitFetch;	// IMP=0x00600000000483eb
- (void).cxx_destruct;	// IMP=0x0000000000036bf4
@property(readonly, nonatomic) NSURL *domainMegaShardURL; // @synthesize domainMegaShardURL=_domainMegaShardURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036af3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036a35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000368f0
- (id)description;	// IMP=0x00000000000367de
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 filterMegaShardURL:(id)arg4 itemTTL:(id)arg5;	// IMP=0x00000000000367b2
- (long long)filterShardCount;	// IMP=0x00000000000367a1
@property(readonly, nonatomic) long long domainShardCount;
- (id)initWithBuckets:(long long)arg1 domainShards:(long long)arg2 filterShards:(long long)arg3 expirationDate:(id)arg4 filterMegaShardURL:(id)arg5 domainMegaShardURL:(id)arg6 itemTTL:(id)arg7;	// IMP=0x00000000000366de
- (id)initWithBuckets:(long long)arg1 domainShards:(long long)arg2 filterShards:(long long)arg3 expirationDate:(id)arg4;	// IMP=0x00000000000366b3
- (id)initWithRecord:(id)arg1;	// IMP=0x00000000000489a4
- (id)initWithJSONObj:(id)arg1;	// IMP=0x000000000004847e

@end
