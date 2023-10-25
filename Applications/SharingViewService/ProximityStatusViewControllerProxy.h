//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, _TtC18SharingViewService36ProximityStatusContentViewController;

@interface ProximityStatusViewControllerProxy
{
    _TtC18SharingViewService36ProximityStatusContentViewController *_contentViewController;	// 120 = 0x78
    _Bool _chargeNowButtonPressed;	// 128 = 0x80
    NSDate *_fullChargeDeadline;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x002000000019d999
- (void)_testHandler:(id)arg1;	// IMP=0x001000000019d8e3
- (void)proxCardFlowDidDismiss;	// IMP=0x001000000019d88c
- (void)pushStatusViewController;	// IMP=0x001000000019d80b
- (void)presentInitialStatusViewController;	// IMP=0x001000000019d779
- (void)createContentViewController;	// IMP=0x001000000019d561
- (void)chargeNowButtonPressed;	// IMP=0x001000000019d4cf
- (void)ensureFullChargeDeadline;	// IMP=0x001000000019d4c9
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000019d325
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000019d31d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000019d227
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000019cd9a
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019cce7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
