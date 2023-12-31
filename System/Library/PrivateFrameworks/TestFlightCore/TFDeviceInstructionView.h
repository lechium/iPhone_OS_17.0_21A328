//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface TFDeviceInstructionView : UIView
{
    UIImageView *_deviceImageView;	// 8 = 0x8
}

+ (struct UIEdgeInsets)imageLayoutInsets;	// IMP=0x006000000001fc5a
+ (id)backgroundColor;	// IMP=0x006000000001fbad
+ (double)cornerRadius;	// IMP=0x006000000001fb9f
- (void).cxx_destruct;	// IMP=0x000000000001fe96
@property(readonly, nonatomic) UIImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
- (void)layoutSubviews;	// IMP=0x000000000001fd88
- (void)updateCurrentDeviceImageToOrientation:(long long)arg1;	// IMP=0x000000000001fcf6
- (void)displayDeviceImage:(id)arg1 inOrientation:(long long)arg2;	// IMP=0x000000000001fc71
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001fa57

@end

