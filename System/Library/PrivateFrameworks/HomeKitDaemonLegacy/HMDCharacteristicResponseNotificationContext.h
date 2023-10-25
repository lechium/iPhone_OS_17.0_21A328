//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicResponseNotificationContext : HMFObject
{
    _Bool _pendingMultiPartResponses;	// 8 = 0x8
    NSSet *_changedCharacteristics;	// 16 = 0x10
    NSDictionary *_notificationPayloadByAccessoryUUID;	// 24 = 0x18
    NSSet *_responseCharacteristics;	// 32 = 0x20
    NSUUID *_requestIdentifier;	// 40 = 0x28
}

+ (id)updateMultipleCharacteristicReadWriteResponsePayload:(id)arg1 withUnhandledRequests:(id)arg2;	// IMP=0x0060000000b3cb19
+ (id)notificationUpdateMessagePayloadForHome:(id)arg1 notificationEnabled:(_Bool)arg2 characteristics:(id)arg3 characteristicsErrorsMap:(id)arg4;	// IMP=0x0060000000b3c313
+ (id)responsePayloadForHome:(id)arg1 changedAccessories:(id)arg2 moreMessagesInMultipart:(id)arg3;	// IMP=0x0060000000b3c1c5
- (void).cxx_destruct;	// IMP=0x0000000000b3c172
@property(readonly, getter=hasPendingMultiPartResponses) _Bool pendingMultiPartResponses; // @synthesize pendingMultiPartResponses=_pendingMultiPartResponses;
@property(readonly, copy) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy) NSSet *responseCharacteristics; // @synthesize responseCharacteristics=_responseCharacteristics;
@property(readonly, copy) NSDictionary *notificationPayloadByAccessoryUUID; // @synthesize notificationPayloadByAccessoryUUID=_notificationPayloadByAccessoryUUID;
@property(readonly, copy) NSSet *changedCharacteristics; // @synthesize changedCharacteristics=_changedCharacteristics;
- (id)attributeDescriptions;	// IMP=0x0000000000b3bf2d
- (id)notificationWithHome:(id)arg1;	// IMP=0x0000000000b3bdbd
- (id)initWithRequestIdentifier:(id)arg1 responses:(id)arg2 pendingMultiPartResponses:(_Bool)arg3;	// IMP=0x0000000000b3adfa

@end
