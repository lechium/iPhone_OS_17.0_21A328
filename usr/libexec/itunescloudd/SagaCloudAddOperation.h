//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaCloudAddOperation
{
}

- (void)main;	// IMP=0x00400000000f8dfd
- (_Bool)isPersistent;	// IMP=0x00100000000f8df5
- (unsigned int)currentDatabaseRevision;	// IMP=0x00100000000f8da8
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x00100000000f8da2
- (void)processAddedItems:(id)arg1;	// IMP=0x00100000000f8d9c
- (void)logCloudAddRequestDescription;	// IMP=0x00100000000f8d96
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00100000000f8d8e

@end
