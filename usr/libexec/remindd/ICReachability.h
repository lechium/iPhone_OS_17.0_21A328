//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICReachability : NSObject
{
    _Bool _alwaysReturnLocalWiFiStatus;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x00400000000a8534
+ (id)sharedReachabilityForInternetConnection;	// IMP=0x00100000000a84e7
+ (id)reachabilityForInternetConnection;	// IMP=0x00100000000a848b
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x00100000000a842f
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x00100000000a83bc
- (long long)currentReachabilityStatus;	// IMP=0x00200000000a8795
- (_Bool)connectionRequired;	// IMP=0x00100000000a8763
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x00100000000a8730
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x00100000000a871d
- (void)dealloc;	// IMP=0x00100000000a86b2
- (void)stopNotifier;	// IMP=0x00100000000a867c
- (_Bool)startNotifier;	// IMP=0x00100000000a85a0

@end

