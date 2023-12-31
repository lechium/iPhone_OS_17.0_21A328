//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKProfileServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000002a5fd
+ (Class)interfaceClass;	// IMP=0x001000000002a5ec
- (oneway void)clearScopedIdsCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x002000000003482c
- (oneway void)cacheScopedIds:(id)arg1 forPlayerId:(id)arg2;	// IMP=0x0010000000034320
- (void)requestScopedIdsFromNetwork:(id)arg1 requestDict:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000033ded
- (oneway void)loadScopedPlayerIDs:(id)arg1 gameBundleIds:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032ca0
- (oneway void)loadScopedPlayerIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032b4f
- (void)loadProfileForPlayer:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000031dec
- (oneway void)getProfilesForPlayerIDs:(id)arg1 fetchOptions:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000317f7
- (oneway void)startContactsIntegrationIDSSyncForHandles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003158a
- (oneway void)startContactsIntegrationSyncWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031362
- (oneway void)clearContactsIntegrationCachesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000312f5
- (oneway void)getGameCenterRelationshipsForContact:(id)arg1 shouldRefresh:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030c05
- (void)updateContactsIntegrationInfoFromLocalPlayerProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030908
- (oneway void)setContactsIntegrationConsent:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fcd6
- (oneway void)getContactsIntegrationConsentWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f79f
- (oneway void)getProfilePrivacyWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f3e1
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f234
- (oneway void)setProfileSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ee23
- (oneway void)setProfilePrivacy:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e6e2
- (oneway void)setPrivacyNoticeVersion:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e0be
- (oneway void)setArcadeSubscriptionExpiration:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002dd4c
- (oneway void)setGlobalFriendListAccess:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d891
- (oneway void)getTermsAndConditionsURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d287
- (oneway void)getSuggestionsForNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cc0e
- (oneway void)setPlayerNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002c24a
- (oneway void)setFindable:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bd89
- (oneway void)deletePhotoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002b7d2
- (oneway void)setPhotoData:(id)arg1 avatarType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b19f
- (oneway void)cachePhotos:(id)arg1 avatarType:(id)arg2 fileNames:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002abc1
- (oneway void)setStatus:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a608

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

