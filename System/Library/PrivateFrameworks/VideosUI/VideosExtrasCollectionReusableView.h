//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasCollectionReusableView : UICollectionReusableView
{
    UILabel *_textLabel;	// 8 = 0x8
    MPUContentSizeLayoutConstraint *_textTopConstraint;	// 16 = 0x10
    NSLayoutConstraint *_textLeftConstraint;	// 24 = 0x18
    MPUContentSizeLayoutConstraint *_textBottomConstraint;	// 32 = 0x20
    NSLayoutConstraint *_textRightConstraint;	// 40 = 0x28
    struct UIEdgeInsets _labelInsets;	// 48 = 0x30
    UIView *_borderView;	// 80 = 0x50
    NSArray *_borderConstraints;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001d7c40
- (void)configureForHeaderElement:(id)arg1 headerStyle:(id)arg2;	// IMP=0x00000000001d76dd
- (void)_configureConstraintsForInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001d75e6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001d7372

@end

