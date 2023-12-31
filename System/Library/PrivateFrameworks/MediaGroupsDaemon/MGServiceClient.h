//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MGServiceClient : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSDictionary *_queries;	// 24 = 0x18
    NSObject<OS_os_transaction> *_transaction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002a545
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) NSDictionary *queries; // @synthesize queries=_queries;
@property(readonly, retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)enumerateQueriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a370
- (id)outstandingQueryForIdentifier:(id)arg1;	// IMP=0x000000000002a1ce
- (void)removeQuery:(id)arg1;	// IMP=0x000000000002a0a5
- (void)addQuery:(id)arg1;	// IMP=0x0000000000029f73
- (id)description;	// IMP=0x0000000000029c8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029c29
- (unsigned long long)hash;	// IMP=0x0000000000029be5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029b2b
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000029aab

@end

