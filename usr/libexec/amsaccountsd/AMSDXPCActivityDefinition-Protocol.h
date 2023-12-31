//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol AMSDXPCActivitySchedulerProtocol, OS_xpc_object;

@protocol AMSDXPCActivityDefinition
- (void)runActivityQueuedByScheduler:(id <AMSDXPCActivitySchedulerProtocol>)arg1;
- (NSObject<OS_xpc_object> *)criteria;
- (NSString *)activityIdentifier;
@end

