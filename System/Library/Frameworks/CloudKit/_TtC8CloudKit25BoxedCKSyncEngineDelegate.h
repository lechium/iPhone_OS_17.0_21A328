//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKSyncEngine, CKSyncEngineEvent, CKSyncEngineFetchChangesContext, CKSyncEngineSendChangesContext, MISSING_TYPE, NSArray;

@interface _TtC8CloudKit25BoxedCKSyncEngineDelegate : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000138ca
- (id)init;	// IMP=0x0000000000013894
- (void)syncEngine:(CKSyncEngine *)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(NSArray *)arg2 recordIDs:(NSArray *)arg3 completionHandler:(void (^)(NSArray *))arg4;	// IMP=0x000000000001360a
- (void)syncEngine:(CKSyncEngine *)arg1 nextFetchChangesOptionsForContext:(CKSyncEngineFetchChangesContext *)arg2 completionHandler:(void (^)(CKSyncEngineFetchChangesOptions *))arg3;	// IMP=0x0000000000012e6c
- (void)syncEngine:(CKSyncEngine *)arg1 nextRecordZoneChangeBatchForContext:(CKSyncEngineSendChangesContext *)arg2 completionHandler:(void (^)(CKSyncEngineRecordZoneChangeBatch *))arg3;	// IMP=0x00000000000123f8
- (void)syncEngine:(CKSyncEngine *)arg1 handleEvent:(CKSyncEngineEvent *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x0000000000011bd1

@end

