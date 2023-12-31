//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNMeCardSharingOnboardingAvatarCarouselViewController, CNMeCardSharingPickerLayoutAttributes, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingHeaderViewController : UIViewController
{
    NSString *_headerTitle;	// 8 = 0x8
    CNMeCardSharingOnboardingAvatarCarouselViewController *_avatarCarouselController;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;	// 32 = 0x20
    UILabel *_headerLabel;	// 40 = 0x28
}

+ (double)heightForHeaderWithContainerSize:(struct CGSize)arg1 withTitle:(id)arg2 layoutAttributes:(id)arg3 hasAvatar:(_Bool)arg4;	// IMP=0x00600000002a3e00
- (void).cxx_destruct;	// IMP=0x00000000002a3dad
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselController; // @synthesize avatarCarouselController=_avatarCarouselController;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002a38fa
- (void)viewDidLoad;	// IMP=0x00000000002a3736
- (id)initWithAvatarCarouselViewController:(id)arg1 headerTitle:(id)arg2 layoutAttributes:(id)arg3;	// IMP=0x00000000002a3659

@end

