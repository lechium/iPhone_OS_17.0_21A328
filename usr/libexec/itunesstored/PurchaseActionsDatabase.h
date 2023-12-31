//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface PurchaseActionsDatabase : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x00400000000d05a2
- (void).cxx_destruct;	// IMP=0x00200000000d06c2
- (void)incrementPingbackRetryCountForApp:(id)arg1;	// IMP=0x00100000000d01f0
- (void)removeNonPendingInstallAttributionPingbacksBeforeDate:(id)arg1;	// IMP=0x00100000000cfe34
- (void)removeInstallAttributionPingbackForApp:(id)arg1;	// IMP=0x00100000000cfa82
- (void)getPendingInstallAttributionPingbacksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cf52d
- (void)setPingbackPendingForApp:(id)arg1;	// IMP=0x00100000000cf17b
- (void)getInstallAttributionPingbackForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cea1b
- (void)insertInstallAttributionPingback:(id)arg1;	// IMP=0x00100000000ce434
- (void)removeInstallAttributionParamsBeforeDate:(id)arg1;	// IMP=0x00100000000ce078
- (void)removeInstallAttributionParamsForApp:(id)arg1;	// IMP=0x00100000000cdcc6
- (void)getInstallAttributionParamsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cd4fd
- (void)insertInstallAttributionParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ccf2b
- (void)resetTimestampsForApp:(id)arg1;	// IMP=0x00100000000cc53e
- (void)insertPurchaseIntent:(id)arg1;	// IMP=0x00100000000cc0a2
- (void)getPurchaseIntentsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cbad6
- (void)deletePurchaseIntentsForApp:(id)arg1;	// IMP=0x00100000000cb89b
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cb7a1
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cb6ee
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cb5f0
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00100000000cb51d
- (id)init;	// IMP=0x00100000000cb48b

@end

