//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKObserverBridgeHandle;

__attribute__((visibility("hidden")))
@interface _HKWatchAppInstallationManagerObserverBridge : NSObject
{
    HKObserverBridgeHandle *_handle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002732b7
@property(readonly, nonatomic) HKObserverBridgeHandle *handle; // @synthesize handle=_handle;
- (void)watchAppInstallationManagerDidObserveChange:(id)arg1;	// IMP=0x0000000000273090
- (id)initWithHandle:(id)arg1;	// IMP=0x0000000000273025

@end
