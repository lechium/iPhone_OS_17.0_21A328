//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUUIViewReuseView, UIView;

__attribute__((visibility("hidden")))
@interface SUUIDefaultSettingDescriptionView
{
    _Bool _hasDisclosureChevron;	// 8 = 0x8
    struct UIEdgeInsets _padding;	// 16 = 0x10
    UIView *_viewElementView;	// 48 = 0x30
    SUUIViewReuseView *_viewReuseView;	// 56 = 0x38
}

+ (struct UIEdgeInsets)_paddingForStyle:(id)arg1;	// IMP=0x00600000000bf629
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x00600000000bef71
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00600000000beed0
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x00600000000beeba
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00600000000bee19
- (void).cxx_destruct;	// IMP=0x00000000000bf67b
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000bf5b7
- (void)layoutSubviews;	// IMP=0x00000000000bf3d3
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000000bf32a
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000bf09a
- (_Bool)hasDisclosureChevron;	// IMP=0x00000000000bf08a

@end

