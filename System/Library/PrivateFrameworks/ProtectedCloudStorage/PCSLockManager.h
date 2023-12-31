//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PCSLockManager : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    NSHashTable *_holders;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
}

+ (void)dropAssertion;	// IMP=0x0060000000023e85
+ (_Bool)holdAssertion;	// IMP=0x0060000000023e7d
+ (id)manager;	// IMP=0x0060000000023e18
- (void).cxx_destruct;	// IMP=0x000000000002440d
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSHashTable *holders; // @synthesize holders=_holders;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
- (void)dropAssertion:(id)arg1;	// IMP=0x0000000000024329
- (void)_onlockDropAssertion:(id)arg1;	// IMP=0x00000000000241b9
- (_Bool)holdAssertion:(id)arg1;	// IMP=0x0000000000023fca
- (void)removeAssertion:(id)arg1;	// IMP=0x0000000000023f3b
- (id)lockAssertion:(id)arg1;	// IMP=0x0000000000023e8b
- (id)initManager;	// IMP=0x0000000000023d5d

@end

