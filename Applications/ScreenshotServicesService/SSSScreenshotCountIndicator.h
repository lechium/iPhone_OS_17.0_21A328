//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel, UIPageControl;

@interface SSSScreenshotCountIndicator : UIView
{
    UIPageControl *_pageControl;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    long long _count;	// 24 = 0x18
    long long _index;	// 32 = 0x20
}

+ (id)_labelFont;	// IMP=0x004000000003b4e6
- (void).cxx_destruct;	// IMP=0x002000000003ba9e
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long count; // @synthesize count=_count;
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000003b96f
- (void)layoutSubviews;	// IMP=0x001000000003b728
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000003b559

@end

