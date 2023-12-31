//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSData, NSString, NSURL, PUEditableMediaProvider;
@protocol PUEditableAsset, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUEditableMediaProviderImageDataNode : PXRunNode
{
    int _requestID;	// 8 = 0x8
    _Bool _useEmbeddedPreview;	// 12 = 0xc
    NSData *_imageData;	// 16 = 0x10
    NSURL *_imageDataURL;	// 24 = 0x18
    NSString *_imageDataUTI;	// 32 = 0x20
    long long _imageExifOrientation;	// 40 = 0x28
    long long _version;	// 48 = 0x30
    id <PUEditableAsset> _asset;	// 56 = 0x38
    PUEditableMediaProvider *_mediaProvider;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001f6dd4
@property(readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) _Bool useEmbeddedPreview; // @synthesize useEmbeddedPreview=_useEmbeddedPreview;
@property(readonly, nonatomic) long long imageExifOrientation; // @synthesize imageExifOrientation=_imageExifOrientation;
@property(readonly, nonatomic) NSString *imageDataUTI; // @synthesize imageDataUTI=_imageDataUTI;
@property(readonly, nonatomic) NSURL *imageDataURL; // @synthesize imageDataURL=_imageDataURL;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void)_handleLoadedImageData:(id)arg1 imageUTI:(id)arg2 imageOrientation:(long long)arg3 info:(id)arg4;	// IMP=0x00000000001f6b5a
- (void)run;	// IMP=0x00000000001f69ae
- (void)didCancel;	// IMP=0x00000000001f695b
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3;	// IMP=0x00000000001f68a4

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

