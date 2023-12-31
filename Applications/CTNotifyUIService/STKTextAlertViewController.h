//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, STKTextSessionAction;

@interface STKTextAlertViewController
{
}

+ (_Bool)wantsTextView;	// IMP=0x0020000000004a78
- (void)dismiss;	// IMP=0x0020000000005442
- (void)dismiss:(id)arg1;	// IMP=0x00100000000053d0
- (void)accept:(id)arg1;	// IMP=0x0010000000005361
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000052de
- (id)alertText;	// IMP=0x0010000000005264
- (void)rightNavigationButtonPressed;	// IMP=0x0010000000005252
- (void)leftNavigationButtonPressed;	// IMP=0x00100000000051e0
- (id)newBottomBar;	// IMP=0x0010000000004cd1
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;	// IMP=0x0010000000004cbc
- (id)newTopBar;	// IMP=0x0010000000004b30
- (_Bool)_sendsResponseUponDisplay;	// IMP=0x0010000000004ac2
- (_Bool)validateAction:(id)arg1;	// IMP=0x0010000000004a80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) STKTextSessionAction *sessionAction; // @dynamic sessionAction;
@property(readonly) Class superclass;

@end

