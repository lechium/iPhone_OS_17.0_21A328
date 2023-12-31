//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MultilineWrappingListView, NSArray, NSLayoutConstraint, UIColor, UIImage;

@interface TransitArtworkListView : UIView
{
    struct CGSize;	// 8 = 0x8
    NSArray *_artworkImageViews;	// 24 = 0x18
    NSArray *_arrowImageViews;	// 32 = 0x20
    MultilineWrappingListView *_multilineWrappingStackView;	// 40 = 0x28
    NSLayoutConstraint *_maxWidthConstraint;	// 48 = 0x30
    float _verticalContentHuggingPriority;	// 56 = 0x38
    float _verticalContentCompressionResistancePriority;	// 60 = 0x3c
    UIImage *_arrowImage;	// 64 = 0x40
    UIImage *_incidentBadgeImage;	// 72 = 0x48
    long long _shieldSize;	// 80 = 0x50
    unsigned long long _separatorStyle;	// 88 = 0x58
    NSArray *_artworkData;	// 96 = 0x60
    UIColor *_overrideTintColor;	// 104 = 0x68
    double _maxWidth;	// 112 = 0x70
}

+ (double)transitArtworkListHeight;	// IMP=0x00400000008e7446
+ (CDStruct_7660b417)_metricsForIdiom:(long long)arg1;	// IMP=0x00100000008e49fa
- (void).cxx_destruct;	// IMP=0x00200000008e7570
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) float verticalContentCompressionResistancePriority; // @synthesize verticalContentCompressionResistancePriority=_verticalContentCompressionResistancePriority;
@property(nonatomic) float verticalContentHuggingPriority; // @synthesize verticalContentHuggingPriority=_verticalContentHuggingPriority;
@property(retain, nonatomic) UIColor *overrideTintColor; // @synthesize overrideTintColor=_overrideTintColor;
@property(retain, nonatomic) NSArray *artworkData; // @synthesize artworkData=_artworkData;
@property(nonatomic) unsigned long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(readonly, nonatomic) UIImage *incidentBadgeImage; // @synthesize incidentBadgeImage=_incidentBadgeImage;
@property(readonly, nonatomic) double singleLineWidth;
@property(readonly, nonatomic) unsigned long long numberOfLines;
- (id)_createSizeConstraintsForArtworkViews:(id)arg1;	// IMP=0x00100000008e6c1f
- (void)_configureContainerWithBackgroundIfNeeded:(id)arg1 constraints:(id)arg2;	// IMP=0x00100000008e6a89
@property(readonly, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
- (id)_arrowImageView;	// IMP=0x00100000008e687b
- (id)_segmentContainer;	// IMP=0x00100000008e67d0
- (id)_addViewForArtwork:(id)arg1 inContainer:(id)arg2 constraints:(id)arg3 previousViewInSegment:(id)arg4 leadingSpacing:(double)arg5;	// IMP=0x00100000008e62b7
- (void)_createNewMultilineShieldView;	// IMP=0x00100000008e5e9f
- (void)_updateArtworkImageViewWithArtworks;	// IMP=0x00100000008e5350
- (void)_updateTintColorForArrowImageView:(id)arg1;	// IMP=0x00100000008e52a6
- (void)_updateTintColorForView:(id)arg1;	// IMP=0x00100000008e51e7
- (void)_updateTintColor:(id)arg1;	// IMP=0x00100000008e4cf5
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000008e4b8a
- (void)layoutSubviews;	// IMP=0x00100000008e4ae5
- (CDStruct_7660b417)_metrics;	// IMP=0x00100000008e496f
- (void)_commonInit;	// IMP=0x00100000008e4917
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000008e48b9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000008e484a

@end

