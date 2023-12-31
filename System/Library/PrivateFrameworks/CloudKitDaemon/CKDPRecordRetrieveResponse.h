//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

@interface CKDPRecordRetrieveResponse : PBCodable
{
    CKDPRecord *_record;	// 8 = 0x8
    _Bool _clientVersionETagMatch;	// 16 = 0x10
    struct {
        unsigned int clientVersionETagMatch:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000367827
@property(nonatomic) _Bool clientVersionETagMatch; // @synthesize clientVersionETagMatch=_clientVersionETagMatch;
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000367779
- (unsigned long long)hash;	// IMP=0x0000000000367726
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036765c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003675c4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000367561
- (void)writeTo:(id)arg1;	// IMP=0x00000000003674fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003674ed
- (id)dictionaryRepresentation;	// IMP=0x00000000003671d3
- (id)description;	// IMP=0x0000000000367124
@property(nonatomic) _Bool hasClientVersionETagMatch;
@property(readonly, nonatomic) _Bool hasRecord;

@end

