//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKViewWithHairline.h>

@class NSString, UIButton;

@interface ExtensionsActionView : MKViewWithHairline
{
    UIButton *_button;	// 8 = 0x8
    CDUnknownBlockType _didTapButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002fa922
@property(copy, nonatomic) CDUnknownBlockType didTapButton; // @synthesize didTapButton=_didTapButton;
@property(retain, nonatomic) NSString *buttonTitle;
- (void)_didTap;	// IMP=0x00100000002fa851
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000002fa838
- (void)updateTheme;	// IMP=0x00100000002fa7ca
- (void)_commonInit;	// IMP=0x00100000002fa4d3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002fa487
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000002fa42a

@end

