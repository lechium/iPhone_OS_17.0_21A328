//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, UIImage, UIImageView;

@interface CarNavigationSearchCategoryViewCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    NSUUID *_updateIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000cc1eaf
@property(retain, nonatomic) NSUUID *updateIdentifier; // @synthesize updateIdentifier=_updateIdentifier;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0010000000cc1df9
@property(nonatomic) __weak UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000cc1c41

@end

