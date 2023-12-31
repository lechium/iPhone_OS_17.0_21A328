//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface WiFiManager : NSObject
{
    int _clientType;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedWiFiManager;	// IMP=0x00400000001d2ce4
- (id)_wifiInterfaceName;	// IMP=0x00200000001d2e81
- (long long)_wifiClientTypeForManagerType:(int)arg1;	// IMP=0x00100000001d2e79
- (void *)_wifiClient;	// IMP=0x00100000001d2e71
@property int clientType;
@property(readonly) NSString *IPAddress;
- (void)dealloc;	// IMP=0x00100000001d2ca5
- (id)init;	// IMP=0x00100000001d2c57

@end

