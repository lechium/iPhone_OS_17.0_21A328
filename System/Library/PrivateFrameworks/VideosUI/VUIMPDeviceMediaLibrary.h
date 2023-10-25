//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIDeviceMediaLibrary.h"

@class NSMutableDictionary, VUIMPMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary
{
    _Bool _updatingRentalPlaybackStartDates;	// 8 = 0x8
    VUIMPMediaLibrary *_mediaLibrary;	// 16 = 0x10
    NSMutableDictionary *_rentalPlaybackStartDatesToSave;	// 24 = 0x18
}

+ (_Bool)_isInitialUpdateInProgress;	// IMP=0x0060000000292f68
+ (_Bool)_isUpdateInProgress;	// IMP=0x0060000000292f1d
- (void).cxx_destruct;	// IMP=0x000000000029301d
@property(nonatomic) _Bool updatingRentalPlaybackStartDates; // @synthesize updatingRentalPlaybackStartDates=_updatingRentalPlaybackStartDates;
@property(retain, nonatomic) NSMutableDictionary *rentalPlaybackStartDatesToSave; // @synthesize rentalPlaybackStartDatesToSave=_rentalPlaybackStartDatesToSave;
@property(retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000000292ed9
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000000292e95
- (void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg1;	// IMP=0x0000000000292c14
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x0000000000292c02
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x0000000000292b64
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x0000000000292aea
- (id)_imageLoaderIdentifier;	// IMP=0x0000000000292a9a
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002929fe
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000292962
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002928e8
- (id)title;	// IMP=0x0000000000292898
- (void)updateFromCloudWithReason:(long long)arg1;	// IMP=0x00000000002926f0
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002925f5
- (_Bool)isInitialUpdateInProgress;	// IMP=0x00000000002925db
- (_Bool)isUpdating;	// IMP=0x00000000002925c1
- (void)dealloc;	// IMP=0x000000000029254c
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;	// IMP=0x00000000002924dd
- (id)initWithManager:(id)arg1;	// IMP=0x0000000000292256

@end
