//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CNAvatarView, CNContact, NSArray, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CNMeCardSharedProfileCellContentView : UIView
{
    CNContact *_meContact;	// 8 = 0x8
    CNAvatarView *_avatarView;	// 16 = 0x10
    UIStackView *_labelStackView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_valueLabel;	// 40 = 0x28
    NSArray *_constraints;	// 48 = 0x30
}

+ (id)log;	// IMP=0x00600000001bae79
- (void).cxx_destruct;	// IMP=0x00000000001bac42
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x00000000001baa11
- (void)updateView;	// IMP=0x00000000001ba98c
- (void)setupConstraints;	// IMP=0x00000000001ba2b7
- (void)updateConstraints;	// IMP=0x00000000001ba25a
- (void)setAvatarHidden:(_Bool)arg1;	// IMP=0x00000000001ba1a8
- (void)updateAvatarViewContact;	// IMP=0x00000000001b9f10
- (id)displayStringForSharingAudience;	// IMP=0x00000000001b9d7b
- (void)setUpLabels;	// IMP=0x00000000001b9a09
- (void)setUpAvatarView;	// IMP=0x00000000001b99a4
- (void)setupViews;	// IMP=0x00000000001b9976
- (id)init;	// IMP=0x00000000001b98ec

@end

