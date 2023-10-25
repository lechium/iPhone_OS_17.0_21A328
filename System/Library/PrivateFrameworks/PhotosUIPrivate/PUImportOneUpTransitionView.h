//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PUImportOneUpCellBadgeView, PXImportMediaProvider, UIImage;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionView
{
    UIImage *_startingImage;	// 8 = 0x8
    PXImportMediaProvider *_mediaProvider;	// 16 = 0x10
    PUImportOneUpCellBadgeView *_badgeView;	// 24 = 0x18
    NSArray *_badgeViewOffsetConstraints;	// 32 = 0x20
    double _initialPhotoViewAlpha;	// 40 = 0x28
    double _targetPhotoViewAlpha;	// 48 = 0x30
    struct CGRect _initialFrame;	// 56 = 0x38
    struct CGRect _targetFrame;	// 88 = 0x58
}

+ (double)interpolatedValueBetweenInitialValue:(double)arg1 andFinalValue:(double)arg2 atProgress:(double)arg3;	// IMP=0x0010000000293e21
- (void).cxx_destruct;	// IMP=0x0000000000293cc9
@property(nonatomic) double targetPhotoViewAlpha; // @synthesize targetPhotoViewAlpha=_targetPhotoViewAlpha;
@property(nonatomic) double initialPhotoViewAlpha; // @synthesize initialPhotoViewAlpha=_initialPhotoViewAlpha;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(readonly, nonatomic) NSArray *badgeViewOffsetConstraints; // @synthesize badgeViewOffsetConstraints=_badgeViewOffsetConstraints;
@property(readonly, nonatomic) PUImportOneUpCellBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) PXImportMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) UIImage *startingImage; // @synthesize startingImage=_startingImage;
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;	// IMP=0x0000000000293b4d
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000293a6a
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;	// IMP=0x0000000000293a58
- (void)setPhotoViewInitialAlpha:(double)arg1 targetAlpha:(double)arg2;	// IMP=0x00000000002939a7
- (void)setInitialFrame:(struct CGRect)arg1 targetFrame:(struct CGRect)arg2;	// IMP=0x00000000002938de
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000293806
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000029373d
- (void)updateAlphaIfNeeded;	// IMP=0x000000000029362b
- (void)updateConstraints;	// IMP=0x000000000029334b
- (double)currentProgress;	// IMP=0x000000000029312f
- (void)updateBadgeView;	// IMP=0x00000000002930b1
- (void *)contextForObservingViewModelChanges;	// IMP=0x00000000002930a4
- (id)initWithImportItem:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3;	// IMP=0x0000000000292ca3

@end
