//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapItem, NSObject;
@protocol GEOTransitLine;

@interface CollectionSaveSession
{
}

- (void)applyToCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000a24096
- (_Bool)canRenameSelectedObjectInCollection:(id)arg1;	// IMP=0x0010000000a23fca
@property(readonly, nonatomic) NSObject<GEOTransitLine> *transitLine;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000a23e54

@end

