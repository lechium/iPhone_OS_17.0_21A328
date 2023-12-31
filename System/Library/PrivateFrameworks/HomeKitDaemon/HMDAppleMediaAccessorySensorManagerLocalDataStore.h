//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySensorManagerLocalDataStore : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000089c357
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)fetchSensorUUIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000089c283
- (void)saveSensorUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000089c1c5
- (void)saveSensorUUID:(id)arg1;	// IMP=0x000000000089c1b1
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x000000000089c149
- (id)init;	// IMP=0x000000000089c0ef

@end

