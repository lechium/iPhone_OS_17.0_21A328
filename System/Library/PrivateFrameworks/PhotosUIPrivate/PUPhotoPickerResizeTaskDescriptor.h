//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerResizeTaskDescriptor : NSObject
{
    NSCountedSet *_cachedAssetsIdentifiersForEstimation;	// 8 = 0x8
    unsigned long long _cachedSizeEstimate;	// 16 = 0x10
    NSString *_localizedDescription;	// 24 = 0x18
    struct CGSize _targetSize;	// 32 = 0x20
}

+ (id)orderedDefaultDescriptors;	// IMP=0x00100000004357e4
+ (id)defaultActualSizeDescriptor;	// IMP=0x0010000000435783
+ (id)defaultSmallDescriptor;	// IMP=0x0010000000435722
+ (id)defaultMediumDescriptor;	// IMP=0x00100000004356c1
+ (id)defaultLargeDescriptor;	// IMP=0x0010000000435660
- (void).cxx_destruct;	// IMP=0x0000000000435638
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000435613
- (unsigned long long)hash;	// IMP=0x00000000004355fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043556a
- (_Bool)appliesToAsset:(id)arg1;	// IMP=0x00000000004354ee
- (unsigned long long)estimatedSizeForAssets:(id)arg1;	// IMP=0x0000000000435175
- (id)formattedSizeForAssets:(id)arg1;	// IMP=0x0000000000435141
- (id)localizedDescriptionForAssets:(id)arg1;	// IMP=0x00000000004350be
- (id)initWithLocalizedDescription:(id)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x000000000043502b

@end

