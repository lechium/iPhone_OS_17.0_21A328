//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionThumbnailGenerator, LPLinkMetadata, NSString;

@interface CuratedCollectionLinkMetadataProvider
{
    LPLinkMetadata *_cachedMetadata;	// 32 = 0x20
    CollectionThumbnailGenerator *_thumbnailGenerator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000006c98d8
@property(retain, nonatomic) CollectionThumbnailGenerator *thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
@property(retain, nonatomic) LPLinkMetadata *cachedMetadata; // @synthesize cachedMetadata=_cachedMetadata;
- (id)_curatedCollectionSpecialization;	// IMP=0x00100000006c8e89
- (id)_publisherSpecialization;	// IMP=0x00100000006c8cab
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;	// IMP=0x00100000006c8b01
- (id)initWithCuratedCollection:(id)arg1 refinedMapItems:(id)arg2;	// IMP=0x00100000006c8a60

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

