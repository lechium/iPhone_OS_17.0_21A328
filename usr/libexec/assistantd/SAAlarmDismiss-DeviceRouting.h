//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAlarmDismiss.h>

@interface SAAlarmDismiss (DeviceRouting)
- (id)ad_executionDeviceForDeviceContextTuples:(id)arg1 executionContext:(id)arg2 proximityMap:(id)arg3 sharedUserID:(id)arg4 localDeviceIsFollower:(_Bool)arg5;	// IMP=0x002000000009cd35
- (_Bool)ad_requiresProximityInformationForDeviceContextTuples:(id)arg1;	// IMP=0x001000000009cd2d
- (_Bool)ad_requiresDeviceContext;	// IMP=0x001000000009cd25
- (id)_ad_alarmResponseForResponse:(id)arg1;	// IMP=0x00100000001f6245
- (void)_ad_getAlarmRequestRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f60f6
@end

