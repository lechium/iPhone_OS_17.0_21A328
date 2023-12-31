//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CAShapeLayer, CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, CNVisualIdentityEditablePrimaryAvatarTextField, NSString, UIFont, UIImageView, UIView;
@protocol CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNVisualIdentityEditablePrimaryAvatarViewController : UIViewController
{
    id <CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> _delegate;	// 8 = 0x8
    double _desiredFontSize;	// 16 = 0x10
    CNPhotoPickerProviderItem *_providerItem;	// 24 = 0x18
    UIImageView *_imageContainerView;	// 32 = 0x20
    CNVisualIdentityEditablePrimaryAvatarTextField *_textField;	// 40 = 0x28
    UIFont *_originalFont;	// 48 = 0x30
    CAShapeLayer *_clippingLayer;	// 56 = 0x38
    UIView *_imageContentView;	// 64 = 0x40
    CNPhotoPickerVariantsManager *_variantsManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000274eff
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) UIView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(retain, nonatomic) CAShapeLayer *clippingLayer; // @synthesize clippingLayer=_clippingLayer;
@property(retain, nonatomic) UIFont *originalFont; // @synthesize originalFont=_originalFont;
@property(retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) CNPhotoPickerProviderItem *providerItem; // @synthesize providerItem=_providerItem;
@property(nonatomic) double desiredFontSize; // @synthesize desiredFontSize=_desiredFontSize;
@property(nonatomic) __weak id <CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutPrimaryAvatar;	// IMP=0x0000000000274d99
- (_Bool)primaryAvatarShouldDisplay;	// IMP=0x0000000000274d66
- (void)updatePrimaryAvatarForVisualIdentity:(id)arg1;	// IMP=0x0000000000274beb
- (id)viewForPrimaryAvatar;	// IMP=0x0000000000274bd9
- (double)maxTextFieldSize;	// IMP=0x0000000000274b5c
- (_Bool)exceedsMaxCharacterCount:(long long)arg1 containsEmoji:(_Bool)arg2;	// IMP=0x0000000000274b46
- (_Bool)hasValidInputTypeForText:(id)arg1;	// IMP=0x0000000000274ac6
- (void)trimTextFieldTextIfNeeded:(id)arg1 containsEmoji:(_Bool)arg2;	// IMP=0x0000000000274a46
- (void)trimTextFieldTextIfNeeded:(id)arg1;	// IMP=0x00000000002749bd
- (void)adjustFontSizeToFitWidthForText:(id)arg1;	// IMP=0x00000000002744e9
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x000000000027444c
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000000274130
- (id)updatedProviderItemWithText:(id)arg1;	// IMP=0x000000000027403c
- (id)updatedProviderItem;	// IMP=0x0000000000273fbc
- (void)updateContainerViewMask;	// IMP=0x0000000000273d7a
- (_Bool)isMonogramProviderItemType;	// IMP=0x0000000000273d31
- (_Bool)isEmojiProviderItemType;	// IMP=0x0000000000273ce8
- (void)updateTextFieldFontSize:(double)arg1;	// IMP=0x0000000000273b74
- (void)setupTextField;	// IMP=0x0000000000273669
- (void)setupImageContainerView;	// IMP=0x000000000027349c
- (void)populateViewWithTextEditableProviderItem:(id)arg1 imageType:(unsigned long long)arg2;	// IMP=0x0000000000273195
- (void)updateViewWithProviderItem:(id)arg1;	// IMP=0x0000000000273067
- (void)setUpFirstResponderForProviderItem:(id)arg1;	// IMP=0x0000000000272f43
- (void)endEditing;	// IMP=0x0000000000272ea0
- (void)beginEditing;	// IMP=0x0000000000272e63
- (void)updateWithProviderItem:(id)arg1;	// IMP=0x0000000000272e0e
@property(readonly, nonatomic) NSString *text;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000272ce9
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000272931
- (void)viewDidLoad;	// IMP=0x00000000002727fa
- (id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2;	// IMP=0x0000000000272745
- (id)initWithVariantsManager:(id)arg1;	// IMP=0x000000000027272e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

