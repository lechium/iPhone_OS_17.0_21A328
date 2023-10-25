//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIAttributedStringView, SKUIButtonViewElement, SKUIImageView, SKUIImageViewElement, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIContentUnavailableView
{
    UIControl *_button;	// 8 = 0x8
    SKUIButtonViewElement *_buttonElement;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    SKUIImageView *_imageView;	// 56 = 0x38
    SKUIImageViewElement *_imageElement;	// 64 = 0x40
    SKUIAttributedStringView *_messageView;	// 72 = 0x48
    SKUIAttributedStringView *_titleView;	// 80 = 0x50
}

+ (id)_attributedStringWithTitleLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000089aab
+ (id)_attributedStringWithMessageLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000089909
+ (id)_attributedStringWithButton:(id)arg1 context:(id)arg2;	// IMP=0x0010000000089756
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000008887d
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000008866c
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000088613
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000088481
- (void).cxx_destruct;	// IMP=0x0000000000089d85
- (double)_firstBaselineOffsetForView:(id)arg1;	// IMP=0x0000000000089ce8
- (double)_baselineOffsetForView:(id)arg1;	// IMP=0x0000000000089c4b
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000008964e
- (void)layoutSubviews;	// IMP=0x0000000000088fb0
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000088fa8
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000088fa0
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000088e9a
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000088e42
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000088ad9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
