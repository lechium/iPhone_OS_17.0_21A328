//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSString;

__attribute__((visibility("hidden")))
@interface HMDDeviceNotificationHandlerDefaultDataSource : NSObject
{
    HMDHome *_home;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001cf1c7
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (id)timerWithType:(unsigned char)arg1;	// IMP=0x00000000001cf0d8
- (id)initWithHome:(id)arg1;	// IMP=0x00000000001cf074

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

