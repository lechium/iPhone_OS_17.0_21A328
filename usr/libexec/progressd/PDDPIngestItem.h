//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPProgressEntity;

@interface PDDPIngestItem : PBCodable
{
    int _action;	// 8 = 0x8
    NSMutableArray *_handoutAuthorizedMetaInfos;	// 16 = 0x10
    NSString *_objectId;	// 24 = 0x18
    PDDPProgressEntity *_progressEntity;	// 32 = 0x20
    int _syncType;	// 40 = 0x28
    struct {
        unsigned int action:1;
        unsigned int syncType:1;
    } _has;	// 44 = 0x2c
}

+ (Class)handoutAuthorizedMetaInfoType;	// IMP=0x0020000000077aa2
- (void).cxx_destruct;	// IMP=0x0020000000078c24
@property(retain, nonatomic) NSMutableArray *handoutAuthorizedMetaInfos; // @synthesize handoutAuthorizedMetaInfos=_handoutAuthorizedMetaInfos;
@property(retain, nonatomic) PDDPProgressEntity *progressEntity; // @synthesize progressEntity=_progressEntity;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000789b1
- (unsigned long long)hash;	// IMP=0x00100000000788f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000787b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007855a
- (void)copyTo:(id)arg1;	// IMP=0x0010000000078419
- (void)writeTo:(id)arg1;	// IMP=0x0010000000078265
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000078258
- (id)dictionaryRepresentation;	// IMP=0x0010000000077b62
- (id)description;	// IMP=0x0010000000077ab3
- (id)handoutAuthorizedMetaInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000077a85
- (unsigned long long)handoutAuthorizedMetaInfosCount;	// IMP=0x0010000000077a68
- (void)addHandoutAuthorizedMetaInfo:(id)arg1;	// IMP=0x00100000000779fe
- (void)clearHandoutAuthorizedMetaInfos;	// IMP=0x00100000000779e1
- (int)StringAsSyncType:(id)arg1;	// IMP=0x001000000007790f
- (id)syncTypeAsString:(int)arg1;	// IMP=0x00100000000778c6
@property(nonatomic) _Bool hasSyncType;
@property(nonatomic) int syncType; // @synthesize syncType=_syncType;
@property(readonly, nonatomic) _Bool hasProgressEntity;
@property(readonly, nonatomic) _Bool hasObjectId;
- (int)StringAsAction:(id)arg1;	// IMP=0x001000000007779d
- (id)actionAsString:(int)arg1;	// IMP=0x0010000000077754
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;

@end
