//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVURLAsset, NSData, NSString, PHAdjustmentData;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSnapshot : NSObject
{
    long long _workImageVersion;	// 8 = 0x8
    PHAdjustmentData *_adjustmentData;	// 16 = 0x10
    NSData *_imageData;	// 24 = 0x18
    NSData *_baseImageData;	// 32 = 0x20
    AVURLAsset *_videoComplement;	// 40 = 0x28
    AVURLAsset *_baseVideoComplement;	// 48 = 0x30
    NSString *_imageUTI;	// 56 = 0x38
}

+ (void)captureSnapshotForAsset:(id)arg1 mediaProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00600000003dddae
- (void).cxx_destruct;	// IMP=0x00000000003ddd5a
@property(copy, nonatomic, setter=_setImageUTI:) NSString *imageUTI; // @synthesize imageUTI=_imageUTI;
@property(retain, nonatomic, setter=_setBaseVideoComplement:) AVURLAsset *baseVideoComplement; // @synthesize baseVideoComplement=_baseVideoComplement;
@property(retain, nonatomic, setter=_setVideoComplement:) AVURLAsset *videoComplement; // @synthesize videoComplement=_videoComplement;
@property(retain, nonatomic, setter=_setBaseImageData:) NSData *baseImageData; // @synthesize baseImageData=_baseImageData;
@property(retain, nonatomic, setter=_setImageData:) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic, setter=_setAdjustmentData:) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(nonatomic, setter=_setWorkImageVersion:) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;
- (void)_copySourceData:(id)arg1 destinationData:(out id *)arg2 destinationURL:(out id *)arg3;	// IMP=0x00000000003ddb13
- (id)_copyDataAtURL:(id)arg1;	// IMP=0x00000000003dda5c
- (id)_copyData:(id)arg1;	// IMP=0x00000000003dda1b
- (id)_copyAsset:(id)arg1;	// IMP=0x00000000003dd994
- (id)init;	// IMP=0x00000000003dd89f

@end
