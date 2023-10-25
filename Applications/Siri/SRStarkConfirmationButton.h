//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class NSString, SRCarPlayFocusView, SUICProgressIndicatorView, UIImageView, UILabel, UIView;

@interface SRStarkConfirmationButton : UIButton
{
    UIView *_backgroundView;	// 8 = 0x8
    SRCarPlayFocusView *_focusView;	// 16 = 0x10
    _Bool _messageProgressHidden;	// 24 = 0x18
    _Bool _iconVibrancyDisabled;	// 25 = 0x19
    NSString *_title;	// 32 = 0x20
    UIImageView *_iconImageView;	// 40 = 0x28
    long long _iconType;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    unsigned long long _style;	// 64 = 0x40
    NSString *_unreadMessagesCount;	// 72 = 0x48
    CDUnknownBlockType _handlerBlock;	// 80 = 0x50
    CDUnknownBlockType _delayExpiryCommandsHandlerBlock;	// 88 = 0x58
    SUICProgressIndicatorView *_progressIndicatorView;	// 96 = 0x60
    UILabel *_customTitleLabel;	// 104 = 0x68
    CDStruct_f0ed7c64 _layoutAttributes;	// 112 = 0x70
}

+ (CDStruct_f0ed7c64)_attributesForStyle:(unsigned long long)arg1;	// IMP=0x0040000000027df1
+ (unsigned long long)_derivedStyleFromIconType:(long long)arg1 viewStyle:(unsigned long long)arg2;	// IMP=0x0010000000027dd5
+ (id)_templateImageForIconType:(long long)arg1;	// IMP=0x0010000000025fee
+ (id)buttonWithIconType:(long long)arg1 buttonType:(long long)arg2 title:(id)arg3 unreadMessagesCount:(id)arg4 viewStyle:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6 delayExpiryCommandsHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000025638
- (void).cxx_destruct;	// IMP=0x0020000000028bd1
@property(nonatomic) CDStruct_f0ed7c64 layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) SUICProgressIndicatorView *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(copy, nonatomic, getter=_delayExpiryCommandsHandlerBlock) CDUnknownBlockType delayExpiryCommandsHandlerBlock; // @synthesize delayExpiryCommandsHandlerBlock=_delayExpiryCommandsHandlerBlock;
@property(copy, nonatomic, getter=_handlerBlock) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(copy, nonatomic) NSString *unreadMessagesCount; // @synthesize unreadMessagesCount=_unreadMessagesCount;
@property(nonatomic, getter=isIconVibrancyDisabled) _Bool iconVibrancyDisabled; // @synthesize iconVibrancyDisabled=_iconVibrancyDisabled;
@property(nonatomic, getter=isMessageReadingProgressHidden) _Bool messageProgressHidden; // @synthesize messageProgressHidden=_messageProgressHidden;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateCornerRadiusForLayer:(id)arg1;	// IMP=0x001000000002898e
- (void)_updateFocusFrameForStyle:(unsigned long long)arg1 iconType:(long long)arg2;	// IMP=0x00100000000285a7
- (void)_updateViewAlphasForStyle:(unsigned long long)arg1 focused:(_Bool)arg2 selected:(_Bool)arg3 iconVibrancyDisabled:(_Bool)arg4;	// IMP=0x0010000000028228
- (void)_updateCompositingFilterForUserInterfaceStyle:(long long)arg1 iconVibrancyDisabled:(_Bool)arg2;	// IMP=0x001000000002813d
- (void)_updateIconAndProgressIndicatorColorsForTraitCollection:(id)arg1;	// IMP=0x0010000000028031
- (void)_updateTextColorForStyle:(unsigned long long)arg1 userInterfaceStyle:(long long)arg2 focused:(_Bool)arg3;	// IMP=0x0010000000027f6e
- (id)_stringForStyle:(unsigned long long)arg1;	// IMP=0x0010000000027f22
- (id)_stringForButtonType:(long long)arg1;	// IMP=0x0010000000027ed6
- (id)_stringForIconType:(long long)arg1;	// IMP=0x0010000000027e8a
- (id)accessibilityIdentifier;	// IMP=0x0010000000027dc1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000027c92
- (id)description;	// IMP=0x0010000000027b40
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000027ab4
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000027a28
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000027854
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000277c8
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000002773c
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000027569
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000027430
- (_Bool)canBecomeFocused;	// IMP=0x00100000000273f7
- (void)setEnabled:(_Bool)arg1;	// IMP=0x001000000002737b
- (_Bool)_isButtonIconTypeUnreadMessagesType:(long long)arg1;	// IMP=0x001000000002735e
- (_Bool)_isButtonIconTypeReadingType:(long long)arg1;	// IMP=0x001000000002734d
- (_Bool)isTypeEqual:(id)arg1;	// IMP=0x0010000000027209
- (void)_configureForButtonStyle:(unsigned long long)arg1;	// IMP=0x0010000000027043
- (void)invokeDelayExpiryCommandsHandler;	// IMP=0x0010000000027003
- (void)_invokeConfirmationHandler:(id)arg1;	// IMP=0x0010000000026fc3
- (void)_maskImageView:(id)arg1 withText:(id)arg2;	// IMP=0x0010000000026d28
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000026cc5
- (_Bool)isEqualToStarkConfirmationButton:(id)arg1;	// IMP=0x0010000000026c3d
- (void)layoutSubviews;	// IMP=0x0010000000026257
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000260aa
- (void)updateMessageProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000025da3
- (void)updateButtonImageToIconType:(long long)arg1;	// IMP=0x0010000000025a75

@end
