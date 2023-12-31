//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface UIRoundedRectButton : UIButton
{
    UIBezierPath *_fillPath;	// 296 = 0x128
    UIColor *_fillColor;	// 304 = 0x130
}

+ (Class)_visualProviderClass;	// IMP=0x0060000000668adb
- (void).cxx_destruct;	// IMP=0x0000000000669630
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000668e26
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000668d74
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000668d33
- (long long)buttonType;	// IMP=0x0000000000668d28
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000668cc4
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000668c60
- (void)_invalidatePaths;	// IMP=0x0000000000668c38
- (void)_updateState;	// IMP=0x0000000000668bc8
- (id)_contentBackgroundColor;	// IMP=0x0000000000668b87
- (_Bool)_canDrawContent;	// IMP=0x0000000000668b7f
- (id)initWithFrame:(struct CGRect)arg1 fillColor:(id)arg2;	// IMP=0x0000000000668b00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000668aec

@end

