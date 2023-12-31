//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

@interface CKDPRecordMoveResponse : PBCodable
{
    CKDPRecord *_moveMarker;	// 8 = 0x8
    CKDPRecord *_movedRecord;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e3004
@property(retain, nonatomic) CKDPRecord *movedRecord; // @synthesize movedRecord=_movedRecord;
@property(retain, nonatomic) CKDPRecord *moveMarker; // @synthesize moveMarker=_moveMarker;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002e2f2b
- (unsigned long long)hash;	// IMP=0x00000000002e2ede
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e2e26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e2d88
- (void)copyTo:(id)arg1;	// IMP=0x00000000002e2d25
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e2cc8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e2cbb
- (id)dictionaryRepresentation;	// IMP=0x00000000002e2a31
- (id)description;	// IMP=0x00000000002e2982
@property(readonly, nonatomic) _Bool hasMovedRecord;
@property(readonly, nonatomic) _Bool hasMoveMarker;

@end

