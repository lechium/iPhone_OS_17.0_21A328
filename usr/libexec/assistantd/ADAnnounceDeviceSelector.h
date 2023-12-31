//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, ADExternalNotificationRequestHandler, ADSiriHeadphonesMonitor, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADAnnounceDeviceSelector : NSObject
{
    ADDeviceCircleManager *_deviceCircleManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cachePurgeQueue;	// 16 = 0x10
    NSMutableDictionary *_announceIdToRemoteAssistantIdMap;	// 24 = 0x18
    NSMutableDictionary *_predictionIdToAnnounceIdMap;	// 32 = 0x20
    ADExternalNotificationRequestHandler *_externalNotificationRequestHandler;	// 40 = 0x28
    ADSiriHeadphonesMonitor *_headphonesManager;	// 48 = 0x30
}

+ (id)_requestToExecuteCommand:(id)arg1 onRemoteWithAssistantId:(id)arg2;	// IMP=0x004000000010116a
+ (id)sharedDeviceSelector;	// IMP=0x001000000010113a
- (void).cxx_destruct;	// IMP=0x00200000001003a0
@property(readonly, nonatomic) ADSiriHeadphonesMonitor *headphonesManager; // @synthesize headphonesManager=_headphonesManager;
@property(readonly, nonatomic) ADExternalNotificationRequestHandler *externalNotificationRequestHandler; // @synthesize externalNotificationRequestHandler=_externalNotificationRequestHandler;
@property(retain) NSMutableDictionary *predictionIdToAnnounceIdMap; // @synthesize predictionIdToAnnounceIdMap=_predictionIdToAnnounceIdMap;
@property(retain) NSMutableDictionary *announceIdToRemoteAssistantIdMap; // @synthesize announceIdToRemoteAssistantIdMap=_announceIdToRemoteAssistantIdMap;
- (void)_populateCachesForRequest:(id)arg1 toRemoteAssistantId:(id)arg2;	// IMP=0x001000000010007c
- (void)handleRemoteDismissRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fff58
- (id)_announcementRequestFromRemoteAnnouncementRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ffd90
- (void)handleRemoteAnnounceRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ff962
- (id)_createPerformRemoteAnnoucementRequestFromNotificationRequest:(id)arg1;	// IMP=0x00100000000ff736
- (void)sendRemoteAnnouncementRequest:(id)arg1 toAssistantId:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ff49d
- (void)handleAnnouncementRequest:(id)arg1;	// IMP=0x00100000000fef57
- (void)deactivateWorkoutReminderAnnouncementWithPredictionId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000febbe
- (_Bool)_shouldHandleAnnouncementLocallyForRoute:(id)arg1 notificationRequest:(id)arg2;	// IMP=0x00100000000fea73
- (id)pairedPhone;	// IMP=0x00100000000fe983
- (id)_init;	// IMP=0x00100000000fe835

@end

