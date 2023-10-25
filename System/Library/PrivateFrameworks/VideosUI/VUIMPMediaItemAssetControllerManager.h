//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetControllerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x006000000027282b
- (void).cxx_destruct;	// IMP=0x0000000000272be4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
- (id)mediaItemDownloadControllerWithMediaItem:(id)arg1;	// IMP=0x00000000002729e0
- (id)mediaItemCollectionAssetControllerWithMediaItemCollection:(id)arg1;	// IMP=0x000000000027295c
- (id)mediaItemAssetControllerWithMediaItem:(id)arg1;	// IMP=0x00000000002728d8
- (id)init;	// IMP=0x0000000000272880

@end
