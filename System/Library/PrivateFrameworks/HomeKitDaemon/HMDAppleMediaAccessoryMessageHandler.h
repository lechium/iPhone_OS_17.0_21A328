//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryMessageHandler
{
}

- (void)handleAppleMediaAccessoryDeviceIsReachableNotification:(id)arg1;	// IMP=0x0000000000ac94b4
- (void)handleAppleMediaAccessoryDeviceUpdatedNotification:(id)arg1;	// IMP=0x0000000000ac939b
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8;	// IMP=0x0000000000ac9148

@end
