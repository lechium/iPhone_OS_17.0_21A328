//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CuratedCollectionPlaceSummaryViewModel, GEOAppStoreAppClip, GEOLocation, MKPlaceCollectionMapItem, NSAttributedString, NSString;
@protocol GEOCollectionPublisherAttribution, GEOMapItemPhotoInfo;

@interface CuratedCollectionItemCellModel : NSObject
{
    CuratedCollectionPlaceSummaryViewModel *_placeSummaryModel;	// 8 = 0x8
    id <GEOCollectionPublisherAttribution> _attribution;	// 16 = 0x10
    _Bool _isItemInUserCollection;	// 24 = 0x18
    GEOLocation *_currentLocation;	// 32 = 0x20
    MKPlaceCollectionMapItem *_collectionItem;	// 40 = 0x28
    NSAttributedString *_itemDescription;	// 48 = 0x30
    GEOAppStoreAppClip *_appClip;	// 56 = 0x38
    id <GEOMapItemPhotoInfo> _photoInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000008c9090
@property(retain, nonatomic) id <GEOMapItemPhotoInfo> photoInfo; // @synthesize photoInfo=_photoInfo;
@property(readonly, nonatomic) GEOAppStoreAppClip *appClip; // @synthesize appClip=_appClip;
@property(readonly, nonatomic) NSAttributedString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly, nonatomic) MKPlaceCollectionMapItem *collectionItem; // @synthesize collectionItem=_collectionItem;
@property(nonatomic) _Bool isItemInUserCollection; // @synthesize isItemInUserCollection=_isItemInUserCollection;
@property(retain, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (id)_collectionItemImage;	// IMP=0x00100000008c8e76
@property(readonly, copy, nonatomic) NSString *imageAttribution;
- (void)cancelImageDownload;	// IMP=0x00100000008c8adb
- (void)loadImageForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000008c890b
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) CuratedCollectionPlaceSummaryViewModel *placeSummaryModel;
@property(readonly, nonatomic) NSAttributedString *fullReviewString;
- (id)initWithMKPlaceCollectionMapItem:(id)arg1 usingAttribution:(id)arg2 itemDescription:(id)arg3 itemInUserCollection:(_Bool)arg4 appClip:(id)arg5;	// IMP=0x00100000008c846f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

