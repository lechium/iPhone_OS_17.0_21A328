//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, UIButton;

@interface HSPCNameIdentifyServiceRow
{
    UIButton *_identifyButton;	// 24 = 0x18
    UIActivityIndicatorView *_spinner;	// 32 = 0x20
}

+ (id)_reuseIdentifier;	// IMP=0x004000000004cb91
- (void).cxx_destruct;	// IMP=0x002000000004df99
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) UIButton *identifyButton; // @synthesize identifyButton=_identifyButton;
- (void)identify;	// IMP=0x001000000004dcc2
- (void)updateUIWithService:(id)arg1 suggestedName:(id)arg2;	// IMP=0x001000000004dc56
- (void)updateConstraints;	// IMP=0x001000000004cd6b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000004cb9e

@end

