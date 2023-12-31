//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaLibrary.h"

@class MPMediaLibrary, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaLibrary : VUIMediaLibrary
{
    unsigned long long _connectionState;	// 8 = 0x8
    MPMediaLibrary *_mediaLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 24 = 0x18
    NSOperationQueue *_serialOperationQueue;	// 32 = 0x20
}

+ (unsigned long long)_connectionStateFromMPMediaLibraryStatus:(long long)arg1;	// IMP=0x0060000000178c92
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000178a2b
+ (void)initialize;	// IMP=0x00600000001772d4
- (void).cxx_destruct;	// IMP=0x0000000000178e35
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_enqueueProcessingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000178ca6
- (void)_handleMediaLibraryStatusDidChangeNotification:(id)arg1;	// IMP=0x0000000000178b0f
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x0000000000178afd
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x00000000001789c2
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x0000000000178906
- (id)_imageLoaderIdentifier;	// IMP=0x00000000001788b6
- (_Bool)hasImageCache;	// IMP=0x00000000001788ae
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001787ba
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000178324
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000177e4f
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001778ea
@property(nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
- (id)title;	// IMP=0x00000000001777d3
- (void)dealloc;	// IMP=0x000000000017775e
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;	// IMP=0x00000000001776ef
- (id)initWithMPMediaLibrary:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;	// IMP=0x0000000000177314

@end

