//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _LTLanguageDetectorAssetInfo : NSObject
{
    NSURL *_assetUrl;	// 8 = 0x8
    NSURL *_featureCombinationConfigUrl;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003290a
- (id)featureCombinationConfigUrl;	// IMP=0x00000000000328fc
- (id)languageDetectorModelURL;	// IMP=0x00000000000328ee
- (id)initWithAssetUrl:(id)arg1 featureCombinationAssetUrl:(id)arg2;	// IMP=0x0000000000032845

@end
