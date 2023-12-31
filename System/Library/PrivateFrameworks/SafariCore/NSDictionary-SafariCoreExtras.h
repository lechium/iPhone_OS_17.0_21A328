//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSString;

@interface NSDictionary (SafariCoreExtras)
+ (id)safari_dictionaryWithObjectsInFastEnumerationCollection:(id)arg1 groupedUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000052df8
+ (id)safari_dictionaryWithJSONOrPropertyListData:(id)arg1;	// IMP=0x0020000000052d81
+ (id)safari_dictionaryWithJSONData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0020000000052d11
+ (id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0020000000052c9e
+ (id)safari_dictionaryWithPropertyListData:(id)arg1;	// IMP=0x0020000000052c8a
- (id)safari_valueOfEntryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000005310d
- (id)safari_mutableDeepCopy;	// IMP=0x00100000000530a1
- (_Bool)safari_containsObject:(id)arg1;	// IMP=0x0010000000052b8f
@property(readonly, copy, nonatomic) NSDictionary *safari_dictionaryByRemovingNullObjects;
- (id)safari_diffWithDictionary:(id)arg1;	// IMP=0x0010000000052935
- (id)_safari_sortedTupleArray;	// IMP=0x00100000000526c8
- (id)safari_mapAndFilterKeysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052539
- (id)safari_mapAndFilterKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000523a7
- (id)safari_mapTableForKey:(id)arg1;	// IMP=0x0010000000052350
@property(readonly, copy, nonatomic) NSString *safari_jsonRepresentation;
@property(readonly, copy, nonatomic) NSDictionary *safari_dictionaryWithLowercaseKeys;
- (id)safari_setValuesFromDictionary:(id)arg1;	// IMP=0x0010000000051e4f
- (id)safari_dictionaryByMergingWithDictionary:(id)arg1;	// IMP=0x0010000000051bef
- (id)safari_userActivityForKey:(id)arg1;	// IMP=0x0010000000051b98
- (id)safari_setForKey:(id)arg1;	// IMP=0x0010000000051b41
- (id)safari_UUIDForKey:(id)arg1;	// IMP=0x0010000000051aea
- (id)safari_URLForKey:(id)arg1;	// IMP=0x0010000000051a93
- (id)safari_dictionaryForKey:(id)arg1;	// IMP=0x0010000000051a3c
- (id)safari_arrayContainingObjectsOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x0010000000051977
- (id)safari_mutableArrayForKey:(id)arg1;	// IMP=0x0010000000051920
- (id)safari_arrayForKey:(id)arg1;	// IMP=0x00100000000518c9
- (id)safari_dateForKey:(id)arg1;	// IMP=0x0010000000051872
- (id)safari_dataForKey:(id)arg1;	// IMP=0x001000000005181b
- (id)safari_stringForKey:(id)arg1 returningNilIfEmpty:(_Bool)arg2;	// IMP=0x00100000000517bf
- (id)safari_numberForKey:(id)arg1;	// IMP=0x0010000000051768
- (id)safari_stringForKey:(id)arg1;	// IMP=0x0010000000051711
- (_Bool)safari_boolForKey:(id)arg1;	// IMP=0x00100000000516cd
@end

