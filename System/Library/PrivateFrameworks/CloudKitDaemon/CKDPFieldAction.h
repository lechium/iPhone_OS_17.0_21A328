//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

@interface CKDPFieldAction : PBCodable
{
    CKDPFieldActionDeleteListRange *_deleteListRange;	// 8 = 0x8
    CKDPFieldActionInsertIntoList *_insertIntoList;	// 16 = 0x10
    CKDPFieldActionReplaceListRange *_replaceListRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000026330f
@property(retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange; // @synthesize replaceListRange=_replaceListRange;
@property(retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange; // @synthesize deleteListRange=_deleteListRange;
@property(retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList; // @synthesize insertIntoList=_insertIntoList;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002631db
- (unsigned long long)hash;	// IMP=0x000000000026316e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026308e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000262fca
- (void)copyTo:(id)arg1;	// IMP=0x0000000000262f47
- (void)writeTo:(id)arg1;	// IMP=0x0000000000262ecd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000262ec0
- (id)dictionaryRepresentation;	// IMP=0x0000000000262b5e
- (id)description;	// IMP=0x0000000000262aaf
@property(readonly, nonatomic) _Bool hasReplaceListRange;
@property(readonly, nonatomic) _Bool hasDeleteListRange;
@property(readonly, nonatomic) _Bool hasInsertIntoList;

@end

