//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKUIClientContext, SKUIColorScheme, SKUIItemOfferButtonAppearance, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIResourceLoader, SKUIStorePageSectionsViewController, UICollectionView, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSectionContext : NSObject
{
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;	// 8 = 0x8
    double _activePageWidth;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    SKUIColorScheme *_colorScheme;	// 32 = 0x20
    long long _defaultPinningTransitionStyle;	// 40 = 0x28
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;	// 48 = 0x30
    double _landscapePageWidth;	// 56 = 0x38
    SKUIMetricsController *_metricsController;	// 64 = 0x40
    SKUIStorePageSectionsViewController *_parentViewController;	// 72 = 0x48
    UIColor *_placeholderColor;	// 80 = 0x50
    double _portraitPageWidth;	// 88 = 0x58
    SKUIResourceLoader *_resourceLoader;	// 96 = 0x60
    SKUILayoutCache *_textLayoutCache;	// 104 = 0x68
    long long _layoutStyle;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000ee1bb
@property(readonly, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(readonly, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) double portraitPageWidth; // @synthesize portraitPageWidth=_portraitPageWidth;
@property(readonly, nonatomic) __weak SKUIStorePageSectionsViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(readonly, nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(readonly, nonatomic) double landscapePageWidth; // @synthesize landscapePageWidth=_landscapePageWidth;
@property(readonly, nonatomic) long long defaultPinningTransitionStyle; // @synthesize defaultPinningTransitionStyle=_defaultPinningTransitionStyle;
@property(readonly, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) double activePageWidth; // @synthesize activePageWidth=_activePageWidth;
@property(readonly, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // @synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession;
- (void)_setTextLayoutCache:(id)arg1;	// IMP=0x00000000000ee0f0
- (void)_setResourceLoader:(id)arg1;	// IMP=0x00000000000ee0ac
- (void)_setPortraitPageWidth:(double)arg1;	// IMP=0x00000000000ee0a1
- (void)_setParentViewController:(id)arg1;	// IMP=0x00000000000ee06f
- (void)_setMetricsController:(id)arg1;	// IMP=0x00000000000ee02b
- (void)_setLayoutStyle:(long long)arg1;	// IMP=0x00000000000ee021
- (void)_setLandscapePageWidth:(double)arg1;	// IMP=0x00000000000ee016
- (void)_setDefaultPinningTransitionStyle:(long long)arg1;	// IMP=0x00000000000ee00c
- (void)_setColorScheme:(id)arg1;	// IMP=0x00000000000edfb9
- (void)_setCollectionView:(id)arg1;	// IMP=0x00000000000edf66
- (void)_setActivePageWidth:(double)arg1;	// IMP=0x00000000000edf49
- (void)_setActiveMetricsImpressionSession:(id)arg1;	// IMP=0x00000000000edf38
@property(readonly, nonatomic) UIColor *placeholderColor;
@property(readonly, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property(readonly, nonatomic) double horizontalPadding;
@property(readonly, nonatomic) SKUIClientContext *clientContext;
- (id)init;	// IMP=0x00000000000edb94

@end

