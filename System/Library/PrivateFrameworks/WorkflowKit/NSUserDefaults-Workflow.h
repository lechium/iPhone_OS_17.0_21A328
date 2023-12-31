//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (Workflow)
+ (_Bool)initialBiomeStreamWrites;	// IMP=0x00800000000741e1
+ (_Bool)springBoardActionButton;	// IMP=0x00800000000741c9
+ (_Bool)dawnFluidityEnabled;	// IMP=0x00800000000741b1
+ (_Bool)remoteWidgetConfigurationEnabled;	// IMP=0x0080000000074146
+ (_Bool)syncV2Enabled;	// IMP=0x0080000000074085
+ (_Bool)drawerPerformanceEnabled;	// IMP=0x008000000007401a
+ (_Bool)maritimeEnabled;	// IMP=0x0080000000073faf
+ (_Bool)watchAutomationEnabled;	// IMP=0x0080000000073f44
+ (_Bool)walletTransactionTriggerEnabled;	// IMP=0x0080000000073ed9
+ (_Bool)allowActionsFromAllBundles;	// IMP=0x0080000000073e8e
+ (_Bool)universalPreviewsEnabled;	// IMP=0x0080000000073e23
+ (_Bool)bannerWorkaroundsDisabled;	// IMP=0x0080000000073dd8
+ (_Bool)bannersEnabled;	// IMP=0x0080000000073d8d
+ (_Bool)useLinkActionDenyList;	// IMP=0x0080000000073d22
+ (id)simulatedFeatureFlagState:(id)arg1;	// IMP=0x0080000000073c8b
+ (void)setSimulatedStateForTesting:(_Bool)arg1 forFeatureFlag:(id)arg2;	// IMP=0x0080000000073bd7
+ (id)siriAssistantUserDefaults;	// IMP=0x0080000000073ba7
+ (id)systemShortcutsUserDefaults;	// IMP=0x0080000000073b77
+ (id)workflowUserDefaults;	// IMP=0x0080000000073b47
- (id)workflowIdentifierConsumingSingleUseToken:(id)arg1;	// IMP=0x00100000000b6bd6
- (void)setWorkflowIdentifier:(id)arg1 forToken:(id)arg2;	// IMP=0x00100000000b6ad8
@end

