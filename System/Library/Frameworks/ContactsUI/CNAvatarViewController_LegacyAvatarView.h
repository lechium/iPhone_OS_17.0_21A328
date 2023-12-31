//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNAvatarViewController.h"

@class CNAvatarView, CNContactStore, NSArray, NSString;
@protocol CNSchedulerProvider, CNUILikenessRendering, NSObject><CNAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController
{
    _Bool _threeDTouchEnabled;	// 8 = 0x8
    NSArray *_contacts;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    id <CNUILikenessRendering> _imageRenderer;	// 32 = 0x20
    unsigned long long _style;	// 40 = 0x28
    id <NSObject><CNAvatarViewControllerDelegate> _delegate;	// 48 = 0x30
    id <CNSchedulerProvider> _schedulerProvider;	// 56 = 0x38
    CNAvatarView *_avatarView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000244430
@property(nonatomic) __weak CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(nonatomic) __weak id <NSObject><CNAvatarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) id <CNUILikenessRendering> imageRenderer; // @synthesize imageRenderer=_imageRenderer;
@property(nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)contacts;	// IMP=0x0000000000244360
- (void)didUpdateContentForAvatarView:(id)arg1;	// IMP=0x00000000002442c3
- (id)presentingViewControllerForAvatarView:(id)arg1;	// IMP=0x0000000000244253
- (void)setContacts:(id)arg1;	// IMP=0x00000000002441b1
- (void)loadView;	// IMP=0x0000000000243fe7
- (void)setAllowStaleRendering:(_Bool)arg1;	// IMP=0x0000000000243f9d
- (void)updateViewWithGroupIdentity:(id)arg1;	// IMP=0x0000000000243f2e
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000243ec1
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000243daa
- (id)descriptorForRequiredKeys;	// IMP=0x0000000000243d75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

