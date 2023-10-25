//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable, NSString, SUUIImageDeckViewElement, UIDynamicAnimator, UIView;

__attribute__((visibility("hidden")))
@interface SUUIImageDeckView
{
    UIDynamicAnimator *_animator;	// 8 = 0x8
    double _fitWidth;	// 16 = 0x10
    SUUIImageDeckViewElement *_imageDeckViewElement;	// 24 = 0x18
    NSMapTable *_viewElementViews;	// 32 = 0x20
    NSArray *_imageViews;	// 40 = 0x28
    NSMapTable *_imageViewToImageResourceCacheKey;	// 48 = 0x30
    UIView *_selectedImageView;	// 56 = 0x38
    unsigned long long _selectedImageViewIndex;	// 64 = 0x40
    struct UIEdgeInsets _contentInset;	// 72 = 0x48
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000033bacb
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000033b9d1
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000033b7f6
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000033b5d7
- (void).cxx_destruct;	// IMP=0x000000000033d13d
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void)_layoutImages;	// IMP=0x000000000033ca16
- (void)layoutSubviews;	// IMP=0x000000000033c8b0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000033c6db
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000033c47b
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000033c473
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000033c145
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000033bc65
- (id)init;	// IMP=0x000000000033b525

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
