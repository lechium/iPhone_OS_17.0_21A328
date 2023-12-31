//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMediaProvider.h>

@class PUMediaProvider;

__attribute__((visibility("hidden")))
@interface PUWrappingPXMediaProvider : PXMediaProvider
{
    PUMediaProvider *_wrappedMediaProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000023e7aa
@property(readonly, nonatomic) PUMediaProvider *wrappedMediaProvider; // @synthesize wrappedMediaProvider=_wrappedMediaProvider;
- (void)cancelImageRequest:(long long)arg1;	// IMP=0x000000000023e74e
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000023e611
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023e4ee
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023e452
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023e32f
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023e20c
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023e0e9
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000023dfac
- (id)initWithWrappedMediaProvider:(id)arg1;	// IMP=0x000000000023df3e

@end

