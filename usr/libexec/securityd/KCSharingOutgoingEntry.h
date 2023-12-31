//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, KCSharingLocalFingerprint, NSDate, NSString;

@interface KCSharingOutgoingEntry
{
    long long _type;	// 8 = 0x8
    CKRecord *_record;	// 16 = 0x10
    KCSharingLocalFingerprint *_privateKeyFingerprint;	// 24 = 0x18
    KCSharingLocalFingerprint *_internetPasswordFingerprint;	// 32 = 0x20
    NSDate *_modificationDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000019f622
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)attributesWithAccessGroups:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019f058
- (id)shareWithAccessGroups:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019ee90
- (id)remoteItemWithAccessGroups:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019e990
@property(readonly, nonatomic) KCSharingLocalFingerprint *internetPasswordFingerprint; // @synthesize internetPasswordFingerprint=_internetPasswordFingerprint;
@property(readonly, nonatomic) KCSharingLocalFingerprint *privateKeyFingerprint; // @synthesize privateKeyFingerprint=_privateKeyFingerprint;
- (id)initWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019e2f1
- (id)initWithShare:(id)arg1;	// IMP=0x001000000019e201
- (id)initWithUpdatedLocalItem:(id)arg1 forMirrorEntry:(id)arg2 error:(id *)arg3;	// IMP=0x001000000019dec8
- (id)initWithNewLocalItem:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000019db61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

