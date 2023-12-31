//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PDDatabaseValue;

@interface PDMissingEntityReference : NSObject
{
    NSString *_entityName;	// 8 = 0x8
    NSString *_referencingEntityName;	// 16 = 0x10
    NSString *_entityID;	// 24 = 0x18
    NSString *_referencingEntityID;	// 32 = 0x20
}

+ (id)identityColumnName;	// IMP=0x00200000001a5e20
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001a5d84
+ (long long)migrationOrder;	// IMP=0x00100000001a5af3
+ (id)entityName;	// IMP=0x00100000001a5ae6
- (void).cxx_destruct;	// IMP=0x00200000001a5e3b
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x00100000001a5d09
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000001a5c1d

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

