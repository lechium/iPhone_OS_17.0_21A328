//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (LPExtras)
@property(nonatomic, setter=_lp_setCoderType:) unsigned long long _lp_coderType;
- (id)_lp_strictlyDecodeColorForKey:(id)arg1;	// IMP=0x00300000000bfb11
- (void)_lp_encodeColorIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000000bf90b
- (void)_lp_encodeURLIfNotNilOrLocalFile:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000000bf861
- (void)_lp_encodeArrayIfNotEmpty:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000000bf7d1
- (void)_lp_encodeStringIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000000bf6ca
- (void)_lp_encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000000bf64a
- (id)_lp_strictlyDecodeDictionaryOfObjectsWithKeysOfClass:(Class)arg1 andObjectsOfClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x00300000000bf3c9
- (id)_lp_strictlyDecodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000000befa4
- (id)_lp_strictlyDecodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00300000000bed1d
- (id)_lp_strictlyDecodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00300000000bead1
- (id)_lp_strictlyDecodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00300000000be9d5
- (id)_lp_strictlyDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000000be78f
- (id)_lp_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00300000000be6a2
- (id)_lp_strictlyDecodeLPVideoForKey:(id)arg1;	// IMP=0x00300000000be5da
- (id)_lp_strictlyDecodeArrayOfLPImagesForKey:(id)arg1;	// IMP=0x00300000000be512
- (id)_lp_strictlyDecodeLPImageForKey:(id)arg1;	// IMP=0x00300000000be44a
- (id)_lp_strictlyDecodeArrayOfLPARAssetsForKey:(id)arg1;	// IMP=0x00300000000be382
- (id)_lp_strictlyDecodeLPARAssetForKey:(id)arg1;	// IMP=0x00300000000be2ba
- (id)_lp_strictlyDecodeNSAttributedStringForKey:(id)arg1;	// IMP=0x00300000000be1f2
- (id)_lp_strictlyDecodeNSStringForKey:(id)arg1;	// IMP=0x00300000000be12a
- (id)_lp_strictlyDecodeNSDataForKey:(id)arg1;	// IMP=0x00300000000be062
@end

