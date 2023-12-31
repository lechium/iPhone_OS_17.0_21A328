//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFCloudKitArchivingUtilities, PFCloudKitStoreComparisonCache;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreComparer : NSObject
{
    _Bool _onlyCompareSharedZones;	// 8 = 0x8
    PFCloudKitStoreComparisonCache *_cache;	// 16 = 0x10
    PFCloudKitArchivingUtilities *_archivingUtilities;	// 24 = 0x18
}

+ (id)trimExcessiveValuesForLog:(id)arg1;	// IMP=0x00600000002d807f
@property(nonatomic) _Bool onlyCompareSharedZones; // @synthesize onlyCompareSharedZones=_onlyCompareSharedZones;
@property(readonly, nonatomic) PFCloudKitArchivingUtilities *archivingUtilities; // @synthesize archivingUtilities=_archivingUtilities;
@property(readonly, nonatomic) PFCloudKitStoreComparisonCache *cache; // @synthesize cache=_cache;
- (_Bool)ensureMirroredRelationshipsMatchForStore:(id)arg1 otherStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d76b3
- (_Bool)ensureMoveReceiptsMatchForStore:(id)arg1 otherStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d6470
- (_Bool)compareCloudKitMetadataOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d630d
- (_Bool)ensureStoresAgreeOnCloudKitTables:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002d5b63
- (id)getRecordIDsForRelationship:(id)arg1 onObject:(id)arg2;	// IMP=0x00000000002d55e4
- (_Bool)compareRelationshipsOfRecordID:(id)arg1 withStoreObject:(id)arg2 andOtherObject:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002d4a45
- (_Bool)validateValue:(id)arg1 againstOtherValue:(id)arg2 forIgnoredAttribute:(id)arg3;	// IMP=0x00000000002d4a24
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2 forAttribute:(id)arg3;	// IMP=0x00000000002d434f
- (_Bool)compareAttributesOnObject:(id)arg1 toObject:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d3a98
- (_Bool)compareObjectsInStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d2dc7
- (_Bool)compareDatabaseScopeAndIdentityInStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d299c
- (_Bool)compareContentOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d226e
- (id)getObjectMatchingRecordID:(id)arg1 fromStore:(id)arg2 withManagedObjectContext:(id)arg3;	// IMP=0x00000000002d1eb5
- (_Bool)ensureContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002d1a8c
- (_Bool)ensureContentsMatch:(id *)arg1;	// IMP=0x00000000002d1a35
- (void)dealloc;	// IMP=0x00000000002d19eb
- (id)initWithStore:(id)arg1 otherStore:(id)arg2;	// IMP=0x00000000002d1967

@end

