//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface COSResetWatchNoticeViewController : BPSWelcomeOptinViewController
{
    NSObject<OS_dispatch_source> *_discoveryTimer;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x0040000000053bc0
- (void).cxx_destruct;	// IMP=0x0020000000054259
@property(retain, nonatomic) NSObject<OS_dispatch_source> *discoveryTimer; // @synthesize discoveryTimer=_discoveryTimer;
- (void)discoveredAdvertisingWatch:(id)arg1;	// IMP=0x001000000005414b
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x0010000000054145
- (void)selectedMoreOptions:(id)arg1;	// IMP=0x001000000005413f
- (void)okayButtonPressed:(id)arg1;	// IMP=0x00100000000540f3
- (void)selectedOptinChoice:(id)arg1;	// IMP=0x00100000000540ed
- (id)imageResource;	// IMP=0x00100000000540dc
- (id)moreOptionsButtonString;	// IMP=0x00100000000540d4
- (id)okayButtonTitle;	// IMP=0x0010000000054068
- (_Bool)legacyButtonStyles;	// IMP=0x0010000000054060
- (id)alternateButtonTitle;	// IMP=0x0010000000054058
- (id)suggestedButtonTitle;	// IMP=0x0010000000054050
- (id)detailString;	// IMP=0x0010000000053fe4
- (id)detailTitleString;	// IMP=0x0010000000053fdc
- (id)titleString;	// IMP=0x0010000000053f70
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000053f2f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000053ed9
- (void)beginDiscoveryTimer;	// IMP=0x0010000000053d46
- (void)cancelDiscoveryTimer;	// IMP=0x0010000000053c8b
- (void)dealloc;	// IMP=0x0010000000053c19
- (id)init;	// IMP=0x0010000000053bc8

@end

