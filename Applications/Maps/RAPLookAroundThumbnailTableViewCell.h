//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class GEOPDMuninViewState, NSLayoutConstraint, UIImage, UIImageView, UILabel;

@interface RAPLookAroundThumbnailTableViewCell : UITableViewCell
{
    UIImageView *_thumbnailImageView;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
    UILabel *_locationLabel;	// 24 = 0x18
    NSLayoutConstraint *_topToNameBaselineConstraint;	// 32 = 0x20
    NSLayoutConstraint *_nameToLocationBaselineConstraint;	// 40 = 0x28
    NSLayoutConstraint *_locationToBottomBaselineConstraint;	// 48 = 0x30
    GEOPDMuninViewState *_viewState;	// 56 = 0x38
    UIImage *_thumbnailImage;	// 64 = 0x40
}

+ (id)reuseIdentifier;	// IMP=0x002000000034efb8
- (void).cxx_destruct;	// IMP=0x002000000034efe7
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) GEOPDMuninViewState *viewState; // @synthesize viewState=_viewState;
- (void)_updateFonts;	// IMP=0x001000000034ef16
- (void)_contentSizeDidChange;	// IMP=0x001000000034edf6
- (void)_setupConstraints;	// IMP=0x001000000034e599
- (void)_setupSubviews;	// IMP=0x001000000034e36a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000034e237

@end

