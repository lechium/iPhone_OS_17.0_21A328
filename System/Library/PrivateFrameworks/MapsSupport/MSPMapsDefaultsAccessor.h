//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MSPMapsDefaultsAccessor : NSObject
{
    _Bool _protectedDataAvailable;	// 8 = 0x8
}

+ (void)synchronize;	// IMP=0x0010000000047bbe
+ (void)set:(id)arg1 value:(id)arg2;	// IMP=0x0010000000047b33
+ (id)get:(id)arg1;	// IMP=0x0010000000047ab9
+ (id)sharedInstance;	// IMP=0x0010000000047796
- (void)_synchronize;	// IMP=0x0000000000047a1b
- (void)_set:(id)arg1 value:(id)arg2;	// IMP=0x0000000000047953
- (id)_get:(id)arg1;	// IMP=0x00000000000478aa
- (void)protectedDataDidBecomeAvailable:(id)arg1;	// IMP=0x00000000000478a0
- (id)init;	// IMP=0x000000000004781b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

