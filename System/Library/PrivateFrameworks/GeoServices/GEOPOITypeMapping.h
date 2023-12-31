//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOResourceManager, GEOResourceManifestManager, NSDictionary, NSSet, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOPOITypeMapping : NSObject
{
    NSSet *_alwaysVisibleTypes;	// 8 = 0x8
    NSDictionary *_categoryToTypeMapping;	// 16 = 0x10
    NSDictionary *_typeToCategoryMapping;	// 24 = 0x18
    geo_isolater *_accessLock;	// 32 = 0x20
    GEOResourceManifestManager *_manifestManager;	// 40 = 0x28
    GEOResourceManager *_resourceManager;	// 48 = 0x30
}

+ (id)sharedMapping;	// IMP=0x0010000001413575
- (void).cxx_destruct;	// IMP=0x0000000001414e82
- (void)clearCachedValues;	// IMP=0x0000000001414de7
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x0000000001414dd5
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x0000000001414dc3
- (id)typeToCategoryMapping;	// IMP=0x0000000001414c88
- (id)categoryToTypeMapping;	// IMP=0x0000000001414b4d
- (id)alwaysVisibleTypes;	// IMP=0x00000000014149ed
- (_Bool)parseCategoryMappingJSON:(id)arg1 categoryToPOIType:(id *)arg2 POITypeToCategory:(id *)arg3;	// IMP=0x0000000001414393
- (id)parseVisiblePOITypesJSON:(id)arg1;	// IMP=0x0000000001414112
- (void)parsePOICategoriesJSON:(id)arg1;	// IMP=0x0000000001413d2f
- (void)loadPOICategoriesJSON;	// IMP=0x0000000001413a87
- (id)typesForPOICategories:(id)arg1;	// IMP=0x00000000014138a8
- (id)categoryForPOIType:(int)arg1;	// IMP=0x0000000001413823
- (_Bool)isAlwaysVisiblePOIType:(int)arg1;	// IMP=0x00000000014137aa
- (void)_tearDown;	// IMP=0x0000000001413775
- (void)dealloc;	// IMP=0x0000000001413737
- (id)initWithResourceManifestManager:(id)arg1 resourceManager:(id)arg2;	// IMP=0x0000000001413669
- (id)init;	// IMP=0x000000000141363f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

