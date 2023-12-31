//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFRequestInfo.h>

@interface AFRequestInfo (SiriAce)
+ (id)_createAnnounceIncomingCallRequest:(id)arg1;	// IMP=0x002000000029b4e5
+ (id)_announceIncomingCallRequestInfoFromRequest:(id)arg1;	// IMP=0x001000000029b3f5
+ (id)_createAnnounceInHomeRequestFromSKIAnnouncePayload:(id)arg1;	// IMP=0x001000000029b319
+ (id)_createAnnounceWorkoutReminderRequestFromSKIAnnouncePayload:(id)arg1 announceNotificationRequest:(id)arg2;	// IMP=0x001000000029b265
+ (id)_createAnnounceWorkoutVoiceFeedbackRequestFromSKIAnnouncePayload:(id)arg1 skiAnnouncePayload:(id)arg2;	// IMP=0x001000000029b18f
+ (id)_updateStartLocalRequest:(id)arg1 withNewAnnouncePayload:(id)arg2 forAnnouncementType:(long long)arg3;	// IMP=0x001000000029b044
+ (id)_announceNotificationRequestInfoFromNotificationRequest:(id)arg1 previousRequest:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3 isMediaPlaying:(_Bool)arg4;	// IMP=0x001000000029ab3b
+ (id)requestInfoFromAnnouncementRequest:(id)arg1 previousRequest:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3 isMediaPlaying:(_Bool)arg4;	// IMP=0x001000000029a98d
- (void)_ad_setHandoffPayload:(id)arg1;	// IMP=0x00200000001e83bb
- (id)_ad_speechRequestOptionsWithClientConfiguration:(id)arg1;	// IMP=0x00100000001e811a
- (id)_ad_localRequestCommandWithRequestHelper:(id)arg1;	// IMP=0x00100000001e805a
- (id)_ad_requestCommandWithRequestHelper:(id)arg1;	// IMP=0x00100000001e7f6a
@end

