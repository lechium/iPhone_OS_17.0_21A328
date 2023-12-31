//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLBezierPath, CRLCanvasInfoGeometry, CRLMaskInfo, MISSING_TYPE, NSArray, _TtC8Freeform8CRLAsset;

@interface _TtC8Freeform12CRLImageItem
{
    MISSING_TYPE *_imageAssetAsData;	// 1651076143 = 0x62696c2f
    MISSING_TYPE *;	// 2036608561 = 0x79642e31
    MISSING_TYPE *_maskInfo;	// 0 = 0x0
}

+ (void)adjustIncomingWithNewImageGeometry:(id)arg1 newMaskGeometry:(id)arg2 newImageData:(id)arg3 targetImageGeometry:(id)arg4 targetMaskGeometry:(id)arg5 assetOwner:(id)arg6;	// IMP=0x0040000000a115a0
- (void).cxx_destruct;	// IMP=0x0020000000a15510
@property(nonatomic, readonly) NSArray *stringContentForSearch;
@property(nonatomic, readonly) double viewScaleToUseWhenRasterizingSingleBoardItemForCopy;
@property(nonatomic, readonly) _Bool placeHolderDataNeedsDownload;
@property(nonatomic, readonly) struct CGPoint centerForReplacingWithNewItem;
- (void)updateGeometryToReplaceBoardItem:(id)arg1;	// IMP=0x0010000000a12130
- (id)maskInfoForCornerRadius:(float)arg1;	// IMP=0x0010000000a11be0
- (id)commandToSetRoundedCornersEnabled:(_Bool)arg1;	// IMP=0x0010000000a118c0
@property(nonatomic, readonly) float roundedCornerAmount;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize)arg1 board:(id)arg2;	// IMP=0x0010000000a11530
@property(nonatomic, readonly) Class editorClass;
@property(nonatomic, readonly) Class repClass;
@property(nonatomic, readonly) Class layoutClass;
@property(nonatomic, readonly) _Bool isShareable;
@property(nonatomic, readonly) _Bool isPreviewable;
@property(nonatomic, readonly) _Bool isSelectable;
- (void)takePropertiesFromReplacedBoardItem:(id)arg1;	// IMP=0x0010000000a11160
@property(nonatomic, readonly) _Bool canAspectRatioLockBeChangedByUser;
@property(nonatomic, readonly) _Bool allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (_Bool)isPDF;	// IMP=0x0010000000a0fa90
@property(nonatomic, readonly) CRLCanvasInfoGeometry *geometryWithMask;
- (_Bool)maskMatchesImageGeometryWithIgnoreRoundedCorners:(_Bool)arg1;	// IMP=0x0010000000a0f910
- (id)commandToResetMask;	// IMP=0x0010000000a0f6d0
@property(nonatomic, readonly) _Bool shouldDisplayAsSpatial;
@property(nonatomic, readonly) _Bool isOriginalAspectRatio;
@property(nonatomic, readonly) _Bool isSpatial;
@property(nonatomic) _Bool isBackgroundRemoved;
@property(nonatomic, readonly) _Bool maskCanBeReset;
- (id)defaultMaskInfo;	// IMP=0x0010000000a0e8d0
@property(nonatomic, retain) CRLMaskInfo *maskInfo;
@property(nonatomic, readonly) CRLBezierPath *tracedPath;
- (void)setAssetMediaWithMedia:(id)arg1 thumbnailData:(id)arg2;	// IMP=0x0010000000a0e330
@property(nonatomic, readonly) struct CGSize mediaRawPixelSize;
@property(nonatomic, readonly) _TtC8Freeform8CRLAsset *thumbnailAssetPayload;
@property(nonatomic, retain) _TtC8Freeform8CRLAsset *_thumbnailAssetAsData; // @synthesize _thumbnailAssetAsData;
@property(nonatomic, readonly) _TtC8Freeform8CRLAsset *imageAssetPayload;
@property(nonatomic, retain) _TtC8Freeform8CRLAsset *_imageAssetAsData; // @synthesize _imageAssetAsData;
- (void)crl_onBoard:(id)arg1 moveItemToPosition:(struct CGPoint)arg2 size:(struct CGSize)arg3;	// IMP=0x0010000000543538

@end

