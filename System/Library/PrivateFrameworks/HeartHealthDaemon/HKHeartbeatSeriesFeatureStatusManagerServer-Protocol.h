//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeartHealthDaemon/NSObject-Protocol.h>

@protocol HKHeartbeatSeriesFeatureStatusManagerServer <NSObject>
- (void)remote_updateAndNotifyAllObservers;
- (void)remote_stopObservingChanges;
- (void)remote_startObservingChangesWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
@end
