//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UILabel, UIView, _SFSiteIconView;

__attribute__((visibility("hidden")))
@interface SFSiteIconCell : UICollectionViewCell
{
    UIView *_iconDimmingView;	// 8 = 0x8
    _SFSiteIconView *_iconView;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x00100000000fc5c7
- (void).cxx_destruct;	// IMP=0x00000000000fd9ed
- (void)_setAction:(id)arg1 backgroundEffect:(id)arg2;	// IMP=0x00000000000fd90b
- (void)_setAction:(id)arg1;	// IMP=0x00000000000fd8f7
- (void)configureUsingAction:(id)arg1 backgroundEffect:(id)arg2;	// IMP=0x00000000000fd859
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;
- (void)setIconFromAction:(id)arg1;	// IMP=0x00000000000fd29e
- (void)setIconFromBookmark:(id)arg1;	// IMP=0x00000000000fd242
@property(copy, nonatomic) NSString *visualEffectGroupName;
- (id)focusEffect;	// IMP=0x00000000000fd171
@property(readonly, nonatomic) UIView *contextMenuPreviewView;
- (void)updateViewsDependingOnCustomTraits;	// IMP=0x00000000000fd07d
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000fcfd0
- (void)updateConstraints;	// IMP=0x00000000000fcf40
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fcf11
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000fc5d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

