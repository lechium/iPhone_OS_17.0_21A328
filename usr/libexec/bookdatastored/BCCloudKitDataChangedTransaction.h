//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface BCCloudKitDataChangedTransaction
{
    NSString *_notificationName;	// 8 = 0x8
}

+ (id)transactionNameForEntityName:(id)arg1;	// IMP=0x004000000004369d
- (void).cxx_destruct;	// IMP=0x0020000000043985
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (double)coalescingDelay;	// IMP=0x0010000000043955
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000436b6
- (id)initWithEntityName:(id)arg1 notificationName:(id)arg2 delegate:(id)arg3;	// IMP=0x001000000004360f

@end

