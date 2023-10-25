//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class APPBAdSpecification, APPBRequestProperties, NSMutableArray;

@interface APPBAdBatchRequest : PBRequest
{
    NSMutableArray *_cachedAds;	// 8 = 0x8
    APPBRequestProperties *_requestProperties;	// 16 = 0x10
    NSMutableArray *_requesters;	// 24 = 0x18
    NSMutableArray *_resourceCacheEntries;	// 32 = 0x20
    APPBAdSpecification *_specification;	// 40 = 0x28
    NSMutableArray *_tags;	// 48 = 0x30
}

+ (Class)requestersType;	// IMP=0x00200000000c0a05
+ (Class)tagsType;	// IMP=0x00100000000c0933
+ (Class)cachedAdsType;	// IMP=0x00100000000c0861
+ (Class)resourceCacheEntriesType;	// IMP=0x00100000000c078f
+ (id)options;	// IMP=0x00100000000c0654
- (void).cxx_destruct;	// IMP=0x00200000000c2880
@property(retain, nonatomic) NSMutableArray *requesters; // @synthesize requesters=_requesters;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSMutableArray *cachedAds; // @synthesize cachedAds=_cachedAds;
@property(retain, nonatomic) NSMutableArray *resourceCacheEntries; // @synthesize resourceCacheEntries=_resourceCacheEntries;
@property(retain, nonatomic) APPBAdSpecification *specification; // @synthesize specification=_specification;
@property(retain, nonatomic) APPBRequestProperties *requestProperties; // @synthesize requestProperties=_requestProperties;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c2307
- (unsigned long long)hash;	// IMP=0x00100000000c224e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c20ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c1b57
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c18af
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c149d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c1490
- (id)dictionaryRepresentation;	// IMP=0x00100000000c0ac5
- (id)description;	// IMP=0x00100000000c0a16
- (id)requestersAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000c09e8
- (unsigned long long)requestersCount;	// IMP=0x00100000000c09cb
- (void)addRequesters:(id)arg1;	// IMP=0x00100000000c0961
- (void)clearRequesters;	// IMP=0x00100000000c0944
- (id)tagsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000c0916
- (unsigned long long)tagsCount;	// IMP=0x00100000000c08f9
- (void)addTags:(id)arg1;	// IMP=0x00100000000c088f
- (void)clearTags;	// IMP=0x00100000000c0872
- (id)cachedAdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000c0844
- (unsigned long long)cachedAdsCount;	// IMP=0x00100000000c0827
- (void)addCachedAds:(id)arg1;	// IMP=0x00100000000c07bd
- (void)clearCachedAds;	// IMP=0x00100000000c07a0
- (id)resourceCacheEntriesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000c0772
- (unsigned long long)resourceCacheEntriesCount;	// IMP=0x00100000000c0755
- (void)addResourceCacheEntries:(id)arg1;	// IMP=0x00100000000c06eb
- (void)clearResourceCacheEntries;	// IMP=0x00100000000c06ce
@property(readonly, nonatomic) _Bool hasSpecification;
@property(readonly, nonatomic) _Bool hasRequestProperties;

@end
