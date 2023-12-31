//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton, UILabel;
@protocol NavTrayFeedbackViewDelegate;

@interface NavTrayFeedbackView : UIView
{
    id <NavTrayFeedbackViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIButton *_thumbsUpButton;	// 24 = 0x18
    UIButton *_thumbsDownButton;	// 32 = 0x20
    CDUnknownBlockType _minimizedValueFontProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000006e698f
- (void)_thumbsDownPressed:(id)arg1;	// IMP=0x00100000006e68f6
- (void)_thumbsUpPressed:(id)arg1;	// IMP=0x00100000006e685d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000006e6718
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000006e6674
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000006e5706

@end

