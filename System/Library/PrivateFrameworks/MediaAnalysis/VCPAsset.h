//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, NSURL, PHFetchResult, VCPFingerprint;

__attribute__((visibility("hidden")))
@interface VCPAsset : NSObject
{
}

+ (void)unimplementedExceptionForMethodName:(id)arg1;	// IMP=0x0080000000304270
- (id)typeDescription;	// IMP=0x00000000003043f3
@property(readonly, nonatomic) PHFetchResult *faces;
@property(readonly, nonatomic) NSDictionary *scenes;
@property(readonly, nonatomic) NSArray *allScenes;
@property(readonly, nonatomic) NSURL *mainFileURL;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) _Bool isMovie;
@property(readonly, nonatomic) _Bool isImage;
@property(readonly, nonatomic) VCPFingerprint *fingerprint;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1 orientation:(unsigned int *)arg2;	// IMP=0x00000000003045d7
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;	// IMP=0x00000000003045b3
@property(readonly, nonatomic) NSDictionary *exif;
@property(readonly, nonatomic) _Bool isSDOF;
@property(readonly, nonatomic) _Bool isHDR;
@property(readonly, nonatomic) _Bool isScreenshot;
@property(readonly, nonatomic) _Bool isLivePhoto;
@property(readonly, nonatomic) _Bool isPano;
@property(readonly, nonatomic) float originalPhotoOffsetSeconds;
@property(readonly, nonatomic) float photoOffsetSeconds;
@property(readonly, nonatomic) float exposureTimeSeconds;
@property(readonly, nonatomic) _Bool hadFlash;
- (struct CGSize)originalMovieSize;	// IMP=0x000000000030480d
- (id)originalMovie;	// IMP=0x00000000003047e9
- (id)streamedMovie;	// IMP=0x00000000003047e1
- (_Bool)isMovieResourceLocalAvailable;	// IMP=0x00000000003047bd
- (id)movie;	// IMP=0x0000000000304799
@property(readonly, nonatomic) float timelapseRate;
@property(readonly, nonatomic) CDStruct_e83c9415 slomoRange;
@property(readonly, nonatomic) float slowmoRate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool isTimelapse;
@property(readonly, nonatomic) _Bool isSlowmo;

@end
