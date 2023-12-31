//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIViewReuseView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIDefaultSettingDescriptionView
{
    _Bool _hasDisclosureChevron;	// 8 = 0x8
    struct UIEdgeInsets _padding;	// 16 = 0x10
    UIView *_viewElementView;	// 48 = 0x30
    SKUIViewReuseView *_viewReuseView;	// 56 = 0x38
}

+ (struct UIEdgeInsets)_paddingForStyle:(id)arg1;	// IMP=0x00600000000e1bef
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x00600000000e13ba
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00600000000e12c0
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x00600000000e1267
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00600000000e116a
- (void).cxx_destruct;	// IMP=0x00000000000e1c41
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000e1b7d
- (void)layoutSubviews;	// IMP=0x00000000000e195c
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000000e1870
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000e1586
- (_Bool)hasDisclosureChevron;	// IMP=0x00000000000e1529

@end

