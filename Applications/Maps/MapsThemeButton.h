//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class NSString;

@interface MapsThemeButton : UIButton
{
    CDUnknownBlockType _imageProvider;	// 8 = 0x8
    CDUnknownBlockType _titleColorProvider;	// 16 = 0x10
    CDUnknownBlockType _tintColorProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000654772
@property(copy, nonatomic) CDUnknownBlockType tintColorProvider; // @synthesize tintColorProvider=_tintColorProvider;
@property(copy, nonatomic) CDUnknownBlockType titleColorProvider; // @synthesize titleColorProvider=_titleColorProvider;
@property(copy, nonatomic) CDUnknownBlockType imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)_updateTintColor;	// IMP=0x001000000065466d
- (void)_updateTitleColor;	// IMP=0x00100000006544bd
- (void)_updateImage;	// IMP=0x00100000006543e9
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0010000000654362
- (void)updateTheme;	// IMP=0x0010000000654238
- (void)didMoveToWindow;	// IMP=0x00100000006541ca
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000006540a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

