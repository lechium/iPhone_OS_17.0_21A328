//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIActivityIndicatorView;

@interface ProminentActionButton
{
    UIActivityIndicatorView *_spinner;	// 8 = 0x8
    _Bool _inverted;	// 16 = 0x10
}

+ (id)invertedButton;	// IMP=0x00200000006bc495
+ (id)button;	// IMP=0x00100000006bc434
+ (void)_setAttributesForProminentActionButton:(id)arg1 inverted:(_Bool)arg2;	// IMP=0x00100000006bc13d
- (void).cxx_destruct;	// IMP=0x00200000006bc97e
@property(nonatomic) _Bool inverted; // @synthesize inverted=_inverted;
- (void)updateTheme;	// IMP=0x00100000006bc7ff
- (void)awakeFromNib;	// IMP=0x00100000006bc7b1
- (void)tintColorDidChange;	// IMP=0x00100000006bc69a
- (void)setSpinnerHidden:(_Bool)arg1;	// IMP=0x00100000006bc4f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
