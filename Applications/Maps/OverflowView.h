//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIScrollView;

@interface OverflowView : UIView
{
    UIScrollView *_scrollView;	// 8 = 0x8
    struct CGSize _lastLayoutSize;	// 16 = 0x10
    UIView *_contentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000a62fe7
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_addContentView:(id)arg1;	// IMP=0x0010000000a62f39
- (void)resetContentOffset;	// IMP=0x0010000000a62f0c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0010000000a62e71
- (void)layoutSubviews;	// IMP=0x0010000000a62da9
- (id)_initialConstraintsForContentView:(id)arg1;	// IMP=0x0010000000a629e1
- (id)_initialScrollViewConstraints;	// IMP=0x0010000000a626e9
- (id)initWithContentView:(id)arg1;	// IMP=0x0010000000a625a5

@end
