//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNCollectionUtils : NSObject
{
}

+ (id)generateArrayWithRangeFrom:(long long)arg1 step:(long long)arg2 count:(long long)arg3;	// IMP=0x00600000000689e9
+ (id)zipPairsToArrayInCollection:(id)arg1 zip:(CDUnknownBlockType)arg2;	// IMP=0x0060000000068946
+ (id)toArrayKeepAllButFirstInCollection:(id)arg1;	// IMP=0x00600000000688e3
+ (id)toArrayKeepAllButLastInCollection:(id)arg1;	// IMP=0x006000000006882c
+ (id)lastItemsFromArraysInCollection:(id)arg1;	// IMP=0x006000000006870a
+ (long long)comparisonResultFromInt32:(int)arg1;	// IMP=0x006000000006863d
+ (id)shapeCollection:(id)arg1 shape:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000068595
+ (_Bool)validateSetEqualityBetweenCollection:(id)arg1 expected:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000068390
+ (_Bool)checkSetEqualityBetweenCollection:(id)arg1 expected:(id)arg2;	// IMP=0x00600000000681fb
+ (id)setFromCollection:(id)arg1;	// IMP=0x006000000006809c
+ (id)arrayFromCollection:(id)arg1;	// IMP=0x0060000000067fe6
+ (id)setArrayFromCollection:(id)arg1;	// IMP=0x0060000000067fcb
+ (id)partitionToArraysFromCollection:(id)arg1 memberCountPerPartition:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0060000000067f0d
+ (id)partitionToArraysFromCollection:(id)arg1 memberCountPerPartition:(unsigned long long)arg2;	// IMP=0x0060000000067c8a
+ (id)objectsFromArray:(id)arg1 atIndices:(id)arg2 error:(id *)arg3;	// IMP=0x00600000000679ab
+ (id)requiredObjectAtIndexNumber:(id)arg1 inArray:(id)arg2 error:(id *)arg3;	// IMP=0x00600000000678da
+ (id)optionalObjectAtIndexNumber:(id)arg1 inArray:(id)arg2 error:(id *)arg3;	// IMP=0x00600000000676eb
+ (id)maxNumberInCollection:(id)arg1;	// IMP=0x00600000000675e6
+ (id)maxInCollection:(id)arg1 compare:(CDUnknownBlockType)arg2;	// IMP=0x006000000006740b
+ (CDUnknownBlockType)iteratorForCollection:(id)arg1;	// IMP=0x0060000000067353
+ (id)reverseDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000671bb
+ (id)groupIntoArraysFromCollection:(id)arg1 usingKeyGenerator:(CDUnknownBlockType)arg2;	// IMP=0x0060000000066f7f
+ (id)zipValuesFromFirstDictionary:(id)arg1 secondDictionary:(id)arg2 zip:(CDUnknownBlockType)arg3;	// IMP=0x0060000000066c0d
+ (id)zipValuesFromFirstDictionary:(id)arg1 secondDictionary:(id)arg2 keyedZip:(CDUnknownBlockType)arg3;	// IMP=0x0060000000066b70
+ (id)zipValuesFromFirstDictionary:(id)arg1 secondDictionary:(id)arg2 zip:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0060000000066a74
+ (id)zipValuesFromFirstDictionary:(id)arg1 secondDictionary:(id)arg2 keyedZip:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00600000000669f9
+ (id)zipToArrayFromFirstCollection:(id)arg1 secondCollection:(id)arg2 zip:(CDUnknownBlockType)arg3;	// IMP=0x0060000000065bd6
+ (id)zipToArrayFromFirstCollection:(id)arg1 secondCollection:(id)arg2 zip:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0060000000065b02
+ (id)concatenateDictionaries:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000064f83
+ (id)toSetConcatenateCollections:(id)arg1;	// IMP=0x0060000000064f72
+ (id)toArrayConcatenateCollections:(id)arg1;	// IMP=0x0060000000064f61
+ (id)toSetArrayConcatenateCollections:(id)arg1;	// IMP=0x0060000000064f50
+ (id)mapcatToDictionaryFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000064e88
+ (id)mapcatToDictionaryFromCollection:(id)arg1 fallableTransform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000064e0f
+ (id)mapcatToSetFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x0060000000064852
+ (id)mapcatToSetFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000064773
+ (id)mapcatToArrayFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x006000000006459e
+ (id)mapcatToArrayFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000064579
+ (void)applyToEachInCollection:(id)arg1 apply:(CDUnknownBlockType)arg2;	// IMP=0x006000000006442d
+ (_Bool)applyToEachInCollection:(id)arg1 apply:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x006000000006431f
+ (id)mapToSetFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x0060000000063fe5
+ (id)mapToSetFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000063f45
+ (id)mapToArrayFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x0060000000063de3
+ (id)mapToArrayFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000063dd2
+ (id)mapToSetArrayFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x0060000000063d5c
+ (id)mapToSetArrayFromCollection:(id)arg1 transform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000063cdb
+ (id)uniqueMatchInCollection:(id)arg1 satisfyingPredicate:(CDUnknownBlockType)arg2;	// IMP=0x0060000000063737
+ (id)firstInCollection:(id)arg1 satisfyingPredicate:(CDUnknownBlockType)arg2;	// IMP=0x00600000000636a5
+ (_Bool)allInCollection:(id)arg1 satisfyPredicate:(CDUnknownBlockType)arg2;	// IMP=0x006000000006361b
+ (_Bool)anyInCollection:(id)arg1 satisfyPredicate:(CDUnknownBlockType)arg2;	// IMP=0x0060000000063501
+ (id)reduceCollection:(id)arg1 from:(id)arg2 reducer:(CDUnknownBlockType)arg3;	// IMP=0x0060000000063444
+ (id)reduceCollection:(id)arg1 from:(id)arg2 reducer:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0060000000063370
+ (id)filterToSetFromCollection:(id)arg1 removingObjects:(id)arg2;	// IMP=0x0060000000062c57
+ (id)filterToArrayFromCollection:(id)arg1 removingObjects:(id)arg2;	// IMP=0x0060000000062be5
+ (id)filterToSetFromCollection:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x0060000000062b1c
+ (id)filterToArrayFromCollection:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x0060000000062a0c
+ (id)filterKeyValuePairsInDictionary:(id)arg1 removingKeys:(id)arg2;	// IMP=0x0060000000062985
+ (id)filterKeyValuePairsInDictionary:(id)arg1 keepingKeys:(id)arg2;	// IMP=0x006000000006294e
+ (id)filterKeyValuePairsInDictionary:(id)arg1 withKeyValuePredicate:(CDUnknownBlockType)arg2;	// IMP=0x00600000000628bb
+ (void)applyToEachKeyValuePairInDictionary:(id)arg1 apply:(CDUnknownBlockType)arg2;	// IMP=0x0060000000062202
+ (_Bool)applyToEachKeyValuePairInDictionary:(id)arg1 apply:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000062157
+ (id)mapKeysInDictionary:(id)arg1 keyMappings:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000061a52
+ (id)mapKeysInDictionary:(id)arg1 transform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00600000000617b8
+ (id)mapKeysInDictionary:(id)arg1 fallableTransform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00600000000616b5
+ (id)mapKeysInDictionary:(id)arg1 pairTransform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00600000000616a4
+ (id)mapKeysInDictionary:(id)arg1 fallablePairTransform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0060000000061578
+ (id)mapValuesInDictionary:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x006000000005ff2b
+ (id)mapValuesInDictionary:(id)arg1 transform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x006000000005ff1a
+ (id)mapValuesInDictionary:(id)arg1 pairTransform:(CDUnknownBlockType)arg2;	// IMP=0x006000000005fea2
+ (id)mapValuesInDictionary:(id)arg1 pairTransform:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x006000000005fe91
+ (id)subtractSetArray:(id)arg1 fromSetArray:(id)arg2;	// IMP=0x006000000005f2b4
- (void).cxx_destruct;	// IMP=0x0000000000068a75
- (id)init;	// IMP=0x0000000000068a31

@end

