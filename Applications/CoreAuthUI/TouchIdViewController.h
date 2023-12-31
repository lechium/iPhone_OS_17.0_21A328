//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, ScreenDimmingView, TouchIdAlertController, TouchIdViewModel;

@interface TouchIdViewController
{
    TouchIdAlertController *_alertController;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    TouchIdViewModel *_viewModel;	// 24 = 0x18
    NSDictionary *_actions;	// 32 = 0x20
    ScreenDimmingView *_dimmingView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000bee5
@property(readonly, nonatomic) ScreenDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000bd1b
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bc2b
- (void)didReceiveAuthenticationData;	// IMP=0x001000000000ba04
- (void)_handleBiometryNoMatch;	// IMP=0x001000000000b7fe
- (void)_setupAlertControllerActions:(id)arg1;	// IMP=0x001000000000b4f9
- (void)_setupAlertController;	// IMP=0x001000000000b3ca
- (void)_addFrontMostSubview:(id)arg1;	// IMP=0x001000000000b2e7
- (void)_dismissUIWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b2c5
- (void)_presentUI:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b2a0
- (void)_setupUI;	// IMP=0x001000000000b28e
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b24e
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x001000000000b169
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000b083
- (void)loadView;	// IMP=0x001000000000aff2

@end

