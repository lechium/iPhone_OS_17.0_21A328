//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CNAvatarViewController, CNContact, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkContactNameView : UIView
{
    CNContact *_contact;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
    CNAvatarViewController *_avatarViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000029814d
@property(readonly, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)setupConstraints;	// IMP=0x0000000000297af9
- (void)setupAvatar;	// IMP=0x0000000000297982
- (void)setupNameLabel;	// IMP=0x0000000000297723
- (id)initWithName:(id)arg1;	// IMP=0x00000000002975cb

@end

