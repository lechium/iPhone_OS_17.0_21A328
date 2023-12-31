//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@protocol STSMiniFlowControllerDelegate;

@interface COSScreenTimeSetPasscodeViewController : BPSWelcomeOptinViewController
{
    id <STSMiniFlowControllerDelegate> miniFlowDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000069e67
@property(nonatomic) __weak id <STSMiniFlowControllerDelegate> miniFlowDelegate; // @synthesize miniFlowDelegate;
- (_Bool)_errorIsUserCanceledSettingPIN:(id)arg1;	// IMP=0x0010000000069db0
- (void)_collectThenSetScreenTimePasscodeForFamilyMember:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000694af
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x00100000000691b1
- (id)alternateButtonString;	// IMP=0x00100000000691a9
- (id)suggestedButtonTitle;	// IMP=0x001000000006913d
- (id)detailString;	// IMP=0x0010000000069050
- (id)titleString;	// IMP=0x0010000000068fe4
- (id)imageResource;	// IMP=0x0010000000068fd7
- (id)init;	// IMP=0x0010000000068f86

@end

