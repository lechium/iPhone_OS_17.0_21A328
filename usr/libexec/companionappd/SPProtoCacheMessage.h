//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable
{
    NSData *_assetData;	// 8 = 0x8
    NSString *_assetKey;	// 16 = 0x10
    int;	// 24 = 0x18
    NSString *_gizmoCacheIdentifier;	// 32 = 0x20
    int _messageType;	// 40 = 0x28
    SPProtoCacheSyncData *_syncData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000048d0
@property(retain, nonatomic) SPProtoCacheSyncData *syncData; // @synthesize syncData=_syncData;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSString *gizmoCacheIdentifier; // @synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier;
@property(retain, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(nonatomic) int cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000004727
- (unsigned long long)hash;	// IMP=0x0010000000004672
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000453e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000442f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000004370
- (void)writeTo:(id)arg1;	// IMP=0x00100000000042a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000429c
- (id)dictionaryRepresentation;	// IMP=0x0010000000003ddb
- (id)description;	// IMP=0x0010000000003d2c
@property(readonly, nonatomic) _Bool hasSyncData;
@property(readonly, nonatomic) _Bool hasAssetData;
@property(readonly, nonatomic) _Bool hasGizmoCacheIdentifier;
@property(readonly, nonatomic) _Bool hasAssetKey;

@end

