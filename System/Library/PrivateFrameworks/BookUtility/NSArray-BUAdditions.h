//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (BUAdditions)
- (id)bu_prettyDescription;	// IMP=0x006000000002bb85
- (id)bu_dictionaryUsingPropertyAsKey:(id)arg1;	// IMP=0x006000000002b959
- (id)bu_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x006000000002b8ae
- (id)bu_arrayByRemovingItemsWithDuplicateValuesForKey:(id)arg1;	// IMP=0x006000000002b695
- (id)bu_arrayByRemovingDuplicates;	// IMP=0x006000000002b63b
- (id)bu_arrayByInvokingBlock:(CDUnknownBlockType)arg1;	// IMP=0x006000000002b4e6
- (id)bu_arrayByRemovingNSNulls;	// IMP=0x006000000002b4d2
- (id)bu_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;	// IMP=0x006000000002b39b
- (CDUnknownBlockType)bu_sortDescriptorComparator;	// IMP=0x006000000002b1a8
- (id)bu_arrayOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x006000000002b149
- (id)bu_objectsMatching:(CDUnknownBlockType)arg1;	// IMP=0x006000000002af82
- (_Bool)bu_containsLocalizedStringCaseInsensitive:(id)arg1;	// IMP=0x006000000002ae26
- (_Bool)bu_containsStringCaseInsensitive:(id)arg1;	// IMP=0x006000000002acca
- (id)bu_reversedArray;	// IMP=0x006000000002ab52
- (long long)bu_indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x006000000002a97f
@end

