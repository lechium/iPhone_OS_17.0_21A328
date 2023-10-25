//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPUserAvailableQuotaResponse : PBCodable
{
    unsigned long long _storageAvailableBytes;	// 8 = 0x8
    struct {
        unsigned int storageAvailableBytes:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long storageAvailableBytes; // @synthesize storageAvailableBytes=_storageAvailableBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003bcf6
- (unsigned long long)hash;	// IMP=0x000000000003bcce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003bc3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003bbd7
- (void)copyTo:(id)arg1;	// IMP=0x000000000003bbb1
- (void)writeTo:(id)arg1;	// IMP=0x000000000003bb85
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003bb78
- (id)dictionaryRepresentation;	// IMP=0x000000000003b92a
- (id)description;	// IMP=0x000000000003b87b
@property(nonatomic) _Bool hasStorageAvailableBytes;

@end
