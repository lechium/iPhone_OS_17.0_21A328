//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LAUIPhysicalButtonView;

@interface TouchIdViewControllerWithCoachings
{
    LAUIPhysicalButtonView *_coachingView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000c4b1
- (void)_updateUI;	// IMP=0x001000000000c3f7
- (void)_setupDimming;	// IMP=0x001000000000c2a5
- (void)_setupCoachingView;	// IMP=0x001000000000c1a9
- (_Bool)prefersStatusBarHidden;	// IMP=0x001000000000c1a1
- (void)_dismissUIWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c12e
- (void)_presentUI:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c084
- (void)_setupUI;	// IMP=0x001000000000c046
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000bfba
- (void)viewWillLayoutSubviews;	// IMP=0x001000000000bf79
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000bf38

@end
