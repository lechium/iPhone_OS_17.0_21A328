//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;

__attribute__((visibility("hidden")))
@interface HDHRHealthKitSyncManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000027d1e
- (void)triggerImmediateSyncWithReason:(id)arg1 loggingCategory:(id)arg2;	// IMP=0x00000000000278ab
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000027840

@end
