//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface (null) (ManagedAppDistributionDaemon)
- (void)shouldPrioritizeAppWithBundleID:(id)arg1;	// IMP=0x0020000000067d00
- (void)coordinatorShouldPrioritize:(id)arg1;	// IMP=0x0010000000067bd0
- (void)coordinatorShouldResume:(id)arg1;	// IMP=0x0010000000067bb0
- (void)coordinatorShouldPause:(id)arg1;	// IMP=0x0010000000067b90
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000067b20
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forApplicationRecord:(id)arg2;	// IMP=0x0010000000067890
@end
