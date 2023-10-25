//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (FCAdditions)
+ (id)fc_orderedSet:(CDUnknownBlockType)arg1;	// IMP=0x001000000024ba55
- (_Bool)fc_isEqualToOrderedSet:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x001000000024d384
- (id)fc_orderedSetByAddingObject:(id)arg1;	// IMP=0x001000000024d327
- (id)fc_orderedSetByCollectingObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000024d13b
- (id)fc_orderedSetByMinusingOrderedSet:(id)arg1;	// IMP=0x001000000024d0c3
- (id)fc_orderedSetWithObjectsAtIndexes:(id)arg1;	// IMP=0x001000000024d060
- (id)fc_orderedSetWithObjectsInRange:(struct _NSRange)arg1;	// IMP=0x001000000024d03b
- (id)fc_orderedSetOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000024cded
- (_Bool)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000024cca9
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000024cb45
- (id)fc_indexesOfObjectsInOrderedSet:(id)arg1;	// IMP=0x001000000024c997
- (id)fc_diffAgainstOrderedSet:(id)arg1;	// IMP=0x001000000024c2af
- (id)fc_diffAgainstOrderedSet:(id)arg1 withEqualityTest:(CDUnknownBlockType)arg2 identityValueProvider:(CDUnknownBlockType)arg3;	// IMP=0x001000000024bc41
- (id)fc_objectInSortedOrderedCollectionWithFeature:(id)arg1 usingFeatureProvider:(CDUnknownBlockType)arg2 comparator:(CDUnknownBlockType)arg3;	// IMP=0x001000000024bc2e
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x001000000024bc1b
- (_Bool)fc_isSortedUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x001000000024bc0e
- (void)fc_enumerateObjectsPairwiseUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000024bc01
- (id)fc_orderedSetByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000024baf1
@end
