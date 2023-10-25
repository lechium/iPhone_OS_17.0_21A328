//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVItem.h>

@class MPModelGenericObject, MPModelMediaClip;

__attribute__((visibility("hidden")))
@interface MPCModelMediaClipAVItem : MPAVItem
{
    MPModelGenericObject *_modelGenericObject;	// 112 = 0x70
    MPModelMediaClip *_mediaClip;	// 120 = 0x78
}

+ (id)requiredMediaClipProperties;	// IMP=0x0060000000161e0d
- (void).cxx_destruct;	// IMP=0x0000000000161d9f
@property(readonly, nonatomic) MPModelMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
- (_Bool)_isVideoAsset;	// IMP=0x0000000000161c2d
- (id)_currentPreferredStaticAsset;	// IMP=0x0000000000161682
- (void)_applyLoudnessInfo;	// IMP=0x000000000016147d
- (_Bool)_allowsCellularPlayback;	// IMP=0x000000000016140a
- (id)rtcReportingServiceIdentifier;	// IMP=0x00000000001613fd
- (CDUnknownBlockType)artworkCatalogBlock;	// IMP=0x0000000000161372
- (_Bool)allowsExternalPlayback;	// IMP=0x000000000016136a
- (_Bool)allowsAirPlayFromCloud;	// IMP=0x0000000000161362
- (_Bool)supportsRateChange;	// IMP=0x000000000016135a
- (void)reevaluateType;	// IMP=0x0000000000161319
- (_Bool)prefersSeekOverSkip;	// IMP=0x0000000000161311
- (id)modelGenericObject;	// IMP=0x0000000000161247
- (id)mainTitle;	// IMP=0x000000000016122a
- (void)loadAssetAndPlayerItem;	// IMP=0x0000000000160f87
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;	// IMP=0x0000000000160efd
- (_Bool)isStreamable;	// IMP=0x0000000000160ef5
- (_Bool)isAssetURLValid;	// IMP=0x0000000000160e5a
- (double)durationFromExternalMetadata;	// IMP=0x0000000000160ddc
- (id)description;	// IMP=0x0000000000160d2d
- (id)initWithMediaClip:(id)arg1;	// IMP=0x0000000000160cd0

@end
