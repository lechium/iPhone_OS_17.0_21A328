//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@class MediaSocialPostEntity, NSArray;

@interface DirectUploadEntity : SSSQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x00400000001172b7
+ (id)newEntityValuesWithMediaSocialAttachment:(id)arg1;	// IMP=0x0010000000116287
- (_Bool)deleteFromDatabase;	// IMP=0x00200000001172c4
- (void)setProcessingWithResponse:(id)arg1;	// IMP=0x001000000011713c
- (long long)setFailedWithError:(id)arg1;	// IMP=0x0010000000116f12
- (void)resetStatusProperties;	// IMP=0x0010000000116e45
@property(readonly, nonatomic) MediaSocialPostEntity *postEntity;
- (id)insertEntitiesForArtists:(id)arg1 withProperties:(id)arg2;	// IMP=0x0010000000116afc
- (void)deleteAssetFile;	// IMP=0x001000000011680d
@property(readonly, nonatomic) NSArray *artists;

@end

