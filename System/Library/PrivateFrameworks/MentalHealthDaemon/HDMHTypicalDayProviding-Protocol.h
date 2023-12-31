//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSObject;
@protocol HDMHTypicalDayProviderObserver, OS_dispatch_queue;

@protocol HDMHTypicalDayProviding
- (void)removeObserver:(id <HDMHTypicalDayProviderObserver>)arg1;
- (void)registerObserver:(id <HDMHTypicalDayProviderObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSDate *)userEndOfDay;
- (NSDate *)userStartOfDay;
- (void)rebuildTypicalDayProviderForCurrentDate;
@end

