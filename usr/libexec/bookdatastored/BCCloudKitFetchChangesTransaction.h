//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction
{
    BCCloudKitController *_cloudKitController;	// 8 = 0x8
}

+ (id)transactionNameForEntityName:(id)arg1;	// IMP=0x004000000004594c
- (void).cxx_destruct;	// IMP=0x0020000000045bda
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
- (double)transactionLifetimeTimout;	// IMP=0x0010000000045b9f
- (double)coalescingDelay;	// IMP=0x0010000000045b91
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045965
- (id)initWithCloudKitController:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000000458d4

@end

