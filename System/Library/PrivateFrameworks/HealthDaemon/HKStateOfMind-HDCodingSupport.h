//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKStateOfMind.h>

@class NSString;

@interface HKStateOfMind (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x00100000002716f0
+ (Class)hd_dataEntityClass;	// IMP=0x00100000008e4ab3
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x0010000000271b7b
- (id)codableRepresentationForSync;	// IMP=0x00100000002717e7
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x00100000002ae6a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

