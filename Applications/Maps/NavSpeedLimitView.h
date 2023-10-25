//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImageView;

@interface NavSpeedLimitView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    struct CGSize _intrinsicContentSize;	// 16 = 0x10
    unsigned long long _speedLimit;	// 32 = 0x20
    long long _shieldType;	// 40 = 0x28
    _Bool _useNightMode;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000006eead1
- (void)_drawSign;	// IMP=0x00100000006ee60c
- (void)_setSpeedLimit:(unsigned long long)arg1 shieldType:(long long)arg2 useNightMode:(_Bool)arg3;	// IMP=0x00100000006ee47e
- (_Bool)isVisible;	// IMP=0x00100000006ee440
- (void)setSpeedLimit:(unsigned long long)arg1 shieldType:(long long)arg2;	// IMP=0x00100000006ee422
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000006ee378
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000006ee360
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000006edfe7

@end
