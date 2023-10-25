//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class COSTinkerFamilyBadgeView, UIImageView, UILabel;

@interface COSTinkerFamilyMemberCell : UITableViewCell
{
    _Bool _requiresUnpairing;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIImageView *_profilePictureView;	// 32 = 0x20
    COSTinkerFamilyBadgeView *_profileWatchBadgeView;	// 40 = 0x28
}

+ (id)nameFormatter;	// IMP=0x0040000000131b08
- (void).cxx_destruct;	// IMP=0x0020000000132ca3
- (void)prepareForReuse;	// IMP=0x00100000001327ec
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000131b5d

@end
