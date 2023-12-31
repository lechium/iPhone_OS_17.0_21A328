//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMDTransferDictionaries)
+ (void)resetSyncStateForMessage:(id)arg1 toState:(long long)arg2;	// IMP=0x006000000005d288
+ (id)createItemWithCKRecord:(id)arg1;	// IMP=0x006000000005c46d
+ (id)createUpdateT1Info:(id)arg1;	// IMP=0x006000000005be1a
+ (id)createCKRecordForUpdateT2:(id)arg1 zoneID:(id)arg2 salt:(id)arg3;	// IMP=0x006000000005bc2d
+ (id)createCKRecordForUpdateT1:(id)arg1 zoneID:(id)arg2 salt:(id)arg3;	// IMP=0x006000000005b9f8
+ (id)populateIMMessageActionItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x006000000005b6b3
+ (id)messageActionChangeProtobufForCompressedData:(id)arg1;	// IMP=0x006000000005b62c
+ (id)populateIMGroupActionItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x006000000005b343
+ (id)groupActionProtobufForCompressedData:(id)arg1;	// IMP=0x006000000005b2bc
+ (id)populateIMLocationShareStatusChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x006000000005af69
+ (id)locationShareStatusChangeProtobufForCompressedData:(id)arg1;	// IMP=0x006000000005aee2
+ (id)populateIMParticipantChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x006000000005abf9
+ (id)participantChangeProtobufForCompressedData:(id)arg1;	// IMP=0x006000000005ab72
+ (id)populateIMGroupTitleChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x006000000005a867
+ (id)groupTitleChangeProtobufForCompressedData:(id)arg1;	// IMP=0x006000000005a7e0
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufDataP3:(id)arg2;	// IMP=0x006000000005a289
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufDataP2:(id)arg2;	// IMP=0x006000000005a1db
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x0060000000059e04
+ (id)protobufForUpdateT2:(id)arg1;	// IMP=0x0060000000059d7d
+ (id)protobufForUpdateT1:(id)arg1;	// IMP=0x0060000000059cf6
+ (id)protobufForCompressedDataP3:(id)arg1;	// IMP=0x0060000000059c6f
+ (id)protobufForCompressedDataP2:(id)arg1;	// IMP=0x0060000000059be8
+ (id)protobufForCompressedData:(id)arg1;	// IMP=0x0060000000059b61
+ (id)compressedProtobufDataForUpdateT2:(id)arg1;	// IMP=0x0060000000059a74
+ (id)compressedProtobufDataForUpdateT1:(id)arg1;	// IMP=0x0060000000059951
+ (id)compressedProtobufDataWithPadding:(id)arg1;	// IMP=0x006000000005923e
+ (id)_updateV1RecordType;	// IMP=0x0060000000059218
- (id)copyFileTransferDictionaryRepresentationsFromCenter:(id)arg1;	// IMP=0x00100000000307af
- (_Bool)isCompatibleWithMiC;	// IMP=0x001000000005dfa5
- (_Bool)shouldStoreMessage;	// IMP=0x001000000005d53d
- (_Bool)_shouldDownloadIfPhoneNumberAndNoSIM:(id)arg1;	// IMP=0x001000000005d43b
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x001000000005c04d
- (id)_recordFromServerChangeToken;	// IMP=0x001000000005bf7c
- (_Bool)callerIDShouldBeCheckedForRegistration:(id)arg1;	// IMP=0x001000000005bbe5
- (void)_populateCKRecordWithIMMessageActionItemFields:(id)arg1;	// IMP=0x001000000005b919
- (id)compressedProtobufDataForMessageActionItem;	// IMP=0x001000000005b7af
- (void)_populateCKRecordWithIMGroupActionItemFields:(id)arg1;	// IMP=0x001000000005b54d
- (id)compressedProtobufDataForGroupActionItem;	// IMP=0x001000000005b411
- (void)_populateCKRecordWithIMLocationShareStatusChangeItemFields:(id)arg1;	// IMP=0x001000000005b1dd
- (id)compressedProtobufDataForLocationShareStatusChangeItem;	// IMP=0x001000000005b084
- (void)_populateCKRecordWithIMParticipantChangeItemFields:(id)arg1;	// IMP=0x001000000005ae03
- (id)compressedProtobufDataForParticipantChangeItem;	// IMP=0x001000000005acc7
- (void)_populateCKRecordWithIMGroupTitleChangeItemFields:(id)arg1;	// IMP=0x001000000005aa93
- (id)compressedProtobufDataForGroupTitleChangeItem;	// IMP=0x001000000005a946
- (void)_populateCKRecordWithIMMessageItemFields:(id)arg1;	// IMP=0x001000000005a586
- (void)_populateCKRecordWithIMItemFields:(id)arg1;	// IMP=0x001000000005a341
- (id)compressedProtobufDataForMessageP3;	// IMP=0x001000000005983f
- (id)compressedProtobufDataForMessageP2;	// IMP=0x001000000005972a
- (id)compressedProtobufDataForMessage;	// IMP=0x001000000005932a
- (id)_accountControllerSharedInstance;	// IMP=0x0010000000059225
- (id)_recordType;	// IMP=0x001000000005920b
@end

