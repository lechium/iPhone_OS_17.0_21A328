//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKStandardButton, UILabel, UIMenu;

__attribute__((visibility("hidden")))
@interface CKDetailsLocationShareCell
{
    _Bool _showOfferTimeRemaining;	// 8 = 0x8
    UIMenu *_menu;	// 16 = 0x10
    double _offerTimeRemaining;	// 24 = 0x18
    CKStandardButton *_button;	// 32 = 0x20
    UILabel *_timeRemainingLabel;	// 40 = 0x28
}

+ (id)identifier;	// IMP=0x006000000001881c
- (void).cxx_destruct;	// IMP=0x00000000000194ec
@property(retain, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(retain, nonatomic) CKStandardButton *button; // @synthesize button=_button;
@property(nonatomic) double offerTimeRemaining; // @synthesize offerTimeRemaining=_offerTimeRemaining;
@property(nonatomic) _Bool showOfferTimeRemaining; // @synthesize showOfferTimeRemaining=_showOfferTimeRemaining;
@property(copy, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
- (id)timeStringForTimeInterval:(double)arg1;	// IMP=0x0000000000019138
- (void)prepareForReuse;	// IMP=0x0000000000018e5a
- (void)layoutSubviews;	// IMP=0x0000000000018dda
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000018829

@end

