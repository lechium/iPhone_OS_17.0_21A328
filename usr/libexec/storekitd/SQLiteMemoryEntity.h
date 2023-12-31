//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SQLiteMemoryEntity : NSObject
{
    long long _databaseID;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
    NSMutableDictionary *_externalPropertyValues;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x00200000000a1c24
+ (Class)databaseEntityClass;	// IMP=0x00100000000a1c13
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;	// IMP=0x001000000007f861
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x001000000007f768
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000007f753
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000007f5eb
- (void).cxx_destruct;	// IMP=0x00100000000a21f7
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a217e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a203c
- (unsigned long long)hash;	// IMP=0x00000000000a2026
- (id)description;	// IMP=0x00100000000a1fa0
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x00100000000a1f8a
- (id)valueForProperty:(id)arg1;	// IMP=0x00100000000a1f74
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x00100000000a1ef7
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;	// IMP=0x00100000000a1e6d
- (void)setValuesWithDictionary:(id)arg1;	// IMP=0x00100000000a1e57
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x00100000000a1d88
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00100000000a1cfe
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x00100000000a1ce8
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x00100000000a1c31
- (id)initWithPropertyValues:(id)arg1;	// IMP=0x00100000000a1bf5
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x00100000000a1b4b
- (id)initWithDatabaseID:(long long)arg1 propertyValues:(id)arg2 externalPropertyValues:(id)arg3;	// IMP=0x00100000000a1a75
- (id)init;	// IMP=0x00100000000a1a57
- (id)dictValueForProperty:(id)arg1;	// IMP=0x00100000000a24b1
- (id)arrayValueForProperty:(id)arg1;	// IMP=0x00100000000a245a
- (id)urlValueForProperty:(id)arg1;	// IMP=0x00100000000a2403
- (id)uuidValueForProperty:(id)arg1;	// IMP=0x00100000000a23ac
- (id)stringValueForProperty:(id)arg1;	// IMP=0x00100000000a2355
- (id)numberValueForProperty:(id)arg1;	// IMP=0x00100000000a22fe
- (long long)integerValueForProperty:(id)arg1;	// IMP=0x00100000000a22ba
- (id)dateValueForProperty:(id)arg1;	// IMP=0x00100000000a2263
- (_Bool)boolValueForProperty:(id)arg1;	// IMP=0x00100000000a221f

@end

