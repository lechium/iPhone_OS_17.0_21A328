//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEODefaultPhotoInfoProvider : NSObject
{
    NSArray *_sortedPhotoInfos;	// 8 = 0x8
}

+ (id)sortedPhotoInfoFromPhotoVersions:(id)arg1;	// IMP=0x00100000013deb1b
- (void).cxx_destruct;	// IMP=0x00000000013df531
- (int)designatedURLType;	// IMP=0x00000000013df529
- (id)bestPhotoForSize:(struct CGSize)arg1 options:(id)arg2;	// IMP=0x00000000013df232
- (id)largestPhoto;	// IMP=0x00000000013df21c
- (double)sizeRatio;	// IMP=0x00000000013df17c
- (id)initWithPhotoContent:(id)arg1;	// IMP=0x00000000013def7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
