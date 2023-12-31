//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "OBNavigationController.h"

__attribute__((visibility("hidden")))
@interface OBPrivacyModalNavigationController : OBNavigationController
{
    _Bool _darkMode;	// 8 = 0x8
    CDUnknownBlockType _dismissButtonPressedHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000e884
@property(copy) CDUnknownBlockType dismissButtonPressedHandler; // @synthesize dismissButtonPressedHandler=_dismissButtonPressedHandler;
@property(nonatomic, getter=isDarkMode) _Bool darkMode; // @synthesize darkMode=_darkMode;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000e845
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000000e779
- (long long)preferredUserInterfaceStyle;	// IMP=0x000000000000e738
- (void)_doneButtonPressed;	// IMP=0x000000000000e696
- (void)addDismissButtonWithPressedHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e4fe

@end

