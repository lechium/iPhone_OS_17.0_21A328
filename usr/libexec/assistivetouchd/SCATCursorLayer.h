//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface SCATCursorLayer : CAShapeLayer
{
    _Bool _ensureHidden;	// 8 = 0x8
    _Bool _simpleRect;	// 9 = 0x9
    _Bool _isSimpleRect;	// 10 = 0xa
    _Bool _isDark;	// 11 = 0xb
    int _theme;	// 12 = 0xc
    int _level;	// 16 = 0x10
    UIColor *_restingStrokeColor;	// 24 = 0x18
    UIColor *_restingFillColor;	// 32 = 0x20
    double _boundsInset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000060304
@property(nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
@property(readonly, nonatomic) _Bool isSimpleRect; // @synthesize isSimpleRect=_isSimpleRect;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) int theme; // @synthesize theme=_theme;
@property(nonatomic) double boundsInset; // @synthesize boundsInset=_boundsInset;
@property(nonatomic, getter=isSimpleRect) _Bool simpleRect; // @synthesize simpleRect=_simpleRect;
@property(retain, nonatomic) UIColor *restingFillColor; // @synthesize restingFillColor=_restingFillColor;
@property(retain, nonatomic) UIColor *restingStrokeColor; // @synthesize restingStrokeColor=_restingStrokeColor;
- (double)_opacityForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000060198
- (id)_borderPatternForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000060190
- (double)_borderWidthForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000060187
- (double)_boundsInsetForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x001000000006017e
- (id)_fillColorForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000060176
- (id)_strokeColorForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000060105
- (void)_updatePresentationProperties:(int)arg1;	// IMP=0x001000000005fe60
- (void)updatePath:(id)arg1 frame:(struct CGRect)arg2 isSimpleRect:(_Bool)arg3 animated:(_Bool)arg4 options:(int)arg5;	// IMP=0x001000000005fd44
- (void)updateLevel:(int)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x001000000005fca0
- (void)updateTheme:(int)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x001000000005fbfc
- (void)ensureHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000005fb70
- (id)styleProvider;	// IMP=0x001000000005fb57
- (_Bool)usesHighVisibility;	// IMP=0x001000000005fb0c
- (id)description;	// IMP=0x001000000005f92d
- (id)init;	// IMP=0x001000000005f8aa

@end

