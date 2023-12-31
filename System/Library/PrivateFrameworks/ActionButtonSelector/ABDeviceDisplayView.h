//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ABFloatSpringProperty, CALayer, CAPackage, CAStateController;

__attribute__((visibility("hidden")))
@interface ABDeviceDisplayView : UIView
{
    CAPackage *_package;	// 8 = 0x8
    CALayer *_islandLayer;	// 16 = 0x10
    CALayer *_ringerLayer;	// 24 = 0x18
    CAStateController *_ringerStateController;	// 32 = 0x20
    ABFloatSpringProperty *_islandY;	// 40 = 0x28
    ABFloatSpringProperty *_islandWidth;	// 48 = 0x30
    ABFloatSpringProperty *_islandHeight;	// 56 = 0x38
    ABFloatSpringProperty *_islandShake1;	// 64 = 0x40
    ABFloatSpringProperty *_islandShake2;	// 72 = 0x48
    ABFloatSpringProperty *_ringerVisible;	// 80 = 0x50
    _Bool _isSilentModeEnabled;	// 88 = 0x58
    long long _islandMode;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000f944
- (void)_transitionIslandToLarge;	// IMP=0x000000000000f860
- (void)_transitionIslandToGrowing;	// IMP=0x000000000000f787
- (void)_transitionIslandToCompact;	// IMP=0x000000000000f6ae
- (void)_transitionIslandToInert;	// IMP=0x000000000000f5da
- (void)_shake;	// IMP=0x000000000000f4e8
- (void)_toggleSilentMode;	// IMP=0x000000000000f4c1
- (void)_setSilentModeEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000f3fe
- (void)_resetSprings;	// IMP=0x000000000000f35c
- (void)layoutSubviews;	// IMP=0x000000000000efc0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000ef28
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000e9f4

@end

