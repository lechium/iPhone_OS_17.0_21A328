//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraRecordingAnalysisNode, NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingLoadBalancerDecision : HMFObject
{
    NSUUID *_cameraUUID;	// 8 = 0x8
    long long _numberOfAvailableDevices;	// 16 = 0x10
    long long _totalNumberOfJobSlots;	// 24 = 0x18
    long long _remainingNumberOfJobSlots;	// 32 = 0x20
    HMDCameraRecordingAnalysisNode *_analysisNode;	// 40 = 0x28
    NSDate *_decisionDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009d215d
@property(readonly, copy) NSDate *decisionDate; // @synthesize decisionDate=_decisionDate;
@property(readonly) HMDCameraRecordingAnalysisNode *analysisNode; // @synthesize analysisNode=_analysisNode;
@property(readonly) long long remainingNumberOfJobSlots; // @synthesize remainingNumberOfJobSlots=_remainingNumberOfJobSlots;
@property(readonly) long long totalNumberOfJobSlots; // @synthesize totalNumberOfJobSlots=_totalNumberOfJobSlots;
@property(readonly) long long numberOfAvailableDevices; // @synthesize numberOfAvailableDevices=_numberOfAvailableDevices;
@property(readonly, copy) NSUUID *cameraUUID; // @synthesize cameraUUID=_cameraUUID;
- (id)attributeDescriptions;	// IMP=0x00000000009d1e01
@property(readonly, getter=isExpired) _Bool expired;
@property(readonly, copy) NSUUID *deviceUUID;
- (id)initWithCameraUUID:(id)arg1 numberOfAvailableDevices:(long long)arg2 totalNumberOfJobSlots:(long long)arg3 remainingNumberOfJobSlots:(long long)arg4 analysisNode:(id)arg5 decisionDate:(id)arg6;	// IMP=0x00000000009d1be0

@end
