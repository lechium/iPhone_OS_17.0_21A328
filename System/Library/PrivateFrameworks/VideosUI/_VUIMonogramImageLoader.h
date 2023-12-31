//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _VUIMonogramImageLoader : NSObject
{
    NSDictionary *_generatorByType;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0010000000095513
- (void).cxx_destruct;	// IMP=0x0000000000095d2f
- (id)_imageLoadError;	// IMP=0x0000000000095d02
- (void)cancelLoad:(id)arg1;	// IMP=0x0000000000095c57
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000095887
- (id)URLForObject:(id)arg1;	// IMP=0x00000000000957e9
- (id)imageKeyForObject:(id)arg1;	// IMP=0x00000000000956eb
- (id)init;	// IMP=0x0000000000095568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

