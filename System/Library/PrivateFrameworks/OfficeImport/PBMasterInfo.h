//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PBMasterInfo : NSObject
{
    PDSlideMaster *mSlideMaster;	// 8 = 0x8
    NSMutableArray *mTgtSlideLayoutArray;	// 16 = 0x10
    unsigned int mMainPbRef;	// 24 = 0x18
    unsigned int mTitlePbRef;	// 28 = 0x1c
    NSDictionary *mLayoutMap;	// 32 = 0x20
    void *mSrcTextStyling;	// 40 = 0x28
    unsigned int mXmlMainMasterId;	// 48 = 0x30
    NSMutableDictionary *mXmlLayoutMap;	// 56 = 0x38
    _Bool mUseXmlBlobs;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000434337
@property(nonatomic) _Bool useXmlBlobs; // @synthesize useXmlBlobs=mUseXmlBlobs;
@property(nonatomic) unsigned int xmlMainMasterId; // @synthesize xmlMainMasterId=mXmlMainMasterId;
- (id)uniqueXmlSlideLayout;	// IMP=0x0000000000434266
- (id)slideLayoutForXmlLayoutId:(unsigned short)arg1;	// IMP=0x00000000004341eb
- (void)setSlideLayout:(id)arg1 forXmlLayoutId:(unsigned short)arg2;	// IMP=0x0000000000434152
- (void *)sourceTextStyling;	// IMP=0x00000000000224a8
- (id)slideLayoutForSlideHolder:(id)arg1;	// IMP=0x000000000003c07a
- (void)cacheSlideLayouts;	// IMP=0x000000000003916c
- (id)allTargetLayoutTypes;	// IMP=0x0000000000037bfe
- (void)cacheTargetLayoutType:(int)arg1;	// IMP=0x0000000000035953
- (unsigned int)titlePbRef;	// IMP=0x0000000000433f7a
- (void)setTitlePbRef:(unsigned int)arg1;	// IMP=0x00000000001038d1
- (unsigned int)mainPbRef;	// IMP=0x0000000000433f68
- (void)setMainPbRef:(unsigned int)arg1;	// IMP=0x00000000000223ff
- (id)slideMaster;	// IMP=0x00000000000378b1
- (void)setSlideMaster:(id)arg1;	// IMP=0x00000000000223e0
- (void)dealloc;	// IMP=0x00000000000b3481
- (id)init;	// IMP=0x000000000002230f

@end

