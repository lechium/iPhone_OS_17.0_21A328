//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (BRCSyncOperationThrottle)
+ (void)initialize;	// IMP=0x006000000029bbb7
+ (id)brc_daemonAccessDisabledError;	// IMP=0x006000000029bb86
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;	// IMP=0x006000000029b708
- (int)brc_syncOperationErrorKind;	// IMP=0x0010000000145900
- (_Bool)brc_isXPCConnectionError;	// IMP=0x001000000029c318
- (_Bool)brc_isExpectedErrorForTelemetry;	// IMP=0x001000000029c306
- (id)brc_telemetryReportableErrorWithRecordName:(id *)arg1;	// IMP=0x001000000029bdf7
- (id)brc_cloudKitErrorMessage;	// IMP=0x001000000029bd2a
- (id)brc_description;	// IMP=0x001000000029bc5e
- (id)brc_wrappedError;	// IMP=0x001000000029b885
- (id)brc_strippedError;	// IMP=0x001000000029b125
- (_Bool)brc_isIgnorableListDirectoryError;	// IMP=0x001000000029b113
- (_Bool)brc_isCloudKitPCSDecryptionFailure;	// IMP=0x001000000029b0fc
- (_Bool)brc_isReferenceValidationError;	// IMP=0x001000000029b0e5
- (_Bool)brc_isStaleRecordUpdateError;	// IMP=0x001000000029b0ce
- (_Bool)brc_isCloudKitErrorNeedsPCSPrep;	// IMP=0x001000000029b09b
- (_Bool)brc_isCloudKitErrorZoneMigrated;	// IMP=0x001000000029b068
- (_Bool)brc_isCloudKitErrorZoneUndergoingMigration;	// IMP=0x001000000029b035
- (_Bool)brc_isCloudKitErrorImplyingZoneNeedsCreation;	// IMP=0x001000000029affc
- (_Bool)_brc_isCloudKitZoneUserDeletedError;	// IMP=0x001000000029afe5
- (_Bool)_brc_isCloudKitZoneNotFoundError;	// IMP=0x001000000029afce
- (_Bool)brc_isOutOfSpaceError;	// IMP=0x001000000029ae03
- (_Bool)brc_isDenylistError;	// IMP=0x001000000029adec
- (_Bool)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;	// IMP=0x0010000000299f74
- (_Bool)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;	// IMP=0x00100000002993fc
- (_Bool)brc_isCloudKitErrorRequiringSkipThrottling;	// IMP=0x00100000002993bc
- (_Bool)brc_isRetriableForPCSChaining;	// IMP=0x001000000029932a
- (_Bool)brc_isIndividualItemBlacklistError;	// IMP=0x0010000000299203
- (_Bool)brc_isCloudKitErrorRemappedToNewRecordName:(id *)arg1;	// IMP=0x0010000000299156
- (_Bool)brc_isCloudKitErrorChainedToNewParent:(id *)arg1;	// IMP=0x00100000002990a9
- (_Bool)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id *)arg1;	// IMP=0x0010000000298ffc
- (_Bool)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id *)arg1;	// IMP=0x0010000000298f4f
- (id)_brc_cloudKitPluginErrorPayload;	// IMP=0x0010000000298e7a
- (_Bool)_brc_isCloudKitPluginErrorCode:(long long)arg1;	// IMP=0x0010000000298d8f
- (_Bool)brc_isCloudKitErrorRequiringAssetReupload;	// IMP=0x0010000000298c2e
- (_Bool)brc_isCloudKitErrorRequiringAssetRescan;	// IMP=0x0010000000298acd
- (_Bool)brc_isCloudKitErrorRequiringAssetRecheck;	// IMP=0x0010000000298a4d
- (_Bool)brc_isCloudKitAccountTemporarilyUnavailable;	// IMP=0x0010000000298a36
- (_Bool)brc_isCloudKitUnknownItemError;	// IMP=0x00100000002989f3
- (_Bool)brc_isCloudKitPCSChainingError;	// IMP=0x00100000002989b0
- (_Bool)brc_isCloudKitAtomicFailure;	// IMP=0x0010000000298999
- (_Bool)brc_isCloudKitOutOfQuota;	// IMP=0x0010000000298956
- (_Bool)brc_isCloudKitAssetFileModified;	// IMP=0x001000000029893f
- (_Bool)brc_isCloudKitCancellationError;	// IMP=0x0010000000298928
- (id)brc_cloudKitErrorForZone:(id)arg1;	// IMP=0x0010000000298916
- (id)brc_cloudKitErrorForRecordID:(id)arg1;	// IMP=0x0010000000298904
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;	// IMP=0x00100000002988f2
- (id)br_cloudKitErrorForIdentifier:(id)arg1;	// IMP=0x0010000000298782
- (_Bool)brc_containsCloudKitInternalErrorCode:(long long)arg1;	// IMP=0x0010000000298717
- (_Bool)_brc_isCloudKitInternalErrorCode:(long long)arg1;	// IMP=0x0010000000298655
- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;	// IMP=0x001000000029843a
- (_Bool)brc_containsCloudKitErrorCode:(long long)arg1;	// IMP=0x00100000002983cf
- (_Bool)_brc_isCloudKitErrorCode:(long long)arg1;	// IMP=0x00100000002982e0
- (_Bool)brc_checkErrorsFromCloudKit:(CDUnknownBlockType)arg1;	// IMP=0x00100000002980a9
- (_Bool)brc_isEverRetriable;	// IMP=0x0010000000298020
- (_Bool)brc_shouldRetryLater;	// IMP=0x0010000000297fb3
- (_Bool)brc_isUserInitiatedRetriable;	// IMP=0x0010000000297f74
- (_Bool)brc_isRetriable;	// IMP=0x0010000000297d43
- (double)br_suggestedRetryTimeInterval;	// IMP=0x0010000000297b05
- (unsigned long long)brc_containerResetErrorForSharedZone:(_Bool)arg1 resetReason:(id *)arg2;	// IMP=0x00100000002974f5
- (_Bool)brc_isResetError;	// IMP=0x00100000002974d8
@end

