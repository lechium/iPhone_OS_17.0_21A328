//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface COSReachabilityMonitor : NSObject
{
    _Bool _monitorStarted;	// 8 = 0x8
    _Bool _isNetworkReachable;	// 9 = 0x9
    _Bool _isConnectedOverWifi;	// 10 = 0xa
    _Bool _isBluetoothAvailable;	// 11 = 0xb
}

+ (id)sharedMonitor;	// IMP=0x00400000000faf17
@property(nonatomic) _Bool isBluetoothAvailable; // @synthesize isBluetoothAvailable=_isBluetoothAvailable;
@property(nonatomic) _Bool isConnectedOverWifi; // @synthesize isConnectedOverWifi=_isConnectedOverWifi;
@property(nonatomic) _Bool isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
- (void)stopMonitoring;	// IMP=0x00100000000fb07c
- (void)startMonitoring;	// IMP=0x00100000000fb076
- (void)dealloc;	// IMP=0x00100000000fb00f
- (id)init;	// IMP=0x00100000000faf6c

@end

