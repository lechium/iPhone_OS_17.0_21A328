//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable
{
    long long _downloadURLExpirationTimeSeconds;	// 8 = 0x8
    long long _size;	// 16 = 0x10
    NSString *_downloadURL;	// 24 = 0x18
    struct {
        unsigned int downloadURLExpirationTimeSeconds:1;
        unsigned int size:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000191999
@property(nonatomic) long long downloadURLExpirationTimeSeconds; // @synthesize downloadURLExpirationTimeSeconds=_downloadURLExpirationTimeSeconds;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(nonatomic) long long size; // @synthesize size=_size;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001918c9
- (unsigned long long)hash;	// IMP=0x0000000000191854
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019176a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001916b2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000191629
- (void)writeTo:(id)arg1;	// IMP=0x000000000019159b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019158e
- (id)dictionaryRepresentation;	// IMP=0x00000000001911fa
- (id)description;	// IMP=0x000000000019114b
@property(nonatomic) _Bool hasDownloadURLExpirationTimeSeconds;
@property(readonly, nonatomic) _Bool hasDownloadURL;
@property(nonatomic) _Bool hasSize;

@end

