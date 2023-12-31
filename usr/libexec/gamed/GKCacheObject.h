//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
{
}

+ (id)attributesDescriptionsForAttributesWithKeys:(id)arg1;	// IMP=0x004000000011fc4f
+ (id)uniqueObjectIDLookupWithContext:(id)arg1;	// IMP=0x001000000011fab1
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x001000000011f990
+ (id)uniqueAttributeName;	// IMP=0x001000000011f86f
+ (void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000011f45f
+ (id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000011f081
+ (unsigned long long)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000011ee3f
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000011ebf3
+ (id)allObjectsInContext:(id)arg1;	// IMP=0x001000000011ebdc
+ (id)fetchSortDescriptors;	// IMP=0x001000000011ebd4
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x001000000011ebcc
+ (id)fetchRequestForContext:(id)arg1;	// IMP=0x001000000011e9ac
+ (id)entityInManagedObjectContext:(id)arg1;	// IMP=0x001000000011e303
+ (id)entityName;	// IMP=0x001000000011e1ea
- (void)invalidate;	// IMP=0x002000000011f869
- (_Bool)isValid;	// IMP=0x001000000011f861
- (id)initWithManagedObjectContext:(id)arg1;	// IMP=0x001000000011e689
- (id)internalRepresentation;	// IMP=0x001000000011e1e2
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x001000000011e05c
- (_Bool)hasImages;	// IMP=0x0010000000121286
- (void)clearImages;	// IMP=0x0010000000120ede
- (void)deleteCachedImage:(id)arg1;	// IMP=0x0010000000120a21
- (id)imageURLDictionary;	// IMP=0x0010000000120535
- (id)updateImagesWithImageURLs:(id)arg1;	// IMP=0x001000000011ff91
- (id)imageCacheKeyPathsByKey;	// IMP=0x001000000011fdc0

@end

