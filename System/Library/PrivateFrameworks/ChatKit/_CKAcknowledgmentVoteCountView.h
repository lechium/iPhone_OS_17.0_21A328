//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _CKAcknowledgmentVoteCountView : UIView
{
    UILabel *_voteCountLabel;	// 8 = 0x8
    UIImageView *_ackIconImageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000113cd4
@property(retain, nonatomic) UIImageView *ackIconImageView; // @synthesize ackIconImageView=_ackIconImageView;
@property(retain, nonatomic) UILabel *voteCountLabel; // @synthesize voteCountLabel=_voteCountLabel;
- (void)layoutSubviews;	// IMP=0x0000000000113945
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001138a8
- (void)configureWithAcknowledgmentTally:(id)arg1;	// IMP=0x00000000001135f9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000113347

@end

