//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKTranscriptMomentShareLabelCell
{
    UILabel *_label;	// 8 = 0x8
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 attributedText:(id)arg2 displayScale:(double)arg3;	// IMP=0x006000000013f3f0
+ (id)reuseIdentifier;	// IMP=0x006000000013f3e3
- (void).cxx_destruct;	// IMP=0x000000000013f515
- (id)label;	// IMP=0x000000000013f500
- (id)cellView;	// IMP=0x000000000013f4eb
- (id)attributedText;	// IMP=0x000000000013f4ce
- (void)setAttributedText:(id)arg1;	// IMP=0x000000000013f4b1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013f2c6
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x0000000000376291

@end
