//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShare.h>

@interface CKShare (CKDaemonExtensions)
- (void)_prepPCSDataWithContainer:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(_Bool)arg4 containerID:(id)arg5 sharedRecordZone:(id)arg6 requestorOperationID:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x003000000003f074
- (void)_prepPCSDataUsingPreDecryptedPCSOnlyWithContainer:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x003000000003ec55
- (void)_prepPCSDataWithContainer:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(_Bool)arg4 containerID:(id)arg5 requestorOperationID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x003000000003ec20
- (void)_ingestAndExportPPPCSFromShareInvitationToken:(id)arg1 shareModificationDate:(id)arg2 container:(id)arg3 requestorOperationID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x003000000003e827
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x003000000003e65a
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x003000000003e48d
- (_Bool)hasEncryptedPersonalInfo;	// IMP=0x003000000003e34f
- (void)setSharePCSData:(id)arg1;	// IMP=0x00300000002f6f7b
- (void)setSharePCSData:(id)arg1 isUnitTestAccount:(_Bool)arg2;	// IMP=0x00300000002f6d88
@property struct _OpaquePCSShareProtection *myParticipantPCS;
@property struct _OpaquePCSShareProtection *publicPCS;
@property struct _OpaquePCSShareProtection *privatePCS;
@end

