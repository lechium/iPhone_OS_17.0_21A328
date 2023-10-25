//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, HUIconView;
@protocol HFIconDescriptor;

@interface HSPCMatterAccessoryDoneViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    HUIconView *_iconView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000020a40
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
- (void)setCoordinator:(id)arg1;	// IMP=0x0010000000020a0a
- (id)coordinator;	// IMP=0x00100000000209f4
- (void)setConfig:(id)arg1;	// IMP=0x00100000000209e3
- (id)config;	// IMP=0x00100000000209cd
- (id)commitConfiguration;	// IMP=0x001000000002092d
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor;
- (void)viewDidLoad;	// IMP=0x001000000002074e
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x00100000000204bb

@end
