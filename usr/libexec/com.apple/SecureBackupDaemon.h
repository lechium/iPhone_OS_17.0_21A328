//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, NSURL, SBEscrowOperationLogger;
@protocol OS_dispatch_queue;

@interface SecureBackupDaemon : NSObject
{
    _Bool _needInitialBackup;	// 8 = 0x8
    _Bool _pendingNotification;	// 9 = 0x9
    int _cachedPassphraseFD;	// 12 = 0xc
    int _cachedRecordIDPassphraseFD;	// 16 = 0x10
    int _cachedRecoveryKeyFD;	// 20 = 0x14
    SBEscrowOperationLogger *_operationsLogger;	// 24 = 0x18
    NSURL *_cacheDirURL;	// 32 = 0x20
    NSData *_iCDPKeybag;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_backupQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_kvsQueue;	// 64 = 0x40
    NSString *_cachedRecordID;	// 72 = 0x48
    NSString *_iCloudEnvironment;	// 80 = 0x50
    NSMutableDictionary *_ignoredNotifications;	// 88 = 0x58
    NSMutableDictionary *_handledNotifications;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0010000000046c55
@property(retain, nonatomic) NSMutableDictionary *handledNotifications; // @synthesize handledNotifications=_handledNotifications;
@property(retain, nonatomic) NSMutableDictionary *ignoredNotifications; // @synthesize ignoredNotifications=_ignoredNotifications;
@property _Bool pendingNotification; // @synthesize pendingNotification=_pendingNotification;
@property(copy, nonatomic) NSString *iCloudEnvironment; // @synthesize iCloudEnvironment=_iCloudEnvironment;
@property int cachedRecoveryKeyFD; // @synthesize cachedRecoveryKeyFD=_cachedRecoveryKeyFD;
@property int cachedRecordIDPassphraseFD; // @synthesize cachedRecordIDPassphraseFD=_cachedRecordIDPassphraseFD;
@property int cachedPassphraseFD; // @synthesize cachedPassphraseFD=_cachedPassphraseFD;
@property(copy, nonatomic) NSString *cachedRecordID; // @synthesize cachedRecordID=_cachedRecordID;
@property _Bool needInitialBackup; // @synthesize needInitialBackup=_needInitialBackup;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *kvsQueue; // @synthesize kvsQueue=_kvsQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *backupQueue; // @synthesize backupQueue=_backupQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) NSData *iCDPKeybag; // @synthesize iCDPKeybag=_iCDPKeybag;
@property(retain, nonatomic) NSURL *cacheDirURL; // @synthesize cacheDirURL=_cacheDirURL;
@property(readonly, nonatomic) SBEscrowOperationLogger *operationsLogger; // @synthesize operationsLogger=_operationsLogger;
- (void)knownICDPFederations:(CDUnknownBlockType)arg1;	// IMP=0x0010000000046a66
- (void)moveToFederationAllowed:(id)arg1 altDSID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000469af
- (void)getAcceptedTermsForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000468cf
- (void)saveTermsAcceptance:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000466ca
- (void)getCertificatesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004646e
- (void)daemonPasscodeRequestOpinion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000460e2
- (id)fetchPRK:(id *)arg1;	// IMP=0x0010000000045fdf
- (void)prepareHSA2EscrowRecordContents:(id)arg1 usesComplexPassphrase:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000451b0
- (int)getPasscodeRequestFlag:(unsigned long long *)arg1;	// IMP=0x0010000000045163
- (int)setPasscodeRequestFlag:(unsigned long long)arg1;	// IMP=0x0010000000045116
- (void)clearNotifyToken;	// IMP=0x00100000000450bc
- (int)notifyToken;	// IMP=0x0010000000044fac
- (void)beginHSA2PasscodeRequest:(id)arg1 desirePasscodeImmediately:(_Bool)arg2 uuid:(id)arg3 reason:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004493f
- (id)getPendingEscrowRequest:(id *)arg1;	// IMP=0x00100000000448d9
- (void)stateCaptureWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044874
- (void)notificationInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044740
- (void)changeSMSTargetWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043b60
- (void)getCountrySMSCodesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043541
- (void)startSMSChallengeWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042eaa
- (void)uncachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x0010000000042e96
- (void)uncacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042c0b
- (void)cacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042998
- (void)uncachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004270d
- (void)cachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x00100000000426f9
- (void)cachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042486
- (void)uncacheRecordIDPassphrase;	// IMP=0x0010000000042346
- (id)cachedRecoveryKey;	// IMP=0x0010000000042316
@property(copy, nonatomic) NSString *cachedRecordIDPassphrase;
@property(copy, nonatomic) NSString *cachedPassphrase;
- (id)cachedPassphraseForFD:(int)arg1;	// IMP=0x0010000000041f69
- (void)setCachedRecoveryKey:(id)arg1;	// IMP=0x0010000000041f39
- (int)storeCachedPassphrase:(id)arg1;	// IMP=0x00100000000418eb
- (void)updateMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040d89
- (void)disableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004017f
- (void)setBackOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f866
- (void)backOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f4f2
- (void)deleteAlliCDPRecordsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ecfc
- (void)createICDPRecordWithRequest:(id)arg1 recordContents:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e35e
- (void)recoverRecordContentsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003dfca
- (void)restoreKeychainAsyncWithPasswordInDaemon:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000003de1b
- (void)isRecoveryKeySetInDaemon:(CDUnknownBlockType)arg1;	// IMP=0x001000000003dd70
- (_Bool)verifyRecoveryKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003d43e
- (void)verifyRecoveryKeyInDaemon:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d3c1
- (void)restoreKeychainWithBackupPasswordInDaemon:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d342
- (void)recoverSilentWithCDPContextInDaemon:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d243
- (void)recoverWithCDPContextInDaemon:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d144
- (void)recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d06d
- (void)_recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a87e
- (void)_restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000003a505
- (void)_recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039f0f
- (void)_recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038b84
- (void)sortForMatchingPassphraseLengthAndPlatform:(id)arg1 secureBackups:(id)arg2 passphraseLength:(unsigned long long)arg3 platform:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000037e7c
- (long long)compare:(id)arg1 with:(id)arg2 backups:(id)arg3;	// IMP=0x001000000003771d
- (long long)compareEscrowDatesBetweenCurrentRecord:(id)arg1 andCandidateRecord:(id)arg2;	// IMP=0x0010000000037551
- (id)keysOfEntriesContainingObject:(id)arg1 backups:(id)arg2;	// IMP=0x0010000000037493
- (void)recoverEscrowWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035941
- (id)restoreEMCSBackup:(id)arg1 withPassword:(id)arg2;	// IMP=0x0010000000035468
- (id)restoreEMCSBackup:(id)arg1 keybag:(id)arg2 password:(id)arg3;	// IMP=0x00100000000350b7
- (void)recordIDAndMetadataForSilentAttempt:(id)arg1 passphraseLength:(unsigned long long)arg2 platform:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000349c7
- (id)secureBackups;	// IMP=0x001000000003471c
- (_Bool)_restoreKeychainWithBackupPassword:(id)arg1 keybagDigest:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000033c94
- (void)_restoreKeychainAsyncWithBackupBag:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 haveBottledPeer:(_Bool)arg4 restoredViews:(id)arg5 viewsNotToBeRestored:(id)arg6;	// IMP=0x00100000000332ff
- (_Bool)_restoreView:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 restoredViews:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000032f5f
- (id)encodedStatsForViews:(id)arg1;	// IMP=0x0010000000032cbe
- (id)restoreBackup:(id)arg1 withName:(id)arg2 keybagDigest:(id)arg3 keybag:(id)arg4 password:(id)arg5;	// IMP=0x0010000000032533
- (void)backupWithInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003251c
- (void)backupForRecoveryKeyWithInfoInDaemon:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032505
- (void)backupWithInfo:(id)arg1 garbageCollect:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003243a
- (void)backupForRecoveryKeyWithInfo:(id)arg1 garbageCollect:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003236f
@property(nonatomic) _Bool backupAllowed;
- (void)handleEscrowStoreResults:(id)arg1 escrowError:(id)arg2 request:(id)arg3 peerID:(id)arg4 newRecordMetadata:(id)arg5 backupKeybag:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000031eb2
- (void)enableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f6d6
- (void)stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f5ff
- (void)_stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f31a
- (id)massageOutgoingMetadataFromRequest:(id)arg1;	// IMP=0x001000000002f14a
- (void)getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002edba
- (void)synchronizeKVSWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e60a
- (void)doSynchronize;	// IMP=0x001000000002e557
- (id)sortRecordsByBottleID:(id)arg1;	// IMP=0x001000000002d78d
- (id)tagStaleBottleRecords:(id)arg1 suggestedBottles:(id)arg2;	// IMP=0x001000000002d41e
- (void)_getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a9e9
- (id)_recordIDFromLabel:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;	// IMP=0x001000000002a904
- (void)getStingrayMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a29d
- (_Bool)hasRecoveryKeyInKVS:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000029f9b
- (id)filteriCDPRecords:(id)arg1;	// IMP=0x001000000002984c
- (id)massageIncomingMetadataFromInfo:(id)arg1;	// IMP=0x001000000002950d
- (void)notificationOccurred:(id)arg1;	// IMP=0x0010000000029167
- (void)handleNotification:(id)arg1;	// IMP=0x0010000000028d77
- (void)recordNotification:(id)arg1 handled:(_Bool)arg2;	// IMP=0x0010000000028c9b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000028869
@property(readonly, nonatomic) _Bool forceICDP;
@property(readonly, retain, nonatomic) NSURL *cachedManifestURL;
@property(readonly, retain, nonatomic) NSURL *cachedKeychainURL;
- (struct os_state_data_s *)_stateCapture;	// IMP=0x001000000002832c
- (id)copyKVSState;	// IMP=0x0010000000027d94
- (void)setupNotifyEvents;	// IMP=0x0010000000027c0d
- (id)initWithOperationsLogger:(id)arg1;	// IMP=0x0010000000027995
- (id)normalizeSMSTarget:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000027713
- (id)_gestaltValueForKey:(struct __CFString *)arg1;	// IMP=0x00100000000275ac
- (void)unregisterForNotifyEvent:(id)arg1;	// IMP=0x0010000000027577
- (void)registerForNotifyEvent:(id)arg1;	// IMP=0x001000000002750c
- (void)disableiCDPBackup;	// IMP=0x00100000000274ca
- (void)_disableBackup;	// IMP=0x001000000002744e
- (id)_consumeBackupJournal;	// IMP=0x00100000000262e2
- (id)_consumeFullBackupForRecordID:(id)arg1;	// IMP=0x0010000000025f3f
- (id)_consumeViewBackup:(id)arg1 recordID:(id)arg2;	// IMP=0x0010000000024bb7
- (void)_backupCloudIdentityKeychainViewAndPushToKVSCheckBackupEnabled:(_Bool)arg1;	// IMP=0x0010000000024523
- (void)_backupCloudIdentityKeychainViewAndPushToKVS;	// IMP=0x001000000002450c
- (void)_backupCloudIdentityKeychainViewAndPushToKVSForRecoveryKey;	// IMP=0x00100000000244f8
- (void)_backupKeychainFully:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023f5d
- (void)_backupKeychain;	// IMP=0x0010000000023f47
- (void)_backupFullKeychain;	// IMP=0x0010000000023f2e
- (void)_backupFullKeychainWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023f14
- (void)_setAutobackupEnabled;	// IMP=0x0010000000023f00
- (void)_setAutobackupEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023e96
- (int)_checkEscrowTrust;	// IMP=0x0010000000023ad5
- (void)_removeKVSKeybag;	// IMP=0x00100000000239a1
- (void)garbageCollectEMCSBackupsExcluding:(id)arg1;	// IMP=0x0010000000023736
- (id)_EMCSBackupDictForKeybagDigest:(id)arg1;	// IMP=0x00100000000232c0
- (id)_EMCSBackup;	// IMP=0x0010000000023269
- (void)_setEMCSBackup:(id)arg1 keybag:(id)arg2;	// IMP=0x0010000000022f51
- (id)_KVSKeybag;	// IMP=0x0010000000022efa
- (void)_setKVSKeybag:(id)arg1;	// IMP=0x0010000000022d2f
- (void)_removeMetadata;	// IMP=0x0010000000022c12
- (id)_metadata;	// IMP=0x0010000000022bb8
- (void)_setMetadata:(id)arg1;	// IMP=0x0010000000022a73
- (void)_removeUsesEscrow;	// IMP=0x0010000000022a16
- (_Bool)_usesEscrow;	// IMP=0x00100000000229cb
- (void)_setUsesEscrow:(_Bool)arg1;	// IMP=0x00100000000228b8
- (_Bool)_backupEnabled;	// IMP=0x00100000000227d6
- (void)_setBackupEnabled:(_Bool)arg1 iCDP:(_Bool)arg2;	// IMP=0x00100000000225fe
- (id)_getLastBackupTimestamp;	// IMP=0x0010000000022576
- (id)_getDERBackupFromKVS;	// IMP=0x0010000000022441
- (void)_removeVeeTwoBackup;	// IMP=0x0010000000022309
- (void)_enumerateICDPBackupsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021f02
- (id)_getICDPBackupFromKVS:(id)arg1 forView:(id)arg2;	// IMP=0x0010000000021e55
- (id)_getProtectedKeychainAndKeybagDigestFromKVS:(id *)arg1;	// IMP=0x0010000000021cdf
- (void)_removeProtectedKeychain;	// IMP=0x0000000000021b9e
- (id)_pushCachedKeychainToKVS;	// IMP=0x00100000000215d3
- (id)_pushCachedKeychainToKVSForView:(id)arg1 recordID:(id)arg2;	// IMP=0x00100000000210ea
- (void)storeDERBackupInKVS:(id)arg1;	// IMP=0x0010000000020f23
- (id)derDataFromDict:(id)arg1;	// IMP=0x0010000000020d1c
- (void)_removeCachedKeychain;	// IMP=0x0010000000020bba
- (void)_storeVeeTwoBackupInKVS:(id)arg1 forViewName:(id)arg2 withKeyStore:(id)arg3 manifestDigest:(id)arg4 keybagDigest:(id)arg5;	// IMP=0x00100000000206e0
- (void)_storeProtectedKeychainInKVS:(id)arg1 keybagDigest:(id)arg2;	// IMP=0x00100000000204ea
- (id)_getKeychainItemForKey:(id)arg1 status:(int *)arg2;	// IMP=0x0010000000020346
- (void)_removeKeychainItemForKey:(id)arg1;	// IMP=0x00100000000201e8
- (void)_saveKeychainItem:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000002002c
- (id)_createBackupKeybagWithPassword:(id)arg1;	// IMP=0x0010000000020024
- (id)createiCloudRecoveryPasswordWithError:(id *)arg1;	// IMP=0x001000000005bb81
- (id)createPlistFromDERData:(id)arg1;	// IMP=0x001000000005bb0d
- (id)createDERDataFromPlist:(id)arg1;	// IMP=0x001000000005ba9a
- (_Bool)backupSliceKeybagHasRecoveryKey:(id)arg1;	// IMP=0x001000000005ba52
- (id)createEncodedDirectBackupSliceKeybagFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b8f1
- (id)circleChangedNotification;	// IMP=0x001000000005b895
- (id)currentViews;	// IMP=0x001000000005b82f
- (id)allViews;	// IMP=0x001000000005b7b9
- (id)copyOSVersion:(id)arg1;	// IMP=0x001000000005b792
- (id)copySerialNumber:(id)arg1;	// IMP=0x001000000005b77b
- (id)createPeerInfoFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b732
- (_Bool)registerSingleRecoverySecret:(id)arg1 iCDP:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000005b6e6
- (id)copyEncodedData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b69e
- (id)copyMyPeerWithNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b658
- (id)copyBackupKeyForNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b612
- (id)copyBackupKey:(id)arg1;	// IMP=0x001000000005b605
- (id)copyMyPeerIDWithError:(id *)arg1;	// IMP=0x001000000005b577
- (id)copyMyPeerID;	// IMP=0x001000000005b4bd
- (id)copyPeerID:(id)arg1;	// IMP=0x001000000005b49d
- (id)copyMyPeerInfo:(id *)arg1;	// IMP=0x001000000005b45a
- (_Bool)backupWithChanges:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005b14f
- (_Bool)backupSetConfirmedManifest:(id)arg1 digest:(id)arg2 manifest:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005afb2
- (_Bool)backupWithRegisteredBackupViewWithError:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ae8b
- (_Bool)backupWithRegisteredBackupsWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005abc0
- (_Bool)verifyRKWithKeyBag:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005aa89
- (void)restoreBackupName:(id)arg1 peerID:(id)arg2 keybag:(id)arg3 password:(id)arg4 backup:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000005a6d4
- (id)kvs;	// IMP=0x001000000005a65a
- (id)makeRecordCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005de6c
- (void)setPasscodeMetadata:(id)arg1 passphraseType:(int)arg2;	// IMP=0x001000000005dd03
- (void)doEnableEscrowMultiICSCWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005be38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
