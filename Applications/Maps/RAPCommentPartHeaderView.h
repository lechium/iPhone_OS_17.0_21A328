//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPCommentQuestion, UILabel;

@interface RAPCommentPartHeaderView
{
    RAPCommentQuestion *_question;	// 48 = 0x30
    UILabel *_remainingCharactersLabel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000725f29
@property(retain, nonatomic) UILabel *remainingCharactersLabel; // @synthesize remainingCharactersLabel=_remainingCharactersLabel;
@property(retain, nonatomic) RAPCommentQuestion *question; // @synthesize question=_question;
- (void)updateRemainingCharacters;	// IMP=0x0010000000725e3b
- (void)layoutSubviews;	// IMP=0x0010000000725d7f
- (void)_createSubviews;	// IMP=0x0010000000725cbb
- (id)_initialConstraints;	// IMP=0x0010000000725985
- (id)initWithQuestion:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000725836

@end

