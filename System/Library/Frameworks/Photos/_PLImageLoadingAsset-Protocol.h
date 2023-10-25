//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>
#import <Photos/_PLThumbnailLoadingAsset-Protocol.h>

@class NSString, PLManagedAsset, PLPhotoLibrary;

@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset, NSObject>
- (_Bool)isOriginalSRGB;
- (void)generateLargeThumbnailFileIfNecessary;
- (_Bool)isTimelapsePlaceholder;
- (PLManagedAsset *)managedAssetForPhotoLibrary:(PLPhotoLibrary *)arg1;
- (double)duration;
- (_Bool)isCloudPlaceholder;
- (_Bool)isCloudPhotoLibraryAsset;
- (long long)cloudSharedAssetPlaceholderKind;
- (_Bool)isCloudSharedAsset;
- (_Bool)isInFlight;
- (NSString *)pathForAdjustmentDataFile;
- (NSString *)pathForAdjustmentFile;
- (NSString *)pathForOriginalFile;
- (NSString *)originalFilename;
- (int)orientation;
- (_Bool)isStreamedVideo;
- (_Bool)isPartOfBurst;
- (_Bool)isRAW;
- (_Bool)isPrimaryImageFormat;
- (_Bool)isJPEG;
- (_Bool)isLoopingVideo;
- (_Bool)isVideo;
- (NSString *)uniformTypeIdentifier;
- (struct CGSize)originalImageSize;
- (struct CGSize)imageSize;
- (NSString *)thumbnailIdentifier;
- (short)kindSubtype;
- (short)kind;
- (short)savedAssetType;
- (NSString *)uuid;
- (_Bool)hasAdjustments;
- (long long)originalImageOrientation;
@end
