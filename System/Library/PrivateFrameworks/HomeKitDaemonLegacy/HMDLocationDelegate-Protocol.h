//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class CLLocation, CLRegion;

@protocol HMDLocationDelegate <NSObject>

@optional
- (void)didDetermineLocation:(CLLocation *)arg1;
- (void)didExitRegion:(CLRegion *)arg1;
- (void)didEnterRegion:(CLRegion *)arg1;
- (void)didDetermineState:(long long)arg1 forRegion:(CLRegion *)arg2;
@end
