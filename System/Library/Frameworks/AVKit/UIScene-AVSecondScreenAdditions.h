//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScene.h>

@interface UIScene (AVSecondScreenAdditions)
+ (id)avkit_secondScreenScenes;	// IMP=0x008000000011e567
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;	// IMP=0x001000000011e4d9
- (void)avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2;	// IMP=0x001000000011e4c5
- (void)avkit_resetPreferredModeSwitchRequest;	// IMP=0x001000000011e4a2
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;	// IMP=0x001000000011e49a
- (_Bool)avkit_isForeground;	// IMP=0x001000000011e45f
- (long long)avkit_screenType;	// IMP=0x001000000011e457
- (id)avkit_asWindowScene;	// IMP=0x001000000011e44f
@end
