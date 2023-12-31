//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class CAShapeLayer, CNSharingProfilePhotoPickerItem, UIImageView;

__attribute__((visibility("hidden")))
@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell
{
    _Bool _isSmallScreen;	// 8 = 0x8
    CNSharingProfilePhotoPickerItem *_pickerItem;	// 16 = 0x10
    CAShapeLayer *_selectionStrokeLayer;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    struct CGSize _originalSize;	// 40 = 0x28
}

+ (id)reuseIdentifier;	// IMP=0x0060000000216a8d
- (void).cxx_destruct;	// IMP=0x0000000000216a4b
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CAShapeLayer *selectionStrokeLayer; // @synthesize selectionStrokeLayer=_selectionStrokeLayer;
@property(retain, nonatomic) CNSharingProfilePhotoPickerItem *pickerItem; // @synthesize pickerItem=_pickerItem;
@property(nonatomic) _Bool isSmallScreen; // @synthesize isSmallScreen=_isSmallScreen;
- (void)prepareForReuse;	// IMP=0x0000000000216933
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000216910
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002168ed
- (void)updateWithImage:(id)arg1;	// IMP=0x00000000002168d0
- (id)selectionBezierPath;	// IMP=0x0000000000216845
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000021673f
- (void)layoutSubviews;	// IMP=0x00000000002162b6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000215f70

@end

