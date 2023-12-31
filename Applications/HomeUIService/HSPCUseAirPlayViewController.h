//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIImageView, UIView, UIViewController;

@interface HSPCUseAirPlayViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UIImageView *_speakerIconImageView;	// 32 = 0x20
    UIView *_airplayIconView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000054ca5
@property(retain, nonatomic) UIView *airplayIconView; // @synthesize airplayIconView=_airplayIconView;
@property(retain, nonatomic) UIImageView *speakerIconImageView; // @synthesize speakerIconImageView=_speakerIconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)_enableAirPlay;	// IMP=0x001000000005462e
- (id)_applyOnboardingSelectionsIfNeeded;	// IMP=0x00100000000543f6
- (id)_applyOnboardingSelections;	// IMP=0x0010000000053fae
- (void)viewDidLoad;	// IMP=0x0010000000053869
- (id)commitConfiguration;	// IMP=0x0010000000053849
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x00100000000534fb

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

