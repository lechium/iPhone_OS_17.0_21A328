//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDMaintenanceOperation.h"

@class HDAssertion, HDDaemonTransaction, HDDatabase;

__attribute__((visibility("hidden")))
@interface _HDMaintenanceWorkCoordinatorProtectedDatabaseOperation : HDMaintenanceOperation
{
    HDDatabase *_database;	// 72 = 0x48
    HDAssertion *_accessibilityAssertion;	// 80 = 0x50
    HDDaemonTransaction *_transaction;	// 88 = 0x58
    CDUnknownBlockType _operationBlock;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000422a30
- (void)main;	// IMP=0x0000000000422750
- (void)dealloc;	// IMP=0x00000000004226be
- (id)initWithName:(id)arg1 database:(id)arg2 operationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004224e6

@end

