//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NDTSQKeyValueStore
{
    NSString *_insert;	// 8 = 0x8
    NSString *_exchange;	// 16 = 0x10
    NSString *_select;	// 24 = 0x18
    NSString *_delete;	// 32 = 0x20
    NSString *_baseName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001519e
- (void)deleteValueForKey:(id)arg1;	// IMP=0x00100000000150a6
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000014f68
- (id)getDataForKey:(id)arg1 default:(id)arg2;	// IMP=0x0010000000014d9f
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000014c65
- (id)getStringForKey:(id)arg1 default:(id)arg2;	// IMP=0x0010000000014a77
- (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0010000000014951
- (double)getDoubleForKey:(id)arg1 default:(double)arg2;	// IMP=0x00100000000147c7
- (_Bool)compareAndSwapIntegerValue:(long long)arg1 expectedExistingValue:(long long)arg2 forKey:(id)arg3;	// IMP=0x001000000001467a
- (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x0010000000014557
- (long long)getIntegerForKey:(id)arg1 default:(long long)arg2;	// IMP=0x00100000000143dd
- (id)instanceName;	// IMP=0x00100000000143ad
- (void)migrateFrom:(long long)arg1;	// IMP=0x00100000000143a7
- (long long)currentVersion;	// IMP=0x001000000001439c
- (void)createTables;	// IMP=0x0010000000014335
- (id)initWithName:(id)arg1;	// IMP=0x00100000000141d9

@end
