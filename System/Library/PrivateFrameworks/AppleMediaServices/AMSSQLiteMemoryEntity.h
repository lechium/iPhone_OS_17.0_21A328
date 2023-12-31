//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSSQLiteMemoryEntity : NSObject
{
    long long _databaseID;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
    NSMutableDictionary *_externalPropertyValues;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x0010000000393f70
+ (Class)databaseEntityClass;	// IMP=0x0010000000393f5f
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x00100000003987e0
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000003987cb
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x0010000000398663
- (void).cxx_destruct;	// IMP=0x000000000039445e
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003943c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000394280
- (unsigned long long)hash;	// IMP=0x000000000039426a
- (id)description;	// IMP=0x00000000003941e4
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x00000000003941ce
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000003941b8
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x000000000039413b
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;	// IMP=0x00000000003940b1
- (void)setValuesWithDictionary:(id)arg1;	// IMP=0x000000000039409b
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x000000000039401e
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000393f94
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x0000000000393f7e
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000393f78
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000393ed3
- (id)init;	// IMP=0x0000000000393e5e

@end

