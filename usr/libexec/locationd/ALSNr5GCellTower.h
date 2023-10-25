//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSNr5GCellTower : PBCodable
{
    long long _cellID;	// 8 = 0x8
    ALSLocation *_location;	// 16 = 0x10
    int _mcc;	// 24 = 0x18
    int _mnc;	// 28 = 0x1c
    int _nrarfcn;	// 32 = 0x20
    int _tacID;	// 36 = 0x24
    struct {
        unsigned int cellID:1;
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int nrarfcn:1;
        unsigned int tacID:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) int nrarfcn; // @synthesize nrarfcn=_nrarfcn;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int tacID; // @synthesize tacID=_tacID;
@property(nonatomic) long long cellID; // @synthesize cellID=_cellID;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000eb2060
- (unsigned long long)hash;	// IMP=0x0010000000eb1f77
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000eb1e3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000eb1d36
- (void)copyTo:(id)arg1;	// IMP=0x0010000000eb1c6d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000eb1b85
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000eb1b78
- (id)dictionaryRepresentation;	// IMP=0x0010000000eb153c
- (id)description;	// IMP=0x0010000000eb14c5
@property(nonatomic) _Bool hasNrarfcn;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasTacID;
@property(nonatomic) _Bool hasCellID;
@property(nonatomic) _Bool hasMnc;
@property(nonatomic) _Bool hasMcc;
- (void)dealloc;	// IMP=0x0010000000eb1300

@end
