//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHLocalCountingAssertionAttributeHandler.h"

@class BLSHWatchdogProvider;

__attribute__((visibility("hidden")))
@interface BLSHDisableBacklightWatchdogsAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
{
    BLSHWatchdogProvider *_provider;	// 8 = 0x8
}

+ (Class)attributeBaseClass;	// IMP=0x0060000000045a48
+ (id)attributeClasses;	// IMP=0x00600000000459dc
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;	// IMP=0x00600000000458dc
- (void).cxx_destruct;	// IMP=0x0000000000045a9a
- (void)deactivateWithFinalEntry:(id)arg1;	// IMP=0x0000000000045a78
- (void)activateWithFirstEntry:(id)arg1;	// IMP=0x0000000000045a59
- (id)initForService:(id)arg1 provider:(id)arg2;	// IMP=0x0000000000045964

@end
