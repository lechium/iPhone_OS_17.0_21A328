//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class ASCArtworkView, ASCLockupDisplayContext, ASCOfferButton, ASCOfferTheme, ASCSkeletonLabel, NSString, UIColor, UILabel;
@protocol ASCLockupTheme;

__attribute__((visibility("hidden")))
@interface ASCLockupContentView : UIControl
{
    NSString *_size;	// 8 = 0x8
    ASCOfferTheme *_offerTheme;	// 16 = 0x10
    id <ASCLockupTheme> _lockupTheme;	// 24 = 0x18
    ASCLockupDisplayContext *_displayContext;	// 32 = 0x20
    ASCArtworkView *_iconArtworkView;	// 40 = 0x28
    ASCSkeletonLabel *_titleLabel;	// 48 = 0x30
    ASCSkeletonLabel *_subtitleLabel;	// 56 = 0x38
    ASCOfferButton *_offerButton;	// 64 = 0x40
    UILabel *_headingLabelIfLoaded;	// 72 = 0x48
    UILabel *_offerStatusLabelIfLoaded;	// 80 = 0x50
}

+ (_Bool)offerButtonShouldExpandBackgroundForSize:(id)arg1;	// IMP=0x00100000000262b5
+ (double)offerButtonTopPaddingForSize:(id)arg1;	// IMP=0x00100000000262ac
+ (_Bool)offerButtonShouldTopAlignForSize:(id)arg1;	// IMP=0x001000000002623a
+ (_Bool)isOfferButtonFixedHeightForSize:(id)arg1;	// IMP=0x00100000000261fc
+ (_Bool)isSmallOfferButtonLockupForSize:(id)arg1;	// IMP=0x001000000002615f
- (void).cxx_destruct;	// IMP=0x0000000000028c7e
@property(readonly, nonatomic) UILabel *offerStatusLabelIfLoaded; // @synthesize offerStatusLabelIfLoaded=_offerStatusLabelIfLoaded;
@property(readonly, nonatomic) UILabel *headingLabelIfLoaded; // @synthesize headingLabelIfLoaded=_headingLabelIfLoaded;
@property(readonly, nonatomic) ASCOfferButton *offerButton; // @synthesize offerButton=_offerButton;
@property(readonly, nonatomic) ASCSkeletonLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) ASCSkeletonLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) ASCArtworkView *iconArtworkView; // @synthesize iconArtworkView=_iconArtworkView;
@property(readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property(retain, nonatomic) id <ASCLockupTheme> lockupTheme; // @synthesize lockupTheme=_lockupTheme;
@property(copy, nonatomic) ASCOfferTheme *offerTheme; // @synthesize offerTheme=_offerTheme;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
- (void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3;	// IMP=0x0000000000028726
- (void)endOfferModalState;	// IMP=0x00000000000286e9
- (void)beginOfferModalStateWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028680
- (void)setOfferStatus:(id)arg1;	// IMP=0x000000000002854b
- (void)setOfferInteractive:(_Bool)arg1;	// IMP=0x0000000000028501
- (void)setOfferEnabled:(_Bool)arg1;	// IMP=0x00000000000284b7
- (void)setOfferMetadata:(id)arg1;	// IMP=0x00000000000283bc
- (id)saveOfferState;	// IMP=0x0000000000028308
- (void)setDisplayContext:(id)arg1;	// IMP=0x0000000000028286
- (void)setLoading:(_Bool)arg1;	// IMP=0x0000000000028134
- (void)setPrefersRightToLeftLayout:(_Bool)arg1;	// IMP=0x000000000002810a
- (void)setSubtitle:(id)arg1;	// IMP=0x000000000002809b
- (void)setTitle:(id)arg1;	// IMP=0x000000000002802c
- (void)setHeading:(id)arg1;	// IMP=0x0000000000027e9d
- (void)setIconImage:(id)arg1 withDecoration:(id)arg2;	// IMP=0x0000000000027dd6
- (void)removeOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000027a6b
- (void)addOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000279ee
- (void)onPreferredContentSizeCategoryChange;	// IMP=0x00000000000279a0
- (void)layoutSubviews;	// IMP=0x0000000000027895
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000276ae
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000002768c
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000000002760b
- (double)minimumLockupHeight;	// IMP=0x00000000000275bb
- (id)makeLayout;	// IMP=0x0000000000027446
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000000272e2
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000002726d
@property(copy, nonatomic) UIColor *loadingColor;
@property(readonly, nonatomic) struct CGSize preferredIconSize;
@property(readonly, nonatomic) UILabel *headingLabel;
@property(readonly, nonatomic) UILabel *offerStatusLabel;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026c2b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026c00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000026428
- (_Bool)shouldHideOfferStatus;	// IMP=0x00000000000263ef
- (_Bool)shouldHideSubtitle;	// IMP=0x000000000002631c
- (_Bool)shouldHideTitle;	// IMP=0x000000000002630a
- (_Bool)shouldHideHeading;	// IMP=0x00000000000262d4
- (_Bool)shouldHideIconArtwork;	// IMP=0x00000000000262c2
- (_Bool)isMiniLockup;	// IMP=0x00000000000261c1
- (_Bool)isSmallOfferButtonOnlyLockup;	// IMP=0x000000000002616c
@property(readonly, nonatomic) _Bool isOfferButtonOnlyLockup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
