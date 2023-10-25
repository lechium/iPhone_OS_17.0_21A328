//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImageView;
@protocol CKCatchUpButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKCatchUpButton : UIView
{
    id <CKCatchUpButtonDelegate> _delegate;	// 8 = 0x8
    UIView *_container;	// 16 = 0x10
    UIImageView *_arrow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000556e78
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak id <CKCatchUpButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bannerPressed:(id)arg1;	// IMP=0x0000000000556c34
- (void)layoutSubviews;	// IMP=0x0000000000556b38
- (id)init;	// IMP=0x0000000000556325

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
