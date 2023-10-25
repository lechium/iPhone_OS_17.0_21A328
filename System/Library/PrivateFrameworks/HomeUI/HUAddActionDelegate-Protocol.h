//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, HMRoom, NSString;

@protocol HUAddActionDelegate
- (void)addHome;
- (void)addPeopleToHome:(HMHome *)arg1;
- (void)addRoomToHome:(HMHome *)arg1;
- (void)addAutomationToHome:(HMHome *)arg1;
- (void)addSceneToHome:(HMHome *)arg1;
- (void)addAccessoryToHome:(HMHome *)arg1 room:(HMRoom *)arg2;

@optional
- (void)sendContextMenuMetricsWithTitleLocalizationKey:(NSString *)arg1;
@end
