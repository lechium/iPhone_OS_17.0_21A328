//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class BSUIEmojiLabelView, MRUArtworkView, MRUShadowView, MRUVisualStylingProvider, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell
{
    NSString *_suggestionIdentifier;	// 8 = 0x8
    UIImage *_artworkImage;	// 16 = 0x10
    UIImage *_iconImage;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    MRUVisualStylingProvider *_stylingProvider;	// 48 = 0x30
    long long _layout;	// 56 = 0x38
    MRUArtworkView *_artworkView;	// 64 = 0x40
    UIImageView *_iconView;	// 72 = 0x48
    MRUShadowView *_iconShadowView;	// 80 = 0x50
    UIActivityIndicatorView *_activityView;	// 88 = 0x58
    UILabel *_titleLabel;	// 96 = 0x60
    BSUIEmojiLabelView *_subtitleLabel;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003af62
@property(retain, nonatomic) BSUIEmojiLabelView *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) MRUShadowView *iconShadowView; // @synthesize iconShadowView=_iconShadowView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MRUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(copy, nonatomic) NSString *suggestionIdentifier; // @synthesize suggestionIdentifier=_suggestionIdentifier;
- (void)updateVisiblity;	// IMP=0x000000000003ad22
- (void)updateIconView;	// IMP=0x000000000003ac89
- (void)updateContentSizeCategory;	// IMP=0x000000000003abe7
- (void)updateVisualStyling;	// IMP=0x000000000003ab4f
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000003ab32
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000003aabc
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x000000000003aaaa
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000003aa69
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000003aa28
- (void)layoutSubviews;	// IMP=0x000000000003a293
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000039e98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
