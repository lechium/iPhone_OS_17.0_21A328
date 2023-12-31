//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UIButton;

@interface ButtonTableViewHeaderFooterView
{
    _Bool _stacking;	// 32 = 0x20
    NSMutableArray *_constraints;	// 40 = 0x28
    UIButton *_button;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000b53db2
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)updateAXIdentifiersWithPrefix:(id)arg1;	// IMP=0x0010000000b53c1f
- (void)prepareForReuse;	// IMP=0x0010000000b53b57
- (void)layoutSubviews;	// IMP=0x0010000000b53b19
- (void)_contentSizeChanged:(id)arg1;	// IMP=0x0010000000b53a65
- (void)_updateConstraintsIfNeeded;	// IMP=0x0010000000b53a15
- (void)_setConstraints:(_Bool)arg1;	// IMP=0x0010000000b5358a
- (_Bool)shouldStack;	// IMP=0x0010000000b532ea
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0010000000b53046

@end

