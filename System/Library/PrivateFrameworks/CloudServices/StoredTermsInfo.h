//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class SecureBackupTermsInfo;

@interface StoredTermsInfo : PBCodable
{
    unsigned long long _storageVersion;	// 8 = 0x8
    SecureBackupTermsInfo *_termsInfo;	// 16 = 0x10
    struct {
        unsigned int storageVersion:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000019a6b
@property(retain, nonatomic) SecureBackupTermsInfo *termsInfo; // @synthesize termsInfo=_termsInfo;
@property(nonatomic) unsigned long long storageVersion; // @synthesize storageVersion=_storageVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000199bb
- (unsigned long long)hash;	// IMP=0x0000000000019971
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000198b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019821
- (void)copyTo:(id)arg1;	// IMP=0x00000000000197bd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000019757
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001974a
- (id)dictionaryRepresentation;	// IMP=0x0000000000019424
- (id)description;	// IMP=0x0000000000019375
@property(readonly, nonatomic) _Bool hasTermsInfo;
@property(nonatomic) _Bool hasStorageVersion;

@end

