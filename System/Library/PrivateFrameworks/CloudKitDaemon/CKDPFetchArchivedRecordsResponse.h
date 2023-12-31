//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPFetchArchivedRecordsResponse : PBCodable
{
    NSData *_archiveContinuationToken;	// 8 = 0x8
    NSMutableArray *_records;	// 16 = 0x10
    int _status;	// 24 = 0x18
    CDStruct_47fe53f2 _has;	// 28 = 0x1c
}

+ (Class)recordType;	// IMP=0x00100000002f8586
- (void).cxx_destruct;	// IMP=0x00000000002f94d9
@property(retain, nonatomic) NSData *archiveContinuationToken; // @synthesize archiveContinuationToken=_archiveContinuationToken;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f92f5
- (unsigned long long)hash;	// IMP=0x00000000002f927f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f919d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f8f6b
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f8e67
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f8ce1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f8cd4
- (id)dictionaryRepresentation;	// IMP=0x00000000002f8783
- (id)description;	// IMP=0x00000000002f86d4
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000002f8669
- (id)statusAsString:(int)arg1;	// IMP=0x00000000002f8613
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasArchiveContinuationToken;
- (id)recordAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002f8569
- (unsigned long long)recordsCount;	// IMP=0x00000000002f854c
- (void)addRecord:(id)arg1;	// IMP=0x00000000002f84e2
- (void)clearRecords;	// IMP=0x00000000002f84c5

@end

