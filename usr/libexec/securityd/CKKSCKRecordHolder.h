//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, CKRecordZoneID, NSData, NSString;

@interface CKKSCKRecordHolder
{
    NSData *_encodedCKRecord;	// 8 = 0x8
    CKRecord *_storedCKRecord;	// 16 = 0x10
    NSString *_contextID;	// 24 = 0x18
    CKRecordZoneID *_zoneID;	// 32 = 0x20
    NSString *_ckRecordType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000ba733
@property(retain) NSString *ckRecordType; // @synthesize ckRecordType=_ckRecordType;
@property(retain) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)contextID;	// IMP=0x00100000000ba6cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ba601
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000ba521
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000ba441
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000000ba354
- (id)CKRecordName;	// IMP=0x00100000000ba283
- (id)CKRecordWithZoneID:(id)arg1;	// IMP=0x00100000000ba0fb
@property(copy) NSData *encodedCKRecord; // @synthesize encodedCKRecord=_encodedCKRecord;
@property(copy) CKRecord *storedCKRecord; // @synthesize storedCKRecord=_storedCKRecord;
- (id)initWithCKRecordType:(id)arg1 encodedCKRecord:(id)arg2 contextID:(id)arg3 zoneID:(id)arg4;	// IMP=0x00100000000b9b11
- (id)initWithCKRecord:(id)arg1 contextID:(id)arg2;	// IMP=0x00100000000b9a10

@end

