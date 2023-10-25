//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSQLiteOrderingTerm, NSArray, NSDictionary, NSSet, NSSortDescriptor, NSString;

@protocol HDSQLiteEntitySchema <NSObject>
+ (NSArray *)allDatabaseColumnNames;
+ (Class)entityForProperty:(NSString *)arg1;
+ (void)enumerateColumnsWithBlock:(void (^)(_HDSQLiteEntityColumn *, _Bool *))arg1;
+ (_Bool)hasColumnWithName:(NSString *)arg1;
+ (NSString *)createTableSQL;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSString *)disambiguatedDatabaseTable;
+ (NSArray *)triggers;
+ (NSArray *)indices;
+ (NSArray *)primaryKeyColumns;
+ (NSDictionary *)foreignKeys;
+ (NSSet *)checkConstraints;
+ (NSArray *)uniquedColumns;
+ (NSSet *)joinClausesForProperty:(NSString *)arg1;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (Class)entityClassForEnumeration;
+ (NSArray *)privateSubEntities;
+ (HDSQLiteOrderingTerm *)orderingTermForSortDescriptor:(NSSortDescriptor *)arg1;
+ (_Bool)hasROWID;
+ (_Bool)isTemporary;
+ (NSArray *)tableAliases;
+ (NSString *)databaseTable;
+ (NSString *)databaseName;
@end
