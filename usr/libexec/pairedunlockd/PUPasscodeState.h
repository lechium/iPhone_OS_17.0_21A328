//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PUPasscodeState : NSObject
{
}

+ (id)toProtobuf;	// IMP=0x0040000000002390
+ (_Bool)isModificationAllowed;	// IMP=0x00100000000022b6
+ (unsigned long long)passcodeMinimumLength;	// IMP=0x00100000000021b0
+ (_Bool)hasSEP;	// IMP=0x001000000000219f
+ (void)setWristDetectionDisabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001dde
+ (void)_setOffWristPreference:(_Bool)arg1;	// IMP=0x0010000000001d04
+ (void)setOffWristEnabledSSE:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001c94
+ (id)setOffWristEnabled:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x0010000000001c8c
+ (_Bool)wristDetectDisabledPreference;	// IMP=0x0010000000001c5f
+ (_Bool)isWristDetectionDisabled;	// IMP=0x0010000000001c4d
+ (_Bool)isUnlockOnly;	// IMP=0x0010000000001bed
+ (_Bool)isLocked;	// IMP=0x0010000000001be5
+ (_Bool)hasPasscode;	// IMP=0x0010000000001b9a
- (id)init;	// IMP=0x0040000000001b8c

@end

