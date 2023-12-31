//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKViewElementStyle, NSString, SKUIButtonViewElement, SKUIBuyButtonDescriptor, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIButtonCollectionViewCell
{
    UIControl *_button;	// 8 = 0x8
    id _buttonImageResourceCacheKey;	// 16 = 0x10
    SKUIBuyButtonDescriptor *_buyButtonDescriptor;	// 24 = 0x18
    SKUIButtonViewElement *_viewElement;	// 32 = 0x20
    IKViewElementStyle *_viewElementStyle;	// 40 = 0x28
}

+ (id)_attributedStringWithButton:(id)arg1 context:(id)arg2;	// IMP=0x001000000022005f
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000021f59f
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000021f47a
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000021f3ab
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000021f306
- (void).cxx_destruct;	// IMP=0x00000000002202d5
- (_Bool)_usesBackgroundWithAlpha;	// IMP=0x0000000000220230
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000021ff71
- (void)layoutSubviews;	// IMP=0x000000000021fcca
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000021fc7f
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000021fb60
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000021fa0b
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000021f909
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000021f655
- (void)dealloc;	// IMP=0x000000000021f2b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

