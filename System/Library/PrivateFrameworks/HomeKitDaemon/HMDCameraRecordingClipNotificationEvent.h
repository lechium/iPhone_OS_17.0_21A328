//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingClipNotificationEvent
{
    unsigned long long _recordingEventTriggers;	// 32 = 0x20
}

@property(readonly) unsigned long long recordingEventTriggers; // @synthesize recordingEventTriggers=_recordingEventTriggers;
- (id)attributeDescriptions;	// IMP=0x000000000060e3f1
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3 recordingEventTriggers:(unsigned long long)arg4;	// IMP=0x000000000060e3ad

@end
