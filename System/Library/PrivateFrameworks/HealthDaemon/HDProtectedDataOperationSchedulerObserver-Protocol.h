//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDProtectedDataOperationScheduler, NSString;

@protocol HDProtectedDataOperationSchedulerObserver <NSObject>
- (NSString *)diagnosticDescription;
- (void)protectedDataOperationSchedulerProtectedDataIsAvailable:(HDProtectedDataOperationScheduler *)arg1;
- (void)protectedDataOperationSchedulerProfileIsReady:(HDProtectedDataOperationScheduler *)arg1;
@end

