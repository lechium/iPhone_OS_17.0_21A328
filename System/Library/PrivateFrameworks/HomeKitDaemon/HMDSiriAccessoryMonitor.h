//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

__attribute__((visibility("hidden")))
@interface HMDSiriAccessoryMonitor : NSObject
{
    id <HMDSiriAccessoryMonitorDelegate> _delegate;	// 8 = 0x8
    NSMapTable *_accessories;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c976f
@property(retain, nonatomic) NSMapTable *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) __weak id <HMDSiriAccessoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessory:(id)arg1 setSupportsDragonSiri:(_Bool)arg2;	// IMP=0x00000000001c9666
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;	// IMP=0x00000000001c92bb
- (void)_removeAccessory:(id)arg1;	// IMP=0x00000000001c91b3
- (void)_addAccessory:(id)arg1 withTarget:(id)arg2;	// IMP=0x00000000001c90c2
- (id)_accessoriesTargetingAccessory:(id)arg1;	// IMP=0x00000000001c8e67
- (_Bool)hasAnyActiveTargetingAccessories;	// IMP=0x00000000001c8d01
- (id)_getInfoForAccessory:(id)arg1;	// IMP=0x00000000001c8c87
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001c8bf9

@end

