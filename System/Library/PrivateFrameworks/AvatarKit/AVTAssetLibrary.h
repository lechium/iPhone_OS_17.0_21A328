//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVTAssetLibrary : NSObject
{
    NSMutableArray *_assets[38];	// 8 = 0x8
    NSMutableDictionary *_assetsByName[38];	// 312 = 0x138
}

+ (id)sharedAssetLibrary;	// IMP=0x00600000000147c6
- (void).cxx_destruct;	// IMP=0x0000000000014869
- (id)assetWithType:(long long)arg1 identifier:(id)arg2;	// IMP=0x000000000001482f
- (void)reload;	// IMP=0x00000000000145a4

@end
