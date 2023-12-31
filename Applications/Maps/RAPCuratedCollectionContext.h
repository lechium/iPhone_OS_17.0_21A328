//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceCollection, GEORPCuratedCollectionContext, NSArray, NSString;

@interface RAPCuratedCollectionContext : NSObject
{
    GEOPlaceCollection *_curatedCollection;	// 8 = 0x8
    NSArray *_placeCollectionMapItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000009b9f52
@property(retain, nonatomic) NSArray *placeCollectionMapItems; // @synthesize placeCollectionMapItems=_placeCollectionMapItems;
@property(retain, nonatomic) GEOPlaceCollection *curatedCollection; // @synthesize curatedCollection=_curatedCollection;
@property(readonly, nonatomic) GEORPCuratedCollectionContext *geoContext;
- (id)initWithCuratedCollection:(id)arg1 placeCollectionMapItems:(id)arg2;	// IMP=0x00100000009b986c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

