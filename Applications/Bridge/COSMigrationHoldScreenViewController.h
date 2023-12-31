//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class NSString;

@interface COSMigrationHoldScreenViewController : BPSWelcomeOptinViewController
{
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x002000000002fecf
- (void)globalAlertPresentationCoordinator:(id)arg1 presentAlert:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x002000000003064d
- (void)okayButtonPressed:(id)arg1;	// IMP=0x0010000000030558
- (id)okayButtonTitle;	// IMP=0x00100000000304ec
- (void)cleanupAndFinishBuddyController;	// IMP=0x00100000000303e4
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x00100000000303de
- (void)selectedMoreOptions:(id)arg1;	// IMP=0x00100000000303d8
- (void)learnMoreButtonPressed:(id)arg1;	// IMP=0x001000000003038c
- (void)selectedOptinChoice:(id)arg1;	// IMP=0x0010000000030386
- (id)imageResource;	// IMP=0x001000000003037a
- (_Bool)wantsLightenBlendedScreen;	// IMP=0x0010000000030372
- (id)moreOptionsButtonString;	// IMP=0x001000000003036a
- (id)learnMoreButtonTitle;	// IMP=0x0010000000030362
- (_Bool)legacyButtonStyles;	// IMP=0x001000000003035a
- (id)alternateButtonTitle;	// IMP=0x0010000000030352
- (id)suggestedButtonTitle;	// IMP=0x001000000003034a
- (id)detailString;	// IMP=0x00100000000301ca
- (id)detailTitleString;	// IMP=0x00100000000301c2
- (id)titleString;	// IMP=0x001000000003003c
- (_Bool)_isAltAccount;	// IMP=0x001000000002ff9d
- (void)setDelegate:(id)arg1;	// IMP=0x001000000002ff28
- (id)init;	// IMP=0x001000000002fed7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

