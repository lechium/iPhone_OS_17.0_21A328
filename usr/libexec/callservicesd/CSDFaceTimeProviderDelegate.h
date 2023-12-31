//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPApplicationMonitor, CPBiomeSessionDonator, CPConversationManagerHost, CSDConversationManager, CSDConversationManagerXPCServer, CSDFaceTimeConversationProviderDelegate, CSDFaceTimeIDSProviderDelegate, CSDFaceTimeIMAVProviderDelegate, CSDFaceTimeInviteDemuxer, CSDGFTServiceConversationProviderDelegate, CSDNeighborhoodActivityConduit, CSDProviderCallDataSource, CXProvider, NSMutableDictionary, NSString, TUNeighborhoodActivityConduit;
@protocol OS_dispatch_queue, TUFeatureFlags;

@interface CSDFaceTimeProviderDelegate : NSObject
{
    _Bool _shouldUseIDSDemuxer;	// 8 = 0x8
    CSDConversationManagerXPCServer *_conversationManagerXPCServer;	// 16 = 0x10
    CPConversationManagerHost *_conversationManagerHost;	// 24 = 0x18
    CPBiomeSessionDonator *_cpBiomeStreamDonator;	// 32 = 0x20
    CPApplicationMonitor *_applicationMonitor;	// 40 = 0x28
    TUNeighborhoodActivityConduit *_neighborhoodActivityConduit;	// 48 = 0x30
    id <TUFeatureFlags> _featureFlags;	// 56 = 0x38
    CXProvider *_provider;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSMutableDictionary *_delayedActionsByCallUUID;	// 80 = 0x50
    CSDFaceTimeInviteDemuxer *_faceTimeInviteDemuxer;	// 88 = 0x58
    CSDFaceTimeIDSProviderDelegate *_faceTimeIDSProviderDelegate;	// 96 = 0x60
    CSDFaceTimeIMAVProviderDelegate *_faceTimeIMAVProviderDelegate;	// 104 = 0x68
    CSDFaceTimeConversationProviderDelegate *_faceTimeConversationProviderDelegate;	// 112 = 0x70
    CSDGFTServiceConversationProviderDelegate *_groupFaceTimeServiceProviderDelegate;	// 120 = 0x78
    CSDConversationManager *_conversationManager;	// 128 = 0x80
    CSDProviderCallDataSource *_callDataSource;	// 136 = 0x88
    CSDNeighborhoodActivityConduit *_conduit;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000000d7294
@property(readonly, nonatomic) CSDNeighborhoodActivityConduit *conduit; // @synthesize conduit=_conduit;
@property(nonatomic) __weak CSDProviderCallDataSource *callDataSource; // @synthesize callDataSource=_callDataSource;
@property(readonly, nonatomic) CSDConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(retain, nonatomic) CSDGFTServiceConversationProviderDelegate *groupFaceTimeServiceProviderDelegate; // @synthesize groupFaceTimeServiceProviderDelegate=_groupFaceTimeServiceProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeConversationProviderDelegate *faceTimeConversationProviderDelegate; // @synthesize faceTimeConversationProviderDelegate=_faceTimeConversationProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeIMAVProviderDelegate *faceTimeIMAVProviderDelegate; // @synthesize faceTimeIMAVProviderDelegate=_faceTimeIMAVProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeIDSProviderDelegate *faceTimeIDSProviderDelegate; // @synthesize faceTimeIDSProviderDelegate=_faceTimeIDSProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeInviteDemuxer *faceTimeInviteDemuxer; // @synthesize faceTimeInviteDemuxer=_faceTimeInviteDemuxer;
@property(readonly, nonatomic) NSMutableDictionary *delayedActionsByCallUUID; // @synthesize delayedActionsByCallUUID=_delayedActionsByCallUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CXProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) _Bool shouldUseIDSDemuxer; // @synthesize shouldUseIDSDemuxer=_shouldUseIDSDemuxer;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) TUNeighborhoodActivityConduit *neighborhoodActivityConduit; // @synthesize neighborhoodActivityConduit=_neighborhoodActivityConduit;
@property(readonly, nonatomic) CPApplicationMonitor *applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(readonly, nonatomic) CPBiomeSessionDonator *cpBiomeStreamDonator; // @synthesize cpBiomeStreamDonator=_cpBiomeStreamDonator;
@property(readonly, nonatomic) CPConversationManagerHost *conversationManagerHost; // @synthesize conversationManagerHost=_conversationManagerHost;
@property(readonly, nonatomic) CSDConversationManagerXPCServer *conversationManagerXPCServer; // @synthesize conversationManagerXPCServer=_conversationManagerXPCServer;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;	// IMP=0x00100000000d702a
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;	// IMP=0x00100000000d6ef1
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;	// IMP=0x00100000000d66c7
- (void)provider:(id)arg1 performSetScreeningCallAction:(id)arg2;	// IMP=0x00100000000d5ef0
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x00100000000d5719
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x00100000000d4f42
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x00100000000d476b
- (void)provider:(id)arg1 performEnableVideoCallAction:(id)arg2;	// IMP=0x00100000000d3f94
- (void)provider:(id)arg1 performSetScreenShareAttributesCallAction:(id)arg2;	// IMP=0x00100000000d37bd
- (void)provider:(id)arg1 performSetSharingScreenCallAction:(id)arg2;	// IMP=0x00100000000d2fe6
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x00100000000d280f
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x00100000000d2038
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x00100000000d1813
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x00100000000d103c
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2 shouldUseIDSDemuxer:(_Bool)arg3;	// IMP=0x00100000000d00ad
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x00100000000cff97
- (void)initiateModernFTInviteForAction:(id)arg1 destinations:(id)arg2 excludedIMAVDestinations:(id)arg3 joinCallActionToFulfill:(id)arg4;	// IMP=0x00100000000cf8ae
- (void)provider:(id)arg1 performStartCallAction:(id)arg2 shouldUseIDSDemuxer:(_Bool)arg3;	// IMP=0x00100000000ced67
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;	// IMP=0x00100000000cece9
- (void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;	// IMP=0x00100000000cec44
- (void)providerDidReset:(id)arg1;	// IMP=0x00100000000ceb1f
- (void)providerDidBegin:(id)arg1;	// IMP=0x00100000000ce9fa
- (void)providerDelegate:(id)arg1 endOtherProvidersCallWithUUID:(id)arg2;	// IMP=0x00100000000ce7cf
- (_Bool)providerDelegate:(id)arg1 isExclusivelyManagingCallWithUUID:(id)arg2;	// IMP=0x00100000000ce5d1
- (_Bool)providerDelegate:(id)arg1 isManagingCallWithUUID:(id)arg2;	// IMP=0x00100000000ce54e
- (void)providerDelegate:(id)arg1 requestedUpgradeToExistingCallForConversation:(id)arg2 withSessionToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ce388
- (void)providerDelegate:(id)arg1 requestedTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ce26f
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 endedAtDate:(id)arg3 withReason:(long long)arg4 failureContext:(id)arg5;	// IMP=0x00100000000cdb7b
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 connectedAtDate:(id)arg3;	// IMP=0x00100000000cd97e
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;	// IMP=0x00100000000cd781
- (void)_processDelayedActionList:(id)arg1 provider:(id)arg2;	// IMP=0x00100000000cd415
- (void)_createDelayedActionListIfNecessary:(id)arg1;	// IMP=0x00100000000cd342
- (void)deferReportingAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x00100000000cd22e
- (void)updateProviderConfigurationWithSenderIdentities:(id)arg1;	// IMP=0x00100000000cd1c5
- (id)ISOCountryCodeForCallWithUUID:(id)arg1;	// IMP=0x00100000000cd14b
- (id)providerConfiguration;	// IMP=0x00100000000cd089
- (void)dealloc;	// IMP=0x00100000000cd01e
- (id)initWithCallSource:(id)arg1 queue:(id)arg2 featureFlags:(id)arg3 shouldUseIDSDemuxer:(_Bool)arg4 chManager:(id)arg5;	// IMP=0x00100000000cc8bc
- (id)initWithCallSource:(id)arg1 queue:(id)arg2 chManager:(id)arg3;	// IMP=0x00100000000cc802
- (id)init;	// IMP=0x00100000000cc778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

