//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel;

@interface MacUserProfileTipViewController
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_addLabel;	// 16 = 0x10
    UILabel *_editLabel;	// 24 = 0x18
    NSString *_mapsHomeSectionTitlePlural;	// 32 = 0x20
    NSString *_linkTypeStringSingular;	// 40 = 0x28
    long long _userProfileLinkType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001ea381
@property(readonly, nonatomic) long long userProfileLinkType; // @synthesize userProfileLinkType=_userProfileLinkType;
- (id)_setupTextString:(id)arg1 withImage:(id)arg2;	// IMP=0x00100000001ea287
- (void)viewDidLoad;	// IMP=0x00100000001e92c8
- (id)initWithUserProfileLinkType:(long long)arg1;	// IMP=0x00100000001e90c1

@end

