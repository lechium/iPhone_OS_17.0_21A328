//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKVibrantView, NSArray, NSLayoutConstraint, NSString, NSTextAttachment, UIImageView, UILabel, UILayoutGuide, UITapGestureRecognizer, UIView;
@protocol PlaceContextViewModelCellDelegate, TwoLinesContentViewModel;

@interface TwoLinesContentView
{
    UILayoutGuide *_titleLayoutGuide;	// 8 = 0x8
    UILabel *_mainTitleLabel;	// 16 = 0x10
    UILabel *_secondTitleLabel;	// 24 = 0x18
    UILabel *_thirdTitleLabel;	// 32 = 0x20
    UILabel *_debugLabel;	// 40 = 0x28
    UIImageView *_leftImageView;	// 48 = 0x30
    UIView *_leftImageShadowView;	// 56 = 0x38
    UIImageView *_thirdLabelImageView;	// 64 = 0x40
    UITapGestureRecognizer *_thirdLabelTap;	// 72 = 0x48
    NSTextAttachment *_attachment;	// 80 = 0x50
    UIView *_badgeView;	// 88 = 0x58
    int _imageState;	// 96 = 0x60
    NSArray *_constraints;	// 104 = 0x68
    NSLayoutConstraint *_minimumHeightConstraint;	// 112 = 0x70
    NSLayoutConstraint *_imageVerticalConstraint;	// 120 = 0x78
    NSLayoutConstraint *_thirdLabelImageViewHeightConstraint;	// 128 = 0x80
    NSLayoutConstraint *_thirdLabelTopConstraint;	// 136 = 0x88
    NSLayoutConstraint *_imageHeightConstraint;	// 144 = 0x90
    NSLayoutConstraint *_imageWidthConstraint;	// 152 = 0x98
    _Bool _vibrant;	// 160 = 0xa0
    MKVibrantView *_vibrantView;	// 168 = 0xa8
    _Bool _isParentCellSelected;	// 176 = 0xb0
    int _contentViewType;	// 180 = 0xb4
    id <TwoLinesContentViewModel> _viewModel;	// 184 = 0xb8
    id <PlaceContextViewModelCellDelegate> _placeContextViewModelDelegate;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00200000003760eb
@property(readonly, nonatomic) int contentViewType; // @synthesize contentViewType=_contentViewType;
@property(nonatomic) _Bool isParentCellSelected; // @synthesize isParentCellSelected=_isParentCellSelected;
@property(nonatomic) __weak id <PlaceContextViewModelCellDelegate> placeContextViewModelDelegate; // @synthesize placeContextViewModelDelegate=_placeContextViewModelDelegate;
@property(retain, nonatomic) id <TwoLinesContentViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)didTapOnThirdLabel:(id)arg1;	// IMP=0x0010000000375f95
- (double)_labelVerticalSpacing;	// IMP=0x0010000000375f79
- (double)_imageToTextSpacing;	// IMP=0x0010000000375f59
- (double)_imageDimension;	// IMP=0x0010000000375f39
- (double)_verticalMargin;	// IMP=0x0010000000375ef5
- (void)_updateFonts;	// IMP=0x0010000000375e2a
- (id)_subtitleFont;	// IMP=0x0010000000375db1
- (id)_titleRegularFont;	// IMP=0x0010000000375d38
- (id)_titleFont;	// IMP=0x0010000000375cbf
- (void)_updateDebugLabel;	// IMP=0x00100000003759c7
- (void)twoLinesTableViewCellModelDidUpdate:(id)arg1;	// IMP=0x00100000003759a6
- (void)_updateViewsWithViewModel:(id)arg1;	// IMP=0x0010000000374438
- (id)_renderAttachmentImageWithImage:(id)arg1 vibrant:(_Bool)arg2;	// IMP=0x0010000000374036
- (void)_updateVibrantColor;	// IMP=0x0010000000374030
- (void)setVibrant:(_Bool)arg1;	// IMP=0x0010000000373c61
- (void)_updateImage:(id)arg1;	// IMP=0x001000000037386b
- (id)_labelColor;	// IMP=0x00100000003737fe
- (id)_selectedLabelColor;	// IMP=0x001000000037376d
- (void)_updateLabelColors;	// IMP=0x00100000003735a9
- (void)_updateNumberOfLines;	// IMP=0x0010000000373483
- (void)_updateConstraintConstants;	// IMP=0x00100000003731b6
- (void)_updateConstraints;	// IMP=0x0010000000371f19
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000371b71
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000371652
- (id)initWithFrame:(struct CGRect)arg1 contentViewType:(int)arg2;	// IMP=0x00100000003715f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

