//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class UIButton, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerSectionHeader : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIButton *_actionButton;	// 16 = 0x10
    CDUnknownBlockType _actionBlock;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
}

+ (double)heightNeededForAccessibilityLayoutIncludingActionButton:(_Bool)arg1;	// IMP=0x00600000002d99ca
+ (id)reusableIdentifier;	// IMP=0x00600000002d99bd
+ (id)actionButtonFont;	// IMP=0x00600000002d999a
+ (id)titleLabelFont;	// IMP=0x00600000002d9977
- (void).cxx_destruct;	// IMP=0x00000000002d9924
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002d987a
- (void)prepareForReuse;	// IMP=0x00000000002d97d3
- (void)actionButtonPressed:(id)arg1;	// IMP=0x00000000002d9762
- (void)updateDynamicStackViewProperties;	// IMP=0x00000000002d968b
- (void)setupConstraints;	// IMP=0x00000000002d9322
- (void)updateStyle:(id)arg1;	// IMP=0x00000000002d921b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002d8edb

@end
