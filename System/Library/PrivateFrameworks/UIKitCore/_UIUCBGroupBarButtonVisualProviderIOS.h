//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, _UIUCBKBSelectionBackground;
@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIUCBGroupBarButtonVisualProviderIOS
{
    _UIUCBKBSelectionBackground *_selectionBackgroundView;	// 56 = 0x38
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;	// 64 = 0x40
    _Bool _lightKeyboard;	// 72 = 0x48
    UIColor *_tintColor;	// 80 = 0x50
}

+ (id)darkKeyboardProvider;	// IMP=0x00600000001de495
+ (id)lightKeyboardProvider;	// IMP=0x00600000001de478
- (void).cxx_destruct;	// IMP=0x00000000001ded13
@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
- (void)setTintColor:(id)arg1;	// IMP=0x00000000001dece2
- (id)tintColor;	// IMP=0x00000000001decd1
- (struct CGPoint)menuAnchorPoint;	// IMP=0x00000000001deb26
- (_Bool)shouldLift;	// IMP=0x00000000001deb00
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x00000000001de79f
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;	// IMP=0x00000000001de780
- (id)imageSymbolConfiguration;	// IMP=0x00000000001de6d9
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;	// IMP=0x00000000001de5d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001de57b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001de4ba
- (long long)_securePasteButtonSite;	// IMP=0x00000000001de4b2

@end

