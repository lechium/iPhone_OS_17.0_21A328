//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPScheduler-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol HKSPQueueBackedScheduler <HKSPScheduler>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@end

