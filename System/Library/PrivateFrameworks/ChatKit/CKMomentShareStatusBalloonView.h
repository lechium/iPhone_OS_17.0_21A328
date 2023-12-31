//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKColoredBalloonView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKMomentShareStatusBalloonView : CKColoredBalloonView
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_primaryLabel;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
}

+ (id)_secondaryLabelString;	// IMP=0x0060000000364503
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0060000000364355
- (void).cxx_destruct;	// IMP=0x0000000000364b3c
- (BOOL)color;	// IMP=0x0000000000364b31
- (struct CGSize)_performLayoutInSize:(struct CGSize)arg1 updateSubviewFrames:(_Bool)arg2;	// IMP=0x000000000036450c
- (void)layoutSubviews;	// IMP=0x000000000036448b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000364477
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000364012

@end

