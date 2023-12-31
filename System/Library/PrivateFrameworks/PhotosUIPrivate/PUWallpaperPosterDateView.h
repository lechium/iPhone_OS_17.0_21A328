//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor, UIFont, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface PUWallpaperPosterDateView : UIView
{
    _Bool _useVibrantAppearance;	// 8 = 0x8
    _Bool _useThinnerFontWeightForTime;	// 9 = 0x9
    UIFont *_timeFont;	// 16 = 0x10
    UIColor *_timeColor;	// 24 = 0x18
    UIVisualEffectView *_visualEffectView;	// 32 = 0x20
    UILabel *_timeLabel;	// 40 = 0x28
    UIFont *_effectiveTimeFont;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000029033c
@property(retain, nonatomic) UIFont *effectiveTimeFont; // @synthesize effectiveTimeFont=_effectiveTimeFont;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) _Bool useThinnerFontWeightForTime; // @synthesize useThinnerFontWeightForTime=_useThinnerFontWeightForTime;
@property(retain, nonatomic) UIColor *timeColor; // @synthesize timeColor=_timeColor;
@property(retain, nonatomic) UIFont *timeFont; // @synthesize timeFont=_timeFont;
@property(nonatomic) _Bool useVibrantAppearance; // @synthesize useVibrantAppearance=_useVibrantAppearance;
- (void)_updateTimeLabel;	// IMP=0x000000000028fe70
- (void)layoutWithLayout:(id)arg1 inContainerFrame:(struct CGRect)arg2;	// IMP=0x000000000028f9f4
- (void)_initViews;	// IMP=0x000000000028f6ef
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000028f612

@end

