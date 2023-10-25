//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircle/NSObject-Protocol.h>

@class NSMutableSet;

@protocol FAPeopleDiscoveryServiceProtocol <NSObject>
+ (id)sharedInstance;
- (NSMutableSet *)getNearbyPeople;
- (void)stopMonitoringProximity;
- (void)startMonitoringProximity;
@end
