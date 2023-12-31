//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityAchievementsDaemon/NSObject-Protocol.h>

@class ACHEarnedInstanceStore, NSArray;

@protocol ACHEarnedInstanceStoreObserving <NSObject>
- (void)earnedInstanceStoreDidReceiveSyncNotification:(ACHEarnedInstanceStore *)arg1;
- (void)earnedInstanceStore:(ACHEarnedInstanceStore *)arg1 didRemoveEarnedInstances:(NSArray *)arg2;
- (void)earnedInstanceStore:(ACHEarnedInstanceStore *)arg1 didAddNewEarnedInstances:(NSArray *)arg2;

@optional
- (void)earnedInstanceStoreDidFinishInitialFetch:(ACHEarnedInstanceStore *)arg1;
@end

