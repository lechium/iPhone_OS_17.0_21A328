//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIButton, UIImage, UIImageView, UILabel, UISlider;

__attribute__((visibility("hidden")))
@interface SKUIDownloadsCellView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UIButton *_button;	// 32 = 0x20
    UISlider *_progressSlider;	// 40 = 0x28
    NSAttributedString *_attributedTitle;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    long long _buttonType;	// 64 = 0x40
    _Bool _isPad;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000323801
@property(nonatomic) _Bool isPad; // @synthesize isPad=_isPad;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void)layoutSubviews;	// IMP=0x00000000003231ef
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000032313b
@property(nonatomic) double progress;
@property(retain, nonatomic) UIImage *image;
- (id)init;	// IMP=0x00000000003228a2

@end
