//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIViewElement, UILabel;

__attribute__((visibility("hidden")))
@interface SKUITextHeaderSettingsHeaderFooterDescriptionView
{
    UILabel *_label;	// 8 = 0x8
    SKUIViewElement *_viewElement;	// 16 = 0x10
}

+ (id)_labelWithLabelElements:(id)arg1;	// IMP=0x0060000000065792
+ (id)_labelElementsFromViewElement:(id)arg1;	// IMP=0x006000000006577d
+ (id)_concatenateTextFromLabelElements:(id)arg1;	// IMP=0x006000000006556d
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;	// IMP=0x0060000000064f7e
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0060000000064f35
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0060000000064eea
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;	// IMP=0x0060000000064e91
- (void).cxx_destruct;	// IMP=0x000000000006586d
- (void)layoutSubviews;	// IMP=0x00000000000652f1
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000000652a6
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000006514e

@end

