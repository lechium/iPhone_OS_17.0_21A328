//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccount, IDSGroupSession, NSArray, NSSet, NSString;
@protocol CSDIDSGroupSessionProviderDelegate, OS_dispatch_queue, TUFeatureFlags;

@interface CSDIDSGroupSessionProvider : NSObject
{
    _Bool _avLess;	// 8 = 0x8
    _Bool _isOneToOneModeEnabled;	// 9 = 0x9
    _Bool _isLightweightMember;	// 10 = 0xa
    IDSGroupSession *_session;	// 16 = 0x10
    id <CSDIDSGroupSessionProviderDelegate> _delegate;	// 24 = 0x18
    NSArray *_participantDestinationIDs;	// 32 = 0x20
    NSString *_groupID;	// 40 = 0x28
    IDSAccount *_account;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSString *_callerID;	// 64 = 0x40
    id <TUFeatureFlags> _featureFlags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000702b2
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, copy, nonatomic) NSString *callerID; // @synthesize callerID=_callerID;
@property(readonly, nonatomic) _Bool isLightweightMember; // @synthesize isLightweightMember=_isLightweightMember;
@property(readonly, nonatomic) _Bool isOneToOneModeEnabled; // @synthesize isOneToOneModeEnabled=_isOneToOneModeEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) IDSAccount *account; // @synthesize account=_account;
@property(readonly, copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSArray *participantDestinationIDs; // @synthesize participantDestinationIDs=_participantDestinationIDs;
@property(nonatomic) __weak id <CSDIDSGroupSessionProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSGroupSession *session; // @synthesize session=_session;
@property(readonly, nonatomic, getter=isAVLess) _Bool avLess; // @synthesize avLess=_avLess;
- (void)session:(id)arg1 didReceiveServerErrorCode:(unsigned int)arg2;	// IMP=0x00100000000701c5
- (void)session:(id)arg1 didReceiveData:(id)arg2 dataType:(unsigned short)arg3 forParticipant:(id)arg4;	// IMP=0x0010000000070136
- (void)session:(id)arg1 didReceiveDataBlob:(id)arg2 forParticipant:(id)arg3;	// IMP=0x00100000000700a8
- (void)sessiondidReceiveKeyUpdate:(id)arg1;	// IMP=0x001000000007005c
- (void)session:(id)arg1 didUnregisterPluginAllocationInfo:(id)arg2;	// IMP=0x001000000006fff1
- (void)session:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;	// IMP=0x001000000006ff86
- (void)sessionDidReceiveParticipantUpgrade:(id)arg1 participantType:(unsigned short)arg2 error:(id)arg3;	// IMP=0x001000000006ff0e
- (void)session:(id)arg1 didReceiveParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 managementType:(unsigned short)arg4;	// IMP=0x001000000006fee1
- (void)session:(id)arg1 didReceiveBlockedParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 withType:(unsigned short)arg4 isTruncated:(_Bool)arg5;	// IMP=0x001000000006fe53
- (void)session:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x001000000006fde8
- (void)session:(id)arg1 didReceiveActiveLightweightParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x001000000006fd6e
- (void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x001000000006fcf4
- (void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;	// IMP=0x001000000006fc89
- (void)sessionDidJoinGroup:(id)arg1 participantUpdate:(id)arg2 error:(id)arg3;	// IMP=0x001000000006fbbf
- (void)groupSessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x001000000006fb47
- (void)groupSessionDidTerminate:(id)arg1;	// IMP=0x001000000006fafb
- (void)setScreening:(_Bool)arg1;	// IMP=0x001000000006f9e4
- (void)setParticipantType:(unsigned short)arg1 forRemoteMemberDestinations:(id)arg2;	// IMP=0x001000000006f873
- (void)setLocalParticipantType:(unsigned short)arg1 memberDestinations:(id)arg2;	// IMP=0x001000000006f6a3
- (void)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006f45b
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x001000000006f329
- (void)addAliasesToConversationContainer:(id)arg1 withSalt:(id)arg2;	// IMP=0x001000000006eedf
@property(readonly, nonatomic) NSSet *requiredLackOfCapabilities;
@property(readonly, nonatomic) NSSet *requiredCapabilities;
- (void)removeRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x001000000006ebe4
- (void)addRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x001000000006e8c7
- (void)requestEncryptionKeyForParticipants:(id)arg1 topic:(id)arg2;	// IMP=0x001000000006e78b
- (void)requestDataCryptorForTopic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006e657
- (void)registerPluginWithOptions:(id)arg1;	// IMP=0x001000000006e4f5
- (void)allowParticipants:(id)arg1;	// IMP=0x001000000006e487
- (void)kickParticipants:(id)arg1;	// IMP=0x001000000006e419
- (void)reconnect;	// IMP=0x001000000006e2e6
- (void)requestActiveParticipants;	// IMP=0x001000000006e1f7
- (void)restart;	// IMP=0x001000000006e10a
- (void)leaveWithOptions:(id)arg1;	// IMP=0x001000000006dfcd
- (void)leave;	// IMP=0x001000000006df30
- (void)sendParticipantData:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000006ddea
- (void)updateParticipantDestinationIDs:(id)arg1 withContextData:(id)arg2 requiredCapabilities:(id)arg3 requiredLackOfCapabilities:(id)arg4 triggeredLocally:(_Bool)arg5;	// IMP=0x001000000006dbc6
- (void)updateParticipantDestinationIDs:(id)arg1 withContextData:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x001000000006da68
- (void)joinWithOptions:(id)arg1;	// IMP=0x001000000006d96b
- (void)setPreferences:(id)arg1;	// IMP=0x001000000006d88a
@property(readonly, copy, nonatomic) NSString *destination;
@property(readonly, copy, nonatomic) NSString *UUID;
@property(readonly, nonatomic) unsigned int endedReason;
- (void)setUpSession;	// IMP=0x001000000006d499
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000006d3f0
- (id)initWithGroupID:(id)arg1 participantDestinationIDs:(id)arg2 callerID:(id)arg3 account:(id)arg4 queue:(id)arg5 isOneToOneModeEnabled:(_Bool)arg6 isLightweightMember:(_Bool)arg7 avLess:(_Bool)arg8;	// IMP=0x001000000006d215

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

