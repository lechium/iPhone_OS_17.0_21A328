//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSString;

@interface _TtC13MediaRemoteUI24BannerBaseViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *configuration;	// 24 = 0x18
    MISSING_TYPE *requesterIdentifier;	// 32 = 0x20
    MISSING_TYPE *sendTapEventForAnyTapInsideView;	// 48 = 0x30
    MISSING_TYPE *idleTimerDuration;	// 56 = 0x38
    MISSING_TYPE *idleTimer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0040000000020de0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000021c70
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000021be0
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000021bc0
- (void)presentableWillAppearAsBanner:(id)arg1;	// IMP=0x0010000000021b70
- (void)bannerLongPressActionWithSender:(id)arg1;	// IMP=0x0010000000021ae0
- (void)bannerTapActionWithSender:(id)arg1;	// IMP=0x0010000000021ac0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000021a80
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000216c0
- (void)viewDidLoad;	// IMP=0x0010000000020f50
- (void)dealloc;	// IMP=0x0010000000020dc0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000020c30
@property(nonatomic, readonly) UIViewController *viewController;
@property(nonatomic, readonly) NSString *requestIdentifier;
@property(nonatomic, readonly) NSString *requesterIdentifier;

@end
