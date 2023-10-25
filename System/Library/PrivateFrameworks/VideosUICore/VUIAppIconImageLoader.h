//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface VUIAppIconImageLoader : NSObject
{
    NSOperationQueue *_imageLoaderQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0010000000002c2c
- (void).cxx_destruct;	// IMP=0x00000000000031aa
- (id)_createApplicationIconForIdentifier:(id)arg1;	// IMP=0x00000000000030d8
- (void)cancelLoad:(id)arg1;	// IMP=0x000000000000308c
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000002dee
- (id)imageKeyForObject:(id)arg1;	// IMP=0x0000000000002d84
- (id)URLForObject:(id)arg1;	// IMP=0x0000000000002cd7
- (id)init;	// IMP=0x0000000000002c81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
