//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UIImage, UIImageView, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingNameCell : UITableViewCell
{
    long long _nameOrder;	// 8 = 0x8
    UIImage *_avatarImage;	// 16 = 0x10
    UITextField *_givenNameField;	// 24 = 0x18
    UITextField *_familyNameField;	// 32 = 0x20
    UIView *_fakeSeparator;	// 40 = 0x28
    UIImageView *_avatarImageView;	// 48 = 0x30
}

+ (double)desiredMinimumCellHeight;	// IMP=0x00600000000ea860
+ (id)cellIdentifier;	// IMP=0x00600000000ea853
- (void).cxx_destruct;	// IMP=0x00000000000ea7ef
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *fakeSeparator; // @synthesize fakeSeparator=_fakeSeparator;
@property(retain, nonatomic) UITextField *familyNameField; // @synthesize familyNameField=_familyNameField;
@property(retain, nonatomic) UITextField *givenNameField; // @synthesize givenNameField=_givenNameField;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(nonatomic) long long nameOrder; // @synthesize nameOrder=_nameOrder;
- (void)prepareForReuse;	// IMP=0x00000000000ea67e
@property(copy, nonatomic) NSString *familyName;
@property(copy, nonatomic) NSString *givenName;
- (void)setGivenNameField:(id)arg1 familyNameField:(id)arg2;	// IMP=0x00000000000ea3bc
- (void)layoutSubviews;	// IMP=0x00000000000e9cb1
- (id)textFieldForIndex:(long long)arg1;	// IMP=0x00000000000e9bdb
- (double)separatorHeight;	// IMP=0x00000000000e9af4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000e9956

@end

