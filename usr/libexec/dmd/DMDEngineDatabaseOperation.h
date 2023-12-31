//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class DMDConfigurationDatabase, NSObject;
@protocol OS_os_transaction;

@interface DMDEngineDatabaseOperation : CATOperation
{
    DMDConfigurationDatabase *_database;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000046024
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) DMDConfigurationDatabase *database; // @synthesize database=_database;
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x0010000000045f13
- (void)main;	// IMP=0x0010000000045da8
- (_Bool)isAsynchronous;	// IMP=0x0010000000045da0
- (id)init;	// IMP=0x0010000000045d01
- (void)dealloc;	// IMP=0x0010000000045c28

@end

