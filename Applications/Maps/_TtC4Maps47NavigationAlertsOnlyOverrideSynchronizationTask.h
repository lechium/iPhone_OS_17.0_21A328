//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC4Maps47NavigationAlertsOnlyOverrideSynchronizationTask : NSObject
{
    MISSING_TYPE *platformController;	// 8 = 0x8
    MISSING_TYPE *userDefaults;	// 16 = 0x10
    MISSING_TYPE *audioPreferences;	// 24 = 0x18
    MISSING_TYPE *audioKey;	// 32 = 0x20
    MISSING_TYPE *signKey;	// 48 = 0x30
    MISSING_TYPE *persistedConfigurationKey;	// 64 = 0x40
    MISSING_TYPE *isApplyingConfiguration;	// 80 = 0x50
    MISSING_TYPE *initialGuidanceConfiguration;	// 88 = 0x58
    MISSING_TYPE *userModifiedConfigurationDuringNavigation;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0040000000031a60
- (id)init;	// IMP=0x0010000000033290
- (void)applicationWillTerminate;	// IMP=0x0010000000033200
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000032c60
- (void)dealloc;	// IMP=0x0010000000031a40
- (id)initWithPlatformController:(id)arg1 userDefaults:(id)arg2 audioPreferences:(id)arg3;	// IMP=0x00100000000318e0

@end
