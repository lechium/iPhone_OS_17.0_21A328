//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface STPurgeUsageOperation
{
    _Bool _purgeAllUsage;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool purgeAllUsage; // @synthesize purgeAllUsage=_purgeAllUsage;
- (_Bool)_runWithManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000070b3b
- (void)main;	// IMP=0x00100000000708f6
- (_Bool)isAsynchronous;	// IMP=0x00100000000708ee
- (id)initWithPersistenceController:(id)arg1 purgeAllUsage:(_Bool)arg2;	// IMP=0x00100000000708b1

@end
