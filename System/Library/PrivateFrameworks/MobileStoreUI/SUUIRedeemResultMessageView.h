//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIRedeemResultMessageView : UIView
{
    UILabel *_messageLabel;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002b71ce
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002b70c5
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002b7037
- (void)layoutSubviews;	// IMP=0x00000000002b6d6e
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;

@end

