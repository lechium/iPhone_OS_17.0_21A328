//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STAppStoreIconCell
{
    UIImageView *_appIconView;	// 120 = 0x78
    UILabel *_nameLabel;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000222fa
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UIImageView *appIconView; // @synthesize appIconView=_appIconView;
- (void)_didFetchAppInfoOrIcon:(id)arg1;	// IMP=0x0000000000022291
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000002206d
- (void)setValue:(id)arg1;	// IMP=0x0000000000021d73
- (id)value;	// IMP=0x0000000000021d35
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x0000000000021684

@end

