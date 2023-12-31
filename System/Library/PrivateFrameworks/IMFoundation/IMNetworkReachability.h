//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMNetworkReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x006000000003fef6
+ (id)reachabilityForInternetConnection;	// IMP=0x006000000003fe9a
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x006000000003fe0e
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x006000000003fd4a
- (long long)currentReachabilityStatus;	// IMP=0x000000000004019a
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000000040159
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000003ff62
- (void)dealloc;	// IMP=0x000000000003fd03

@end

