//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone
{
    _Bool _useAnonymousRequests;	// 12 = 0xc
    NSSet *_modifiedRecordIDsFromLastPull;	// 16 = 0x10
    NSMutableSet *_uncommittedModifiedRecordIDsFromLastPull;	// 24 = 0x18
    NSSet *_watchedRecordIDs;	// 32 = 0x20
    NSArray *_signatureVerificationPublicKeys;	// 40 = 0x28
}

+ (_Bool)verifyPairedMetadataFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 error:(id *)arg3;	// IMP=0x006000000003a332
+ (_Bool)verifyNetworkDeclarationsFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 error:(id *)arg3;	// IMP=0x006000000003a2e2
+ (_Bool)verifyNetworkDeclarationsFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 baseAccessoryIdentifier:(id *)arg3 data:(id *)arg4 error:(id *)arg5;	// IMP=0x006000000003a21c
+ (_Bool)__verifyDataFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 dataKey:(id)arg3 dataAssetKey:(id)arg4 maxDataSize:(unsigned long long)arg5 signatureKey:(id)arg6 signatureAssetKey:(id)arg7 maxSignatureSize:(unsigned long long)arg8 baseAccessoryIdentifier:(id *)arg9 data:(id *)arg10 error:(id *)arg11;	// IMP=0x006000000003a013
+ (id)__getDataFromRecord:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0060000000039f66
+ (_Bool)__verifyDigestDataAgainstSignatureFromRecord:(id)arg1 digestData:(id)arg2 signatureData:(id)arg3 signatureVerificationPublicKeys:(id)arg4 error:(id *)arg5;	// IMP=0x0060000000039bf6
+ (id)__getSignatureDataFromRecord:(id)arg1 signatureKey:(id)arg2 signatureAssetKey:(id)arg3 maxSignatureSize:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0060000000039b36
+ (id)__calculateDigestDataFromRecord:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0060000000039116
+ (id)__createBaseAccessoryIdentifierFromRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000038bb9
+ (unsigned long long)__maxSizeForCKRecordString;	// IMP=0x0060000000038b9b
+ (unsigned long long)__maxSizeForCKRecordPairedMetadataSignature;	// IMP=0x0060000000038b7d
+ (unsigned long long)__maxSizeForCKRecordPairedMetadata;	// IMP=0x0060000000038b5f
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarationsSignature;	// IMP=0x0060000000038b41
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarations;	// IMP=0x0060000000038b23
+ (unsigned long long)__maxSizeFromPreferenceWithKey:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x0060000000038a22
- (void).cxx_destruct;	// IMP=0x00000000009a07c5
@property(readonly, nonatomic) NSArray *signatureVerificationPublicKeys; // @synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys;
@property(readonly, nonatomic) NSSet *watchedRecordIDs; // @synthesize watchedRecordIDs=_watchedRecordIDs;
@property(readonly, nonatomic) _Bool useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
- (void)__retryFetchWithFetchInfo:(id)arg1;	// IMP=0x00000000009a04b4
- (_Bool)__canRecoverFromError:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x000000000099febb
- (_Bool)__commitLocalChanges:(id)arg1 error:(id *)arg2;	// IMP=0x000000000099f645
- (void)__zoneChangesCompleted:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x000000000099f321
- (void)__zoneFetchCompletedWithChangeToken:(id)arg1 error:(id)arg2 moreComing:(_Bool)arg3 fetchInfo:(id)arg4;	// IMP=0x000000000099ef90
- (void)__zoneChangeTokensUpdated:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x000000000099edb2
- (void)__recordDeleted:(id)arg1 recordType:(id)arg2 fetchInfo:(id)arg3;	// IMP=0x000000000099e93d
- (void)__recordChanged:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x000000000099e1ae
- (void)__finalizeUpdatedRecordIDs;	// IMP=0x000000000099e08d
- (void)__noteUpdatedRecordID:(id)arg1;	// IMP=0x000000000099df8e
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;	// IMP=0x000000000099da4d
- (id)fetchChangesWithToken:(id)arg1 options:(id)arg2;	// IMP=0x000000000099d8f2
- (void)startUpWithLocalZone:(id)arg1;	// IMP=0x000000000099d845
@property(retain, nonatomic) NSMutableSet *uncommittedModifiedRecordIDsFromLastPull; // @synthesize uncommittedModifiedRecordIDsFromLastPull=_uncommittedModifiedRecordIDsFromLastPull;
@property(retain, nonatomic) NSSet *modifiedRecordIDsFromLastPull; // @synthesize modifiedRecordIDsFromLastPull=_modifiedRecordIDsFromLastPull;
- (id)attributeDescriptions;	// IMP=0x000000000099d44e
- (id)initWithCloudDatabase:(id)arg1 state:(id)arg2 useAnonymousRequests:(_Bool)arg3 watchedRecordIDs:(id)arg4 signatureVerificationPublicKeys:(id)arg5;	// IMP=0x000000000099d1af
- (id)decodeModelFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000038045

@end

