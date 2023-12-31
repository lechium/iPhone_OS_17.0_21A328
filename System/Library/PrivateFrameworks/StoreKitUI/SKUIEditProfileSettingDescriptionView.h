//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSString, SKUIClientContext, SKUIEditProfileSettingDescription, SKUIImageView, UIButton, UITextField;

__attribute__((visibility("hidden")))
@interface SKUIEditProfileSettingDescriptionView
{
    CALayer *_divider1;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    UIButton *_editButton;	// 24 = 0x18
    UITextField *_nameField;	// 32 = 0x20
    UITextField *_handleField;	// 40 = 0x28
    SKUIImageView *_imageView;	// 48 = 0x30
    SKUIEditProfileSettingDescription *_settingDescription;	// 56 = 0x38
}

+ (id)_baselineFontForTextStyle:(id)arg1;	// IMP=0x00100000003633cd
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x0010000000362309
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000003622c0
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x0010000000362267
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000036221c
- (void).cxx_destruct;	// IMP=0x00000000003636bb
- (id)_textFieldWithPlaceholder:(id)arg1;	// IMP=0x000000000036351e
- (void)_editProfilePhoto;	// IMP=0x0000000000363501
- (void)_updateHandleTextFieldValidity;	// IMP=0x0000000000363436
- (void)layoutSubviews;	// IMP=0x0000000000362cc2
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000362be4
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000362ac7
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000362a6f
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000362a27
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000362a1f
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000003623c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

