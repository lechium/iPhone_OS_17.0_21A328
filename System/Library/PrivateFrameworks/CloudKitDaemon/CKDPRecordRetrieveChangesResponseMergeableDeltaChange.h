//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPMergeableValueIdentifier, CKDPRecordFieldIdentifier, CKDPRecordIdentifier, CKDPRecordType, NSMutableArray;

@interface CKDPRecordRetrieveChangesResponseMergeableDeltaChange : PBCodable
{
    NSMutableArray *_deltas;	// 8 = 0x8
    CKDPRecordFieldIdentifier *_fieldIdentifier;	// 16 = 0x10
    CKDPMergeableValueIdentifier *_identifier;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
    CKDPRecordType *_recordType;	// 40 = 0x28
}

+ (Class)deltasType;	// IMP=0x001000000004ee3c
- (void).cxx_destruct;	// IMP=0x000000000004ffc5
@property(retain, nonatomic) CKDPRecordType *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) NSMutableArray *deltas; // @synthesize deltas=_deltas;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004fcdc
- (unsigned long long)hash;	// IMP=0x000000000004fc3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004fb05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f89a
- (void)copyTo:(id)arg1;	// IMP=0x000000000004f74f
- (void)writeTo:(id)arg1;	// IMP=0x000000000004f599
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004f58c
- (id)dictionaryRepresentation;	// IMP=0x000000000004ef11
- (id)description;	// IMP=0x000000000004ee62
@property(readonly, nonatomic) _Bool hasRecordType;
- (id)deltasAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004ee1f
- (unsigned long long)deltasCount;	// IMP=0x000000000004ee02
- (void)addDeltas:(id)arg1;	// IMP=0x000000000004ed98
- (void)clearDeltas;	// IMP=0x000000000004ed7b
@property(readonly, nonatomic) _Bool hasFieldIdentifier;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
